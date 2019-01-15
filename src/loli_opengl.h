#include "loli.h"
#include <string.h>

#ifdef __APPLE__
    #include <GLUT/glut.h>
    #include <stdlib.h>
#else
    #include <GL/glut.h>
#endif

#ifndef LOLIGL_VERSION
    #define LOLIGL_VERSION "undefined"
#endif

void loli_GL__loliGlVersion                    (loli_state *);

// Glut
void loli_GL__glutInit                         (loli_state *);
void loli_GL__glutInitDisplayMode              (loli_state *);
void loli_GL__glutInitWindowSize               (loli_state *);
void loli_GL__glutInitWindowPosition           (loli_state *);
void loli_GL__glutInitDisplayString            (loli_state *);

void loli_GL__glutCreateWindow                 (loli_state *);
void loli_GL__glutCreateSubWindow              (loli_state *);
void loli_GL__glutDestroyWindow                (loli_state *);
void loli_GL__glutSetWindow                    (loli_state *);
void loli_GL__glutGetWindow                    (loli_state *);
void loli_GL__glutSetWindowTitle               (loli_state *);
void loli_GL__glutSetIconTitle                 (loli_state *);
void loli_GL__glutReshapeWindow                (loli_state *);
void loli_GL__glutPositionWindow               (loli_state *);
void loli_GL__glutShowWindow                   (loli_state *);
void loli_GL__glutHideWindow                   (loli_state *);
void loli_GL__glutIconifyWindow                (loli_state *);
void loli_GL__glutPopWindow                    (loli_state *);
void loli_GL__glutFullScreen                   (loli_state *);

void loli_GL__glutPostWindowRedisplay          (loli_state *);
void loli_GL__glutPostRedisplay                (loli_state *);
void loli_GL__glutSwapBuffers                  (loli_state *);

void loli_GL__glutWarpPointer                  (loli_state *);
void loli_GL__glutSetCursor                    (loli_state *);

void loli_GL__glutMainLoop                     (loli_state *);
void loli_GL__glutDisplayFunc                  (loli_state *);
void loli_GL__glutKeyboardFunc                 (loli_state *);

// TODO: delete it
void loli_GL__example                          (loli_state *);

// OpenGL
void loli_GL__glEnd                            (loli_state *);
void loli_GL__glFlush                          (loli_state *);

void loli_GL_var_GLUT_RGB                      (loli_state *);
void loli_GL_var_GLUT_RGBA                     (loli_state *);
void loli_GL_var_GLUT_INDEX                    (loli_state *);
void loli_GL_var_GLUT_SINGLE                   (loli_state *);
void loli_GL_var_GLUT_DOUBLE                   (loli_state *);
void loli_GL_var_GLUT_ACCUM                    (loli_state *);
void loli_GL_var_GLUT_ALPHA                    (loli_state *);
void loli_GL_var_GLUT_DEPTH                    (loli_state *);
void loli_GL_var_GLUT_STENCIL                  (loli_state *);
void loli_GL_var_GLUT_MULTISAMPLE              (loli_state *);
void loli_GL_var_GLUT_STEREO                   (loli_state *);
void loli_GL_var_GLUT_LUMINANCE                (loli_state *);

void loli_GL_var_GLUT_MENU_NOT_IN_USE          (loli_state *);
void loli_GL_var_GLUT_MENU_IN_USE              (loli_state *);
void loli_GL_var_GLUT_NOT_VISIBLE              (loli_state *);
void loli_GL_var_GLUT_VISIBLE                  (loli_state *);
void loli_GL_var_GLUT_HIDDEN                   (loli_state *);
void loli_GL_var_GLUT_FULLY_RETAINED           (loli_state *);
void loli_GL_var_GLUT_PARTIALLY_RETAINED       (loli_state *);
void loli_GL_var_GLUT_FULLY_COVERED            (loli_state *);

void loli_GL_var_GLUT_KEY_F1                   (loli_state *);
void loli_GL_var_GLUT_KEY_F2                   (loli_state *);
void loli_GL_var_GLUT_KEY_F3                   (loli_state *);
void loli_GL_var_GLUT_KEY_F4                   (loli_state *);
void loli_GL_var_GLUT_KEY_F5                   (loli_state *);
void loli_GL_var_GLUT_KEY_F6                   (loli_state *);
void loli_GL_var_GLUT_KEY_F7                   (loli_state *);
void loli_GL_var_GLUT_KEY_F8                   (loli_state *);
void loli_GL_var_GLUT_KEY_F9                   (loli_state *);
void loli_GL_var_GLUT_KEY_F10                  (loli_state *);
void loli_GL_var_GLUT_KEY_F11                  (loli_state *);
void loli_GL_var_GLUT_KEY_F12                  (loli_state *);
void loli_GL_var_GLUT_KEY_LEFT                 (loli_state *);
void loli_GL_var_GLUT_KEY_UP                   (loli_state *);
void loli_GL_var_GLUT_KEY_RIGHT                (loli_state *);
void loli_GL_var_GLUT_KEY_DOWN                 (loli_state *);
void loli_GL_var_GLUT_KEY_PAGE_UP              (loli_state *);
void loli_GL_var_GLUT_KEY_PAGE_DOWN            (loli_state *);
void loli_GL_var_GLUT_KEY_HOME                 (loli_state *);
void loli_GL_var_GLUT_KEY_END                  (loli_state *);
void loli_GL_var_GLUT_KEY_INSERT               (loli_state *);


