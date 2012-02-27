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

#include "GLES2/gl2.h"

void glActiveTexture (GLenum texture) { return; }
void glAttachShader (GLuint program, GLuint shader) { return; }
void glBindAttribLocation (GLuint program, GLuint index, const char* name) { return; }
void glBindBuffer (GLenum target, GLuint buffer) { return; }
void glBindFramebuffer (GLenum target, GLuint framebuffer) { return; }
void glBindRenderbuffer (GLenum target, GLuint renderbuffer) { return; }
void glBindTexture (GLenum target, GLuint texture) { return; }
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { return; }
void glBlendEquation( GLenum mode ) { return; }
void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) { return; }
void glBlendFunc (GLenum sfactor, GLenum dfactor) { return; }
void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) { return; }
void glBufferData (GLenum target, GLsizeiptr size, const void* data, GLenum usage) { return; }
void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void* data) { return; }
GLenum glCheckFramebufferStatus (GLenum target) { return 0; }
void glClear (GLbitfield mask) { return; }
void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { return; }
void glClearDepthf (GLclampf depth) { return; }
void glClearStencil (GLint s) { return; }
void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { return; }
void glCompileShader (GLuint shader) { return; }
void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data) { return; }
void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data) { return; }
void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { return; }
void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return; }
GLuint glCreateProgram (void) { return 0; }
GLuint glCreateShader (GLenum type) { return 0; }
void glCullFace (GLenum mode) { return; }
void glDeleteBuffers (GLsizei n, const GLuint* buffers) { return; }
void glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers) { return; }
void glDeleteProgram (GLuint program) { return; }
void glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers) { return; }
void glDeleteShader (GLuint shader) { return; }
void glDeleteTextures (GLsizei n, const GLuint* textures) { return; }
void glDepthFunc (GLenum func) { return; }
void glDepthMask (GLboolean flag) { return; }
void glDepthRangef (GLclampf zNear, GLclampf zFar) { return; }
void glDetachShader (GLuint program, GLuint shader) { return; }
void glDisable (GLenum cap) { return; }
void glDisableVertexAttribArray (GLuint index) { return; }
void glDrawArrays (GLenum mode, GLint first, GLsizei count) { return; }
void glDrawElements (GLenum mode, GLsizei count, GLenum type, const void* indices) { return; }
void glEnable (GLenum cap) { return; }
void glEnableVertexAttribArray (GLuint index) { return; }
void glFinish (void) { return; }
void glFlush (void) { return; }
void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { return; }
void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { return; }
void glFrontFace (GLenum mode) { return; }
void glGenBuffers (GLsizei n, GLuint* buffers) { return; }
void glGenerateMipmap (GLenum target) { return; }
void glGenFramebuffers (GLsizei n, GLuint* framebuffers) { return; }
void glGenRenderbuffers (GLsizei n, GLuint* renderbuffers) { return; }
void glGenTextures (GLsizei n, GLuint* textures) { return; }
void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name) { return; }
void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name) { return; }
void glGetAttachedShaders (GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders) { return; }
int glGetAttribLocation (GLuint program, const char* name) { return 0; }
void glGetBooleanv (GLenum pname, GLboolean* params) { return; }
void glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params) { return; }
GLenum glGetError (void) { return 0; }
void glGetFloatv (GLenum pname, GLfloat* params) { return; }
void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params) { return; }
void glGetIntegerv (GLenum pname, GLint* params) { return; }
void glGetProgramiv (GLuint program, GLenum pname, GLint* params) { return; }
void glGetProgramInfoLog (GLuint program, GLsizei bufsize, GLsizei* length, char* infolog) { return; }
void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params) { return; }
void glGetShaderiv (GLuint shader, GLenum pname, GLint* params) { return; }
void glGetShaderInfoLog (GLuint shader, GLsizei bufsize, GLsizei* length, char* infolog) { return; }
void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) { return; }
void glGetShaderSource (GLuint shader, GLsizei bufsize, GLsizei* length, char* source) { return; }
const GLubyte* glGetString (GLenum name) { return 0; }
void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat* params) { return; }
void glGetTexParameteriv (GLenum target, GLenum pname, GLint* params) { return; }
void glGetUniformfv (GLuint program, GLint location, GLfloat* params) { return; }
void glGetUniformiv (GLuint program, GLint location, GLint* params) { return; }
int glGetUniformLocation (GLuint program, const char* name) { return 0; }
void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params) { return; }
void glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params) { return; }
void glGetVertexAttribPointerv (GLuint index, GLenum pname, void** pointer) { return; }
void glHint (GLenum target, GLenum mode) { return 0; }
GLboolean glIsBuffer (GLuint buffer) { return 0; }
GLboolean glIsEnabled (GLenum cap) { return 0; }
GLboolean glIsFramebuffer (GLuint framebuffer) { return 0; }
GLboolean glIsProgram (GLuint program) { return 0; }
GLboolean glIsRenderbuffer (GLuint renderbuffer) { return 0; }
GLboolean glIsShader (GLuint shader) { return 0; }
GLboolean glIsTexture (GLuint texture) { return 0; }
void glLineWidth (GLfloat width) { return; }
void glLinkProgram (GLuint program) { return; }
void glPixelStorei (GLenum pname, GLint param) { return; }
void glPolygonOffset (GLfloat factor, GLfloat units) { return; }
void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels) { return; }
void glReleaseShaderCompiler (void) { return; }
void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { return; }
void glSampleCoverage (GLclampf value, GLboolean invert) { return; }
void glScissor (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glShaderBinary (GLsizei n, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length) { return; }
void glShaderSource (GLuint shader, GLsizei count, const char** string, const GLint* length) { return; }
void glStencilFunc (GLenum func, GLint ref, GLuint mask) { return; }
void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask) { return; }
void glStencilMask (GLuint mask) { return; }
void glStencilMaskSeparate (GLenum face, GLuint mask) { return; }
void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass) { return; }
void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass) { return; }
void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels) { return; }
void glTexParameterf (GLenum target, GLenum pname, GLfloat param) { return; }
void glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params) { return; }
void glTexParameteri (GLenum target, GLenum pname, GLint param) { return; }
void glTexParameteriv (GLenum target, GLenum pname, const GLint* params) { return; }
void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) { return; }
void glUniform1f (GLint location, GLfloat x) { return; }
void glUniform1fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform1i (GLint location, GLint x) { return; }
void glUniform1iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniform2f (GLint location, GLfloat x, GLfloat y) { return; }
void glUniform2fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform2i (GLint location, GLint x, GLint y) { return; }
void glUniform2iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniform3f (GLint location, GLfloat x, GLfloat y, GLfloat z) { return; }
void glUniform3fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform3i (GLint location, GLint x, GLint y, GLint z) { return; }
void glUniform3iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniform4f (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return; }
void glUniform4fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform4i (GLint location, GLint x, GLint y, GLint z, GLint w) { return; }
void glUniform4iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { return; }
void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { return; }
void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { return; }
void glUseProgram (GLuint program) { return; }
void glValidateProgram (GLuint program) { return; }
void glVertexAttrib1f (GLuint indx, GLfloat x) { return; }
void glVertexAttrib1fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttrib2f (GLuint indx, GLfloat x, GLfloat y) { return; }
void glVertexAttrib2fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttrib3f (GLuint indx, GLfloat x, GLfloat y, GLfloat z) { return; }
void glVertexAttrib3fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttrib4f (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return; }
void glVertexAttrib4fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttribPointer (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* ptr) { return; }
void glViewport (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
