/*
 * opengl-es-virtual-drv
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Minsu Han <minsu81.han@samsung.com>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and 
 * limitations under the License.
 *
 */

#include "EGL/egl.h"

EGLint eglGetError(void) { return 0; }
EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id) { return 0; }
EGLBoolean eglInitialize(EGLDisplay dpy, EGLint *major, EGLint *minor) { return 0; }
EGLBoolean eglTerminate(EGLDisplay dpy) { return 0; }
const char * eglQueryString(EGLDisplay dpy, EGLint name) { return 0; }
EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config) { return 0; }
EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config) { return 0; }
EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value) { return 0; }
EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list) { return 0; }
EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list) { return 0; }
EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list) { return 0; }
EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface) { return 0; }
EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value) { return 0; }
EGLBoolean eglBindAPI(EGLenum api) { return 0; }
EGLenum eglQueryAPI(void) { return 0; }
EGLBoolean eglWaitClient(void) { return 0; }
EGLBoolean eglReleaseThread(void) { return 0; }
EGLSurface eglCreatePbufferFromClientBuffer( EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list) { return 0; }
EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value) { return 0; }
EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) { return 0; }
EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) { return 0; }
EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval) { return 0; }
EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list) { return 0; }
EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx) { return 0; }
EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) { return 0; }
EGLContext eglGetCurrentContext(void) { return 0; }
EGLSurface eglGetCurrentSurface(EGLint readdraw) { return 0; }
EGLDisplay eglGetCurrentDisplay(void) { return 0; }
EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value) { return 0; }
EGLBoolean eglWaitGL(void) { return 0; }
EGLBoolean eglWaitNative(EGLint engine) { return 0; }
EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) { return 0; }
EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target) { return 0; }
__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char *procname) { return 0; }
