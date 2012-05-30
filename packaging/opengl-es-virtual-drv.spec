Name:       opengl-es-virtual-drv
Summary:    The Virtual OpenGL ES library
Version:    0.2.0
Release:    1
Group:      TO_BE/FILLED_IN
License:    Apache-2.0
Source0:    %{name}-%{version}.tar.gz
Source1001: packaging/opengl-es-virtual-drv.manifest 
BuildRequires:  pkgconfig(x11) 


%description
The OpenGL ES library provides OpenGL ES 1.1 and OpenGL ES 2.0.
This package contains the dummy shared libraries.


%package devel
Group:    TO_BE/FILLED_IN
Summary:  opengl-es virtual driver development


%description devel
The OpenGL ES library provides OpenGL ES 1.1 and OpenGL ES 2.0.
This package contains the the development libraries, header files
needed by programs that want to compile with OpenGL ES.


%prep
%setup -q -n %{name}-%{version}


%build
cp %{SOURCE1001} .
%reconfigure
make %{?jobs:-j%jobs}


%install
rm -rf %{buildroot}
%make_install


%files
%manifest opengl-es-virtual-drv.manifest
%defattr(-,root,root,-)
%doc LICENSE
%{_libdir}/*.so*


%files devel
%manifest opengl-es-virtual-drv.manifest
%defattr(-,root,root,-)
%{_includedir}/EGL/*.h
%{_includedir}/GLES/*.h
%{_includedir}/GLES2/*.h
%{_libdir}/pkgconfig/gles11.pc
%{_libdir}/pkgconfig/gles20.pc
