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

#include "GLES/gl.h"

/* Available only in Common profile */
void glAlphaFunc (GLenum func, GLclampf ref) { return; }
void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { return; }
void glClearDepthf (GLclampf depth) { return; }
void glClipPlanef (GLenum plane, const GLfloat *equation) { return; }
void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { return; }
void glDepthRangef (GLclampf zNear, GLclampf zFar) { return; }
void glFogf (GLenum pname, GLfloat param) { return; }
void glFogfv (GLenum pname, const GLfloat *params) { return; }
void glFrustumf (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar) { return; }
void glGetClipPlanef (GLenum pname, GLfloat eqn[4]) { return; }
void glGetFloatv (GLenum pname, GLfloat *params) { return; }
void glGetLightfv (GLenum light, GLenum pname, GLfloat *params) { return; }
void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params) { return; }
void glGetTexEnvfv (GLenum env, GLenum pname, GLfloat *params) { return; }
void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params) { return; }
void glLightModelf (GLenum pname, GLfloat param) { return; }
void glLightModelfv (GLenum pname, const GLfloat *params) { return; }
void glLightf (GLenum light, GLenum pname, GLfloat param) { return; }
void glLightfv (GLenum light, GLenum pname, const GLfloat *params) { return; }
void glLineWidth (GLfloat width) { return; }
void glLoadMatrixf (const GLfloat *m) { return; }
void glMaterialf (GLenum face, GLenum pname, GLfloat param) { return; }
void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params) { return; }
void glMultMatrixf (const GLfloat *m) { return; }
void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { return; }
void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz) { return; }
void glOrthof (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar) { return; }
void glPointParameterf (GLenum pname, GLfloat param) { return; }
void glPointParameterfv (GLenum pname, const GLfloat *params) { return; }
void glPointSize (GLfloat size) { return; }
void glPolygonOffset (GLfloat factor, GLfloat units) { return; }
void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { return; }
void glScalef (GLfloat x, GLfloat y, GLfloat z) { return; }
void glTexEnvf (GLenum target, GLenum pname, GLfloat param) { return; }
void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params) { return; }
void glTexParameterf (GLenum target, GLenum pname, GLfloat param) { return; }
void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params) { return; }
void glTranslatef (GLfloat x, GLfloat y, GLfloat z) { return; }

