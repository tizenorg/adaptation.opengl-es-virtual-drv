CC = gcc
CFLAGS += -fpic -I./$(SRC_DIR)/include/

SRC_DIR = src
SRCS += \
		egl.c \
		gles1.c \
		gles2.c \
		gles3.c

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

OBJS := $(SRCS:.c=.o)

libEGL.so: egl.o
	$(CC) -shared -o $@ $<

libGLESv1_CM.so: gles1.o
	$(CC) -shared -o $@ $<

libGLESv2.so: gles2.o
	$(CC) -shared -o $@ $<

libGLESv3.so: gles3.o
	$(CC) -shared -o $@ $<

.DEFAULT_GOAL = all
all: libEGL.so libGLESv1_CM.so libGLESv2.so libGLESv3.so

clean:
	@echo "cleaning up..."
	@rm -fR $(OBJS)
	@rm -fR libEGL.so libGLESv1_CM.so libGLESv2.so libGLESv3.so
	@echo "done"

install: all
	@echo "installing EGL..."
	@mkdir -p $(prefix)/include/EGL
	@cp libEGL.so $(prefix)/lib/
	@cp $(SRC_DIR)/include/EGL/egl.h $(prefix)/include/EGL/
	@cp $(SRC_DIR)/include/EGL/eglext.h $(prefix)/include/EGL/
	@cp $(SRC_DIR)/include/EGL/eglplatform.h $(prefix)/include/EGL/
	@echo "installing GLESv1..."
	@mkdir -p $(prefix)/include/GLES
	@cp libGLESv1_CM.so $(prefix)/lib/
	@cp $(SRC_DIR)/include/GLES/egl.h $(prefix)/include/GLES/
	@cp $(SRC_DIR)/include/GLES/gl.h $(prefix)/include/GLES/
	@cp $(SRC_DIR)/include/GLES/glext.h $(prefix)/include/GLES/
	@cp $(SRC_DIR)/include/GLES/glplatform.h $(prefix)/include/GLES/
	@echo "installing GLESv2..."
	@mkdir -p $(prefix)/include/GLES2
	@cp libGLESv2.so $(prefix)/lib/
	@cp $(SRC_DIR)/include/GLES2/gl2.h $(prefix)/include/GLES2/
	@cp $(SRC_DIR)/include/GLES2/gl2ext.h $(prefix)/include/GLES2/
	@cp $(SRC_DIR)/include/GLES2/gl2platform.h $(prefix)/include/GLES2/
	@echo "installing GLESv3..."
	@mkdir -p $(prefix)/include/GLES3
	@cp libGLESv3.so $(prefix)/lib/
	@cp $(SRC_DIR)/include/GLES3/gl3.h $(prefix)/include/GLES3/
	@cp $(SRC_DIR)/include/GLES3/gl31.h $(prefix)/include/GLES3/
	@cp $(SRC_DIR)/include/GLES3/gl3platform.h $(prefix)/include/GLES3/
	@echo "installing KHR..."
	@mkdir -p $(prefix)/include/KHR
	@cp $(SRC_DIR)/include/KHR/khrplatform.h $(prefix)/include/KHR/
	@echo "installing pkgconfig..."
	@mkdir -p $(prefix)/lib/pkgconfig
	@cp pkgconfig/gles11.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/gles20.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/gles30.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/gles31.pc $(prefix)/lib/pkgconfig/
	@echo "install completed."

uninstall:
	-rm -fr $(prefix)/include/EGL/
	-rm -fr $(prefix)/lib/libEGL.so
	-rm -fr $(prefix)/include/GLES/
	-rm -fr $(prefix)/lib/libGLESv1_CM.so
	-rm -fr $(prefix)/include/GLES2/
	-rm -fr $(prefix)/lib/libGLESv2.so
	-rm -fr $(prefix)/include/GLES3/
	-rm -fr $(prefix)/lib/libGLESv3.so
	-rm -fr $(prefix)/include/KHR/
	-rm -fr $(prefix)/lib/pkgconfig/gles11.pc
	-rm -fr $(prefix)/lib/pkgconfig/gles20.pc
	-rm -fr $(prefix)/lib/pkgconfig/gles30.pc
	-rm -fr $(prefix)/lib/pkgconfig/gles31.pc
