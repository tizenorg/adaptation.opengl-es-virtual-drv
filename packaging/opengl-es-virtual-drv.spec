Name:       opengl-es-virtual-drv
Summary:    The Virtual OpenGL ES library
Version:    0.1.3
Release:    10
ExclusiveArch:  %arm
AutoReq: 0
Group:      System/X Hardware Support
License:    Samsung
Source0:    %{name}-%{version}.tar.gz
Provides:   opengl-es-drv
Conflicts:  opengl-es-mali400mp
Conflicts:  opengl-es-omap4430-sgx540
Conflicts:  opengl-es-sgx540

%description
The OpenGL ES library provides OpenGL ES 1.1 and OpenGL ES 2.0.

This package contains the dummy shared libraries.


%package devel
Summary:    Development files for the OpenGL ES library
Group:      TO_BE/FILLED_IN
Requires:   %{name} = %{version}-%{release}
Provides:   opengl-es-drv-devel
Conflicts:  opengl-es-mali400mp-devel
Conflicts:  opengl-es-omap4430-sgx540-devel
Conflicts:  opengl-es-sgx540-devel

%description devel
The OpenGL ES library provides OpenGL ES 1.1 and OpenGL ES 2.0.
.
This package contains the the development libraries, header files
needed by programs that want to compile with OpenGL ES.


%prep
%setup -q -n %{name}-%{version}

%build
./autogen.sh
%configure --disable-static --prefix=%{_prefix}

make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}

%make_install
mkdir -p %{buildroot}%{_includedir}
cp -a src/include/KHR %{buildroot}%{_includedir}


%files
%defattr(-,root,root,-)
%{_libdir}/libGLESv1_CM.so
%{_libdir}/libGLESv2.so
%{_libdir}/libEGL.so


%files devel
%defattr(-,root,root,-)
%{_includedir}/GLES/gl.h
%{_includedir}/GLES/glplatform.h
%{_includedir}/GLES/glext.h
%{_includedir}/EGL/egl.h
%{_includedir}/EGL/eglext.h
%{_includedir}/EGL/eglplatform.h
%{_includedir}/GLES2/gl2.h
%{_includedir}/GLES2/gl2platform.h
%{_includedir}/GLES2/gl2ext.h
%{_includedir}/KHR/khrplatform.h
%{_libdir}/pkgconfig/gles20.pc
%{_libdir}/pkgconfig/gles11.pc