/* Available in both Common and Common-Lite profiles */
void glActiveTexture (GLenum texture) { return; }
void glAlphaFuncx (GLenum func, GLclampx ref) { return; }
void glBindBuffer (GLenum target, GLuint buffer) { return; }
void glBindTexture (GLenum target, GLuint texture) { return; }
void glBlendFunc (GLenum sfactor, GLenum dfactor) { return; }
void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage) { return; }
void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data) { return; }
void glClear (GLbitfield mask) { return; }
void glClearColorx (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha) { return; }
void glClearDepthx (GLclampx depth) { return; }
void glClearStencil (GLint s) { return; }
void glClientActiveTexture (GLenum texture) { return; }
void glClipPlanex (GLenum plane, const GLfixed *equation) { return; }
void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) { return; }
void glColor4x (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) { return; }
void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { return; }
void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) { return; }
void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data) { return; }
void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { return; }
void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glCullFace (GLenum mode) { return; }
void glDeleteBuffers (GLsizei n, const GLuint *buffers) { return; }
void glDeleteTextures (GLsizei n, const GLuint *textures) { return; }
void glDepthFunc (GLenum func) { return; }
void glDepthMask (GLboolean flag) { return; }
void glDepthRangex (GLclampx zNear, GLclampx zFar) { return; }
void glDisable (GLenum cap) { return; }
void glDisableClientState (GLenum array) { return; }
void glDrawArrays (GLenum mode, GLint first, GLsizei count) { return; }
void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices) { return; }
void glEnable (GLenum cap) { return; }
void glEnableClientState (GLenum array) { return; }
void glFinish (void) { return; }
void glFlush (void) { return; }
void glFogx (GLenum pname, GLfixed param) { return; }
void glFogxv (GLenum pname, const GLfixed *params) { return; }
void glFrontFace (GLenum mode) { return; }
void glFrustumx (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar) { return; }
void glGetBooleanv (GLenum pname, GLboolean *params) { return; }
void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params) { return; }
void glGetClipPlanex (GLenum pname, GLfixed eqn[4]) { return; }
void glGenBuffers (GLsizei n, GLuint *buffers) { return; }
void glGenTextures (GLsizei n, GLuint *textures) { return; }
GLenum glGetError (void) { return 0; }
void glGetFixedv (GLenum pname, GLfixed *params) { return; }
void glGetIntegerv (GLenum pname, GLint *params) { return; }
void glGetLightxv (GLenum light, GLenum pname, GLfixed *params) { return; }
void glGetMaterialxv (GLenum face, GLenum pname, GLfixed *params) { return; }
void glGetPointerv (GLenum pname, void **params) { return; }
const GLubyte * GL_APIENTRY glGetString (GLenum name) { return 0; }
void glGetTexEnviv (GLenum env, GLenum pname, GLint *params) { return; }
void glGetTexEnvxv (GLenum env, GLenum pname, GLfixed *params) { return; }
void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params) { return; }
void glGetTexParameterxv (GLenum target, GLenum pname, GLfixed *params) { return; }
void glHint (GLenum target, GLenum mode) { return; }
GLboolean glIsBuffer (GLuint buffer) { return 0; }
GLboolean glIsEnabled (GLenum cap) { return 0; }
GLboolean glIsTexture (GLuint texture) { return 0; }
void glLightModelx (GLenum pname, GLfixed param) { return; }
void glLightModelxv (GLenum pname, const GLfixed *params) { return; }
void glLightx (GLenum light, GLenum pname, GLfixed param) { return; }
void glLightxv (GLenum light, GLenum pname, const GLfixed *params) { return; }
void glLineWidthx (GLfixed width) { return; }
void glLoadIdentity (void) { return; }
void glLoadMatrixx (const GLfixed *m) { return; }
void glLogicOp (GLenum opcode) { return; }
void glMaterialx (GLenum face, GLenum pname, GLfixed param) { return; }
void glMaterialxv (GLenum face, GLenum pname, const GLfixed *params) { return; }
void glMatrixMode (GLenum mode) { return; }
void glMultMatrixx (const GLfixed *m) { return; }
void glMultiTexCoord4x (GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q) { return; }
void glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz) { return; }
void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glOrthox (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar) { return; }
void glPixelStorei (GLenum pname, GLint param) { return; }
void glPointParameterx (GLenum pname, GLfixed param) { return; }
void glPointParameterxv (GLenum pname, const GLfixed *params) { return; }
void glPointSizex (GLfixed size) { return; }
void glPolygonOffsetx (GLfixed factor, GLfixed units) { return; }
void glPopMatrix (void) { return; }
void glPushMatrix (void) { return; }
void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels) { return; }
void glRotatex (GLfixed angle, GLfixed x, GLfixed y, GLfixed z) { return; }
void glSampleCoverage (GLclampf value, GLboolean invert) { return; }
void glSampleCoveragex (GLclampx value, GLboolean invert) { return; }
void glScalex (GLfixed x, GLfixed y, GLfixed z) { return; }
void glScissor (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glShadeModel (GLenum mode) { return; }
void glStencilFunc (GLenum func, GLint ref, GLuint mask) { return; }
void glStencilMask (GLuint mask) { return; }
void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass) { return; }
void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glTexEnvi (GLenum target, GLenum pname, GLint param) { return; }
void glTexEnvx (GLenum target, GLenum pname, GLfixed param) { return; }
void glTexEnviv (GLenum target, GLenum pname, const GLint *params) { return; }
void glTexEnvxv (GLenum target, GLenum pname, const GLfixed *params) { return; }
void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels) { return; }
void glTexParameteri (GLenum target, GLenum pname, GLint param) { return; }
void glTexParameterx (GLenum target, GLenum pname, GLfixed param) { return; }
void glTexParameteriv (GLenum target, GLenum pname, const GLint *params) { return; }
void glTexParameterxv (GLenum target, GLenum pname, const GLfixed *params) { return; }
void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels) { return; }
void glTranslatex (GLfixed x, GLfixed y, GLfixed z) { return; }
void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glViewport (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glPointSizePointerOES (GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