void loli_GL_var_GL_FALSE                      (loli_state *);
void loli_GL_var_GL_TRUE                       (loli_state *);
void loli_GL_var_GL_BYTE                       (loli_state *);
void loli_GL_var_GL_UNSIGNED_BYTE              (loli_state *);
void loli_GL_var_GL_SHORT                      (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT             (loli_state *);
void loli_GL_var_GL_INT                        (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT               (loli_state *);
void loli_GL_var_GL_FLOAT                      (loli_state *);
void loli_GL_var_GL_2_BYTES                    (loli_state *);
void loli_GL_var_GL_3_BYTES                    (loli_state *);
void loli_GL_var_GL_4_BYTES                    (loli_state *);
void loli_GL_var_GL_DOUBLE                     (loli_state *);
void loli_GL_var_GL_POINTS                     (loli_state *);
void loli_GL_var_GL_LINES                      (loli_state *);
void loli_GL_var_GL_LINE_LOOP                  (loli_state *);
void loli_GL_var_GL_LINE_STRIP                 (loli_state *);
void loli_GL_var_GL_TRIANGLES                  (loli_state *);
void loli_GL_var_GL_TRIANGLE_STRIP             (loli_state *);
void loli_GL_var_GL_QUADS                      (loli_state *);
void loli_GL_var_GL_QUAD_STRIP                 (loli_state *);
void loli_GL_var_GL_POLYGON                    (loli_state *);
void loli_GL_var_GL_VERTEX_ARRAY               (loli_state *);
void loli_GL_var_GL_NORMAL_ARRAY               (loli_state *);
void loli_GL_var_GL_COLOR_ARRAY                (loli_state *);
void loli_GL_var_GL_INDEX_ARRAY                (loli_state *);
void loli_GL_var_GL_TEXTURE_COORD_ARRAY        (loli_state *);
void loli_GL_var_GL_EDGE_FLAG_ARRAY            (loli_state *);
void loli_GL_var_GL_VERTEX_ARRAY_SIZE          (loli_state *);
void loli_GL_var_GL_VERTEX_ARRAY_TYPE          (loli_state *);
void loli_GL_var_GL_VERTEX_ARRAY_STRIDE        (loli_state *);
void loli_GL_var_GL_NORMAL_ARRAY_TYPE          (loli_state *);
void loli_GL_var_GL_NORMAL_ARRAY_STRIDE        (loli_state *);
void loli_GL_var_GL_COLOR_ARRAY_SIZE           (loli_state *);
void loli_GL_var_GL_COLOR_ARRAY_TYPE           (loli_state *);
void loli_GL_var_GL_COLOR_ARRAY_STRIDE         (loli_state *);
void loli_GL_var_GL_INDEX_ARRAY_TYPE           (loli_state *);
void loli_GL_var_GL_INDEX_ARRAY_STRIDE         (loli_state *);
void loli_GL_var_GL_TEXTURE_COORD_ARRAY_SIZE   (loli_state *);
void loli_GL_var_GL_TEXTURE_COORD_ARRAY_TYPE   (loli_state *);
void loli_GL_var_GL_TEXTURE_COORD_ARRAY_STRIDE (loli_state *);
void loli_GL_var_GL_EDGE_FLAG_ARRAY_STRIDE     (loli_state *);
void loli_GL_var_GL_VERTEX_ARRAY_POINTER       (loli_state *);
void loli_GL_var_GL_NORMAL_ARRAY_POINTER       (loli_state *);
void loli_GL_var_GL_COLOR_ARRAY_POINTER        (loli_state *);
void loli_GL_var_GL_INDEX_ARRAY_POINTER        (loli_state *);
void loli_GL_var_GL_TEXTURE_COORD_ARRAY_POINTER(loli_state *);
void loli_GL_var_GL_EDGE_FLAG_ARRAY_POINTER    (loli_state *);
void loli_GL_var_GL_V2F                        (loli_state *);
void loli_GL_var_GL_V3F                        (loli_state *);
void loli_GL_var_GL_C4UB_V2F                   (loli_state *);
void loli_GL_var_GL_C4UB_V3F                   (loli_state *);
void loli_GL_var_GL_C3F_V3F                    (loli_state *);
void loli_GL_var_GL_N3F_V3F                    (loli_state *);
void loli_GL_var_GL_C4F_N3F_V3F                (loli_state *);
void loli_GL_var_GL_T2F_V3F                    (loli_state *);
void loli_GL_var_GL_T4F_V4F                    (loli_state *);
void loli_GL_var_GL_T2F_C4UB_V3F               (loli_state *);
void loli_GL_var_GL_T2F_C3F_V3F                (loli_state *);
void loli_GL_var_GL_T2F_N3F_V3F                (loli_state *);
void loli_GL_var_GL_T2F_C4F_N3F_V3F            (loli_state *);
void loli_GL_var_GL_T4F_C4F_N3F_V4F            (loli_state *);
void loli_GL_var_GL_MATRIX_MODE                (loli_state *);
void loli_GL_var_GL_MODELVIEW                  (loli_state *);
void loli_GL_var_GL_PROJECTION                 (loli_state *);
void loli_GL_var_GL_TEXTURE                    (loli_state *);
void loli_GL_var_GL_POINT_SMOOTH               (loli_state *);
void loli_GL_var_GL_POINT_SIZE                 (loli_state *);
void loli_GL_var_GL_POINT_SIZE_GRANULARITY     (loli_state *);
void loli_GL_var_GL_POINT_SIZE_RANGE           (loli_state *);
void loli_GL_var_GL_LINE_SMOOTH                (loli_state *);
void loli_GL_var_GL_LINE_STIPPLE               (loli_state *);
void loli_GL_var_GL_LINE_STIPPLE_PATTERN       (loli_state *);
void loli_GL_var_GL_LINE_STIPPLE_REPEAT        (loli_state *);
void loli_GL_var_GL_LINE_WIDTH                 (loli_state *);
void loli_GL_var_GL_LINE_WIDTH_GRANULARITY     (loli_state *);
void loli_GL_var_GL_LINE_WIDTH_RANGE           (loli_state *);
void loli_GL_var_GL_POINT                      (loli_state *);
void loli_GL_var_GL_LINE                       (loli_state *);
void loli_GL_var_GL_FILL                       (loli_state *);
void loli_GL_var_GL_CW                         (loli_state *);
void loli_GL_var_GL_CCW                        (loli_state *);
void loli_GL_var_GL_FRONT                      (loli_state *);
void loli_GL_var_GL_BACK                       (loli_state *);
void loli_GL_var_GL_POLYGON_MODE               (loli_state *);
void loli_GL_var_GL_POLYGON_SMOOTH             (loli_state *);
void loli_GL_var_GL_POLYGON_STIPPLE            (loli_state *);
void loli_GL_var_GL_EDGE_FLAG                  (loli_state *);
void loli_GL_var_GL_CULL_FACE                  (loli_state *);
void loli_GL_var_GL_CULL_FACE_MODE             (loli_state *);
void loli_GL_var_GL_FRONT_FACE                 (loli_state *);
void loli_GL_var_GL_POLYGON_OFFSET_FACTOR      (loli_state *);
void loli_GL_var_GL_POLYGON_OFFSET_UNITS       (loli_state *);
void loli_GL_var_GL_POLYGON_OFFSET_POINT       (loli_state *);
void loli_GL_var_GL_POLYGON_OFFSET_LINE        (loli_state *);
void loli_GL_var_GL_POLYGON_OFFSET_FILL        (loli_state *);
void loli_GL_var_GL_COMPILE                    (loli_state *);
void loli_GL_var_GL_COMPILE_AND_EXECUTE        (loli_state *);
void loli_GL_var_GL_LIST_BASE                  (loli_state *);
void loli_GL_var_GL_LIST_INDEX                 (loli_state *);
void loli_GL_var_GL_LIST_MODE                  (loli_state *);
void loli_GL_var_GL_NEVER                      (loli_state *);
void loli_GL_var_GL_LESS                       (loli_state *);
void loli_GL_var_GL_EQUAL                      (loli_state *);
void loli_GL_var_GL_LEQUAL                     (loli_state *);
void loli_GL_var_GL_GREATER                    (loli_state *);
void loli_GL_var_GL_NOTEQUAL                   (loli_state *);
void loli_GL_var_GL_GEQUAL                     (loli_state *);
void loli_GL_var_GL_ALWAYS                     (loli_state *);
void loli_GL_var_GL_DEPTH_TEST                 (loli_state *);
void loli_GL_var_GL_DEPTH_BITS                 (loli_state *);
void loli_GL_var_GL_DEPTH_CLEAR_VALUE          (loli_state *);
void loli_GL_var_GL_DEPTH_FUNC                 (loli_state *);
void loli_GL_var_GL_DEPTH_RANGE                (loli_state *);
void loli_GL_var_GL_DEPTH_WRITEMASK            (loli_state *);
void loli_GL_var_GL_DEPTH_COMPONENT            (loli_state *);


loli_call_entry_func loli_GL_call_table[] = {
        NULL,
        loli_GL__loliGlVersion,
        loli_GL__glutInit,
        loli_GL__glutInitDisplayMode,
        loli_GL__glutInitWindowSize,
        loli_GL__glutInitWindowPosition,
        loli_GL__glutInitDisplayString,

        loli_GL__glutCreateWindow,
        loli_GL__glutCreateSubWindow,
        loli_GL__glutDestroyWindow,
        loli_GL__glutSetWindow,
        loli_GL__glutGetWindow,
        loli_GL__glutSetWindowTitle,
        loli_GL__glutSetIconTitle,
        loli_GL__glutReshapeWindow,
        loli_GL__glutPositionWindow,
        loli_GL__glutShowWindow,
        loli_GL__glutHideWindow,
        loli_GL__glutIconifyWindow,
        loli_GL__glutPopWindow,
        loli_GL__glutFullScreen,

        loli_GL__glutPostWindowRedisplay,
        loli_GL__glutPostRedisplay,
        loli_GL__glutSwapBuffers,

        loli_GL__glutWarpPointer,
        loli_GL__glutSetCursor,

        loli_GL__glutMainLoop,

        loli_GL__glutDisplayFunc,
        loli_GL__glutKeyboardFunc,

        // TODO: delete it
        loli_GL__example,

        loli_GL__glEnd,
        loli_GL__glFlush,

        loli_GL_var_GLUT_RGB,
        loli_GL_var_GLUT_RGBA,
        loli_GL_var_GLUT_INDEX,
        loli_GL_var_GLUT_SINGLE,
        loli_GL_var_GLUT_DOUBLE,
        loli_GL_var_GLUT_ACCUM,
        loli_GL_var_GLUT_ALPHA,
        loli_GL_var_GLUT_DEPTH,
        loli_GL_var_GLUT_STENCIL,
        loli_GL_var_GLUT_MULTISAMPLE,
        loli_GL_var_GLUT_STEREO,
        loli_GL_var_GLUT_LUMINANCE,

        loli_GL_var_GLUT_MENU_NOT_IN_USE,
        loli_GL_var_GLUT_MENU_IN_USE,
        loli_GL_var_GLUT_NOT_VISIBLE,
        loli_GL_var_GLUT_VISIBLE,
        loli_GL_var_GLUT_HIDDEN,
        loli_GL_var_GLUT_FULLY_RETAINED,
        loli_GL_var_GLUT_PARTIALLY_RETAINED,
        loli_GL_var_GLUT_FULLY_COVERED,

        loli_GL_var_GLUT_KEY_F1,
        loli_GL_var_GLUT_KEY_F2,
        loli_GL_var_GLUT_KEY_F3,
        loli_GL_var_GLUT_KEY_F4,
        loli_GL_var_GLUT_KEY_F5,
        loli_GL_var_GLUT_KEY_F6,
        loli_GL_var_GLUT_KEY_F7,
        loli_GL_var_GLUT_KEY_F8,
        loli_GL_var_GLUT_KEY_F9,
        loli_GL_var_GLUT_KEY_F10,
        loli_GL_var_GLUT_KEY_F11,
        loli_GL_var_GLUT_KEY_F12,
        loli_GL_var_GLUT_KEY_LEFT,
        loli_GL_var_GLUT_KEY_UP,
        loli_GL_var_GLUT_KEY_RIGHT,
        loli_GL_var_GLUT_KEY_DOWN,
        loli_GL_var_GLUT_KEY_PAGE_UP,
        loli_GL_var_GLUT_KEY_PAGE_DOWN,
        loli_GL_var_GLUT_KEY_HOME,
        loli_GL_var_GLUT_KEY_END,
        loli_GL_var_GLUT_KEY_INSERT,

        loli_GL_var_GL_FALSE,
        loli_GL_var_GL_TRUE,
        loli_GL_var_GL_BYTE,
        loli_GL_var_GL_UNSIGNED_BYTE,
        loli_GL_var_GL_SHORT,
        loli_GL_var_GL_UNSIGNED_SHORT,
        loli_GL_var_GL_INT,
        loli_GL_var_GL_UNSIGNED_INT,
        loli_GL_var_GL_FLOAT,
        loli_GL_var_GL_2_BYTES,
        loli_GL_var_GL_3_BYTES,
        loli_GL_var_GL_4_BYTES,
        loli_GL_var_GL_DOUBLE,
        loli_GL_var_GL_POINTS,
        loli_GL_var_GL_LINES,
        loli_GL_var_GL_LINE_LOOP,
        loli_GL_var_GL_LINE_STRIP,
        loli_GL_var_GL_TRIANGLES,
        loli_GL_var_GL_TRIANGLE_STRIP,
        loli_GL_var_GL_QUADS,
        loli_GL_var_GL_QUAD_STRIP,
        loli_GL_var_GL_POLYGON,
        loli_GL_var_GL_VERTEX_ARRAY,
        loli_GL_var_GL_NORMAL_ARRAY,
        loli_GL_var_GL_COLOR_ARRAY,
        loli_GL_var_GL_INDEX_ARRAY,
        loli_GL_var_GL_TEXTURE_COORD_ARRAY,
        loli_GL_var_GL_EDGE_FLAG_ARRAY,
        loli_GL_var_GL_VERTEX_ARRAY_SIZE,
        loli_GL_var_GL_VERTEX_ARRAY_TYPE,
        loli_GL_var_GL_VERTEX_ARRAY_STRIDE,
        loli_GL_var_GL_NORMAL_ARRAY_TYPE,
        loli_GL_var_GL_NORMAL_ARRAY_STRIDE,
        loli_GL_var_GL_COLOR_ARRAY_SIZE,
        loli_GL_var_GL_COLOR_ARRAY_TYPE,
        loli_GL_var_GL_COLOR_ARRAY_STRIDE,
        loli_GL_var_GL_INDEX_ARRAY_TYPE,
        loli_GL_var_GL_INDEX_ARRAY_STRIDE,
        loli_GL_var_GL_TEXTURE_COORD_ARRAY_SIZE,
        loli_GL_var_GL_TEXTURE_COORD_ARRAY_TYPE,
        loli_GL_var_GL_TEXTURE_COORD_ARRAY_STRIDE,
        loli_GL_var_GL_EDGE_FLAG_ARRAY_STRIDE,
        loli_GL_var_GL_VERTEX_ARRAY_POINTER,
        loli_GL_var_GL_NORMAL_ARRAY_POINTER,
        loli_GL_var_GL_COLOR_ARRAY_POINTER,
        loli_GL_var_GL_INDEX_ARRAY_POINTER,
        loli_GL_var_GL_TEXTURE_COORD_ARRAY_POINTER,
        loli_GL_var_GL_EDGE_FLAG_ARRAY_POINTER,
        loli_GL_var_GL_V2F,
        loli_GL_var_GL_V3F,
        loli_GL_var_GL_C4UB_V2F,
        loli_GL_var_GL_C4UB_V3F,
        loli_GL_var_GL_C3F_V3F,
        loli_GL_var_GL_N3F_V3F,
        loli_GL_var_GL_C4F_N3F_V3F,
        loli_GL_var_GL_T2F_V3F,
        loli_GL_var_GL_T4F_V4F,
        loli_GL_var_GL_T2F_C4UB_V3F,
        loli_GL_var_GL_T2F_C3F_V3F,
        loli_GL_var_GL_T2F_N3F_V3F,
        loli_GL_var_GL_T2F_C4F_N3F_V3F,
        loli_GL_var_GL_T4F_C4F_N3F_V4F,
        loli_GL_var_GL_MATRIX_MODE,
        loli_GL_var_GL_MODELVIEW,
        loli_GL_var_GL_PROJECTION,
        loli_GL_var_GL_TEXTURE,
        loli_GL_var_GL_POINT_SMOOTH,
        loli_GL_var_GL_POINT_SIZE,
        loli_GL_var_GL_POINT_SIZE_GRANULARITY,
        loli_GL_var_GL_POINT_SIZE_RANGE,
        loli_GL_var_GL_LINE_SMOOTH,
        loli_GL_var_GL_LINE_STIPPLE,
        loli_GL_var_GL_LINE_STIPPLE_PATTERN,
        loli_GL_var_GL_LINE_STIPPLE_REPEAT,
        loli_GL_var_GL_LINE_WIDTH,
        loli_GL_var_GL_LINE_WIDTH_GRANULARITY,
        loli_GL_var_GL_LINE_WIDTH_RANGE,
        loli_GL_var_GL_POINT,
        loli_GL_var_GL_LINE,
        loli_GL_var_GL_FILL,
        loli_GL_var_GL_CW,
        loli_GL_var_GL_CCW,
        loli_GL_var_GL_FRONT,
        loli_GL_var_GL_BACK,
        loli_GL_var_GL_POLYGON_MODE,
        loli_GL_var_GL_POLYGON_SMOOTH,
        loli_GL_var_GL_POLYGON_STIPPLE,
        loli_GL_var_GL_EDGE_FLAG,
        loli_GL_var_GL_CULL_FACE,
        loli_GL_var_GL_CULL_FACE_MODE,
        loli_GL_var_GL_FRONT_FACE,
        loli_GL_var_GL_POLYGON_OFFSET_FACTOR,
        loli_GL_var_GL_POLYGON_OFFSET_UNITS,
        loli_GL_var_GL_POLYGON_OFFSET_POINT,
        loli_GL_var_GL_POLYGON_OFFSET_LINE,
        loli_GL_var_GL_POLYGON_OFFSET_FILL,
        loli_GL_var_GL_COMPILE,
        loli_GL_var_GL_COMPILE_AND_EXECUTE,
        loli_GL_var_GL_LIST_BASE,
        loli_GL_var_GL_LIST_INDEX,
        loli_GL_var_GL_LIST_MODE,
        loli_GL_var_GL_NEVER,
        loli_GL_var_GL_LESS,
        loli_GL_var_GL_EQUAL,
        loli_GL_var_GL_LEQUAL,
        loli_GL_var_GL_GREATER,
        loli_GL_var_GL_NOTEQUAL,
        loli_GL_var_GL_GEQUAL,
        loli_GL_var_GL_ALWAYS,
        loli_GL_var_GL_DEPTH_TEST,
        loli_GL_var_GL_DEPTH_BITS,
        loli_GL_var_GL_DEPTH_CLEAR_VALUE,
        loli_GL_var_GL_DEPTH_FUNC,
        loli_GL_var_GL_DEPTH_RANGE,
        loli_GL_var_GL_DEPTH_WRITEMASK,
        loli_GL_var_GL_DEPTH_COMPONENT,
};

const char * loli_GL_info_table[] = {
        "\0\0"
        ,"R\0loliGlVersion\0String"
        ,"F\0glutInit\0(String)"
        ,"F\0glutInitDisplayMode\0(Integer)"
        ,"F\0glutInitWindowSize\0(Integer, Integer)"
        ,"F\0glutInitWindowPosition\0(Integer, Integer)"
        ,"F\0glutInitDisplayString\0(String)"

        ,"F\0glutCreateWindow\0(String): Integer"
        ,"F\0glutCreateSubWindow\0(Integer, Integer, Integer, Integer, Integer): Integer"
        ,"F\0glutDestroyWindow\0(Integer)"
        ,"F\0glutSetWindow\0(Integer)"
        ,"F\0glutGetWindow\0(): Integer"
        ,"F\0glutSetWindowTitle\0(String)"
        ,"F\0glutSetIconTitle\0(String)"
        ,"F\0glutSetIconTitle\0(Integer, Integer)"
        ,"F\0glutPositionWindow\0(Integer, Integer)"
        ,"F\0glutShowWindow"
        ,"F\0glutHideWindow"
        ,"F\0glutIconifyWindow"
        ,"F\0glutPopWindow"
        ,"F\0glutFullScreen"

        ,"F\0glutPostWindowRedisplay\0(Integer)"
        ,"F\0glutPostRedisplay"
        ,"F\0glutSwapBuffers"

        ,"F\0glutWarpPointer\0(Integer, Integer)"
        ,"F\0glutSetCursor\0(Integer)"

        ,"F\0glutMainLoop"
        ,"F\0glutDisplayFunc"
        ,"F\0glutKeyboardFunc"

        // TODO: delete it
        ,"F\0example"

        ,"F\0end"
        ,"F\0flush"


        ,"R\0GLUT_RGB\0Integer"
        ,"R\0GLUT_RGBA\0Integer"
        ,"R\0GLUT_INDEX\0Integer"
        ,"R\0GLUT_SINGLE\0Integer"
        ,"R\0GLUT_DOUBLE\0Integer"
        ,"R\0GLUT_ACCUM\0Integer"
        ,"R\0GLUT_ALPHA\0Integer"
        ,"R\0GLUT_DEPTH\0Integer"
        ,"R\0GLUT_STENCIL\0Integer"
        ,"R\0GLUT_MULTISAMPLE\0Integer"
        ,"R\0GLUT_STEREO\0Integer"
        ,"R\0GLUT_LUMINANCE\0Integer"

        ,"R\0GLUT_MENU_NOT_IN_USE\0Integer"
        ,"R\0GLUT_MENU_IN_USE\0Integer"
        ,"R\0GLUT_NOT_VISIBLE\0Integer"
        ,"R\0GLUT_HIDDEN\0Integer"
        ,"R\0GLUT_FULLY_RETAINED\0Integer"
        ,"R\0GLUT_PARTIALLY_RETAINED\0Integer"
        ,"R\0GLUT_PARTIALLY_RETAINED\0Integer"
        ,"R\0GLUT_FULLY_COVERED\0Integer"

        ,"R\0GLUT_KEY_F1\0Integer"
        ,"R\0GLUT_KEY_F2\0Integer"
        ,"R\0GLUT_KEY_F3\0Integer"
        ,"R\0GLUT_KEY_F4\0Integer"
        ,"R\0GLUT_KEY_F5\0Integer"
        ,"R\0GLUT_KEY_F6\0Integer"
        ,"R\0GLUT_KEY_F7\0Integer"
        ,"R\0GLUT_KEY_F8\0Integer"
        ,"R\0GLUT_KEY_F9\0Integer"
        ,"R\0GLUT_KEY_F10\0Integer"
        ,"R\0GLUT_KEY_F11\0Integer"
        ,"R\0GLUT_KEY_F12\0Integer"
        ,"R\0GLUT_KEY_UP\0Integer"
        ,"R\0GLUT_KEY_RIGHT\0Integer"
        ,"R\0GLUT_KEY_DOWN\0Integer"
        ,"R\0GLUT_KEY_PAGE_UP\0Integer"
        ,"R\0GLUT_KEY_PAGE_DOWN\0Integer"
        ,"R\0GLUT_KEY_HOME\0Integer"
        ,"R\0GLUT_KEY_END\0Integer"
        ,"R\0GLUT_KEY_INSERT\0Integer"

        ,"R\0GL_FALSE\0Integer"
        ,"R\0GL_TRUE\0Integer"
        ,"R\0GL_TRUE\0Integer"
        ,"R\0GL_BYTE\0Integer"
        ,"R\0GL_UNSIGNED_BYTE\0Integer"
        ,"R\0GL_SHORT\0Integer"
        ,"R\0GL_UNSIGNED_SHORT\0Integer"
        ,"R\0GL_INT\0Integer"
        ,"R\0GL_UNSIGNED_INT\0Integer"
        ,"R\0GL_FLOAT\0Integer"
        ,"R\0GL_2_BYTES\0Integer"
        ,"R\0GL_3_BYTES\0Integer"
        ,"R\0GL_4_BYTES\0Integer"
        ,"R\0GL_DOUBLE\0Integer"

        ,"R\0GL_POINTS\0Integer"
        ,"R\0GL_LINES\0Integer"
        ,"R\0GL_LINE_LOOP\0Integer"
        ,"R\0GL_LINE_STRIP\0Integer"
        ,"R\0GL_TRIANGLES\0Integer"
        ,"R\0GL_TRIANGLE_STRIP\0Integer"
        ,"R\0GL_TRIANGLE_FAN\0Integer"
        ,"R\0GL_QUADS\0Integer"
        ,"R\0GL_QUAD_STRIP\0Integer"
        ,"R\0GL_POLYGON\0Integer"

        ,"R\0GL_VERTEX_ARRAY\0Integer"
        ,"R\0GL_NORMAL_ARRAY\0Integer"
        ,"R\0GL_COLOR_ARRAY\0Integer"
        ,"R\0GL_INDEX_ARRAY\0Integer"
        ,"R\0GL_TEXTURE_COORD_ARRAY\0Integer"
        ,"R\0GL_EDGE_FLAG_ARRAY\0Integer"
        ,"R\0GL_VERTEX_ARRAY_SIZE\0Integer"
        ,"R\0GL_VERTEX_ARRAY_TYPE\0Integer"
        ,"R\0GL_VERTEX_ARRAY_STRIDE\0Integer"
        ,"R\0GL_NORMAL_ARRAY_TYPE\0Integer"
        ,"R\0GL_NORMAL_ARRAY_STRIDE\0Integer"
        ,"R\0GL_COLOR_ARRAY_SIZE\0Integer"
        ,"R\0GL_COLOR_ARRAY_TYPE\0Integer"
        ,"R\0GL_COLOR_ARRAY_STRIDE\0Integer"
        ,"R\0GL_INDEX_ARRAY_TYPE\0Integer"
        ,"R\0GL_INDEX_ARRAY_STRIDE\0Integer"
        ,"R\0GL_TEXTURE_COORD_ARRAY_SIZE\0Integer"
        ,"R\0GL_TEXTURE_COORD_ARRAY_TYPE\0Integer"
        ,"R\0GL_TEXTURE_COORD_ARRAY_STRIDE\0Integer"
        ,"R\0GL_EDGE_FLAG_ARRAY_STRIDE\0Integer"
        ,"R\0GL_VERTEX_ARRAY_POINTER\0Integer"
        ,"R\0GL_NORMAL_ARRAY_POINTER\0Integer"
        ,"R\0GL_COLOR_ARRAY_POINTER\0Integer"
        ,"R\0GL_INDEX_ARRAY_POINTER\0Integer"
        ,"R\0GL_TEXTURE_COORD_ARRAY_POINTER\0Integer"
        ,"R\0GL_EDGE_FLAG_ARRAY_POINTER\0Integer"
        ,"R\0GL_V2F\0Integer"
        ,"R\0GL_V3F\0Integer"
        ,"R\0GL_C4UB_V2F\0Integer"
        ,"R\0GL_C4UB_V3F\0Integer"
        ,"R\0GL_C3F_V3F\0Integer"
        ,"R\0GL_N3F_V3F\0Integer"
        ,"R\0GL_C4F_N3F_V3F\0Integer"
        ,"R\0GL_T2F_V3F\0Integer"
        ,"R\0GL_T4F_V4F\0Integer"
        ,"R\0GL_T2F_C4UB_V3F\0Integer"
        ,"R\0GL_T2F_C3F_V3F\0Integer"
        ,"R\0GL_T2F_N3F_V3F\0Integer"
        ,"R\0GL_T2F_C4F_N3F_V3F\0Integer"
        ,"R\0GL_T4F_C4F_N3F_V4F\0Integer"

        ,"R\0GL_MATRIX_MODE\0Integer"
        ,"R\0GL_MODELVIEW\0Integer"
        ,"R\0GL_PROJECTION\0Integer"
        ,"R\0GL_TEXTURE\0Integer"

        ,"R\0GL_POINT_SMOOTH\0Integer"
        ,"R\0GL_POINT_SIZE\0Integer"
        ,"R\0GL_POINT_SIZE_GRANULARITY\0Integer"
        ,"R\0GL_POINT_SIZE_RANGE\0Integer"
        ,"R\0GL_LINE_SMOOTH\0Integer"
        ,"R\0GL_LINE_STIPPLE\0Integer"
        ,"R\0GL_LINE_STIPPLE_PATTERN\0Integer"
        ,"R\0GL_LINE_STIPPLE_REPEAT\0Integer"
        ,"R\0GL_LINE_WIDTH\0Integer"
        ,"R\0GL_LINE_WIDTH_GRANULARITY\0Integer"
        ,"R\0GL_LINE_WIDTH_RANGE\0Integer"

        ,"R\0GL_POINT\0Integer"
        ,"R\0GL_LINE\0Integer"
        ,"R\0GL_FILL\0Integer"
        ,"R\0GL_CW\0Integer"
        ,"R\0GL_CCW\0Integer"
        ,"R\0GL_FRONT\0Integer"
        ,"R\0GL_BACK\0Integer"
        ,"R\0GL_POLYGON_MODE\0Integer"
        ,"R\0GL_POLYGON_SMOOTH\0Integer"
        ,"R\0GL_POLYGON_STIPPLE\0Integer"
        ,"R\0GL_EDGE_FLAG\0Integer"
        ,"R\0GL_CULL_FACE\0Integer"
        ,"R\0GL_CULL_FACE_MODE\0Integer"
        ,"R\0GL_FRONT_FACE\0Integer"
        ,"R\0GL_POLYGON_OFFSET_FACTOR\0Integer"
        ,"R\0GL_POLYGON_OFFSET_UNITS\0Integer"
        ,"R\0GL_POLYGON_OFFSET_POINT\0Integer"
        ,"R\0GL_POLYGON_OFFSET_LINE\0Integer"
        ,"R\0GL_POLYGON_OFFSET_FILL\0Integer"

        ,"R\0GL_COMPILE\0Integer"
        ,"R\0GL_COMPILE_AND_EXECUTE\0Integer"
        ,"R\0GL_LIST_BASE\0Integer"
        ,"R\0GL_LIST_INDEX\0Integer"
        ,"R\0GL_LIST_MODE\0Integer"
        ,"R\0GL_NEVER\0Integer"
        ,"R\0GL_LESS\0Integer"
        ,"R\0GL_EQUAL\0Integer"
        ,"R\0GL_LEQUAL\0Integer"
        ,"R\0GL_GREATER\0Integer"
        ,"R\0GL_NOTEQUAL\0Integer"
        ,"R\0GL_GEQUAL\0Integer"
        ,"R\0GL_ALWAYS\0Integer"

        ,"R\0GL_DEPTH_TEST\0Integer"
        ,"R\0GL_DEPTH_BITS\0Integer"
        ,"R\0GL_DEPTH_CLEAR_VALUE\0Integer"
        ,"R\0GL_DEPTH_FUNC\0Integer"
        ,"R\0GL_DEPTH_RANGE\0Integer"
        ,"R\0GL_DEPTH_WRITEMASK\0Integer"
        ,"R\0GL_DEPTH_COMPONENT\0Integer"

        ,"Z"
};