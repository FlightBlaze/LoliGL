#include "loli.h"
#include "loli_value_structs.h"
#include <string.h>

#ifdef __APPLE__
    #include <GLUT/glut.h>
    #include <stdlib.h>
#else
    #include <GL/glut.h>
#endif

#include <GL/gl.h>

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

void loli_GL__glutEstablishOverlay             (loli_state *);
void loli_GL__glutRemoveOverlay                (loli_state *);
void loli_GL__glutUseLayer                     (loli_state *);
void loli_GL__glutPostOverlayRedisplay         (loli_state *);
void loli_GL__glutPostWindowOverlayRedisplay   (loli_state *);
void loli_GL__glutShowOverlay                  (loli_state *);
void loli_GL__glutHideOverlay                  (loli_state *);

void loli_GL__glutCreateMenu                   (loli_state *);
void loli_GL__glutDestroyMenu                  (loli_state *);
void loli_GL__glutGetMenu                      (loli_state *);
void loli_GL__glutSetMenu                      (loli_state *);
void loli_GL__glutAddMenuEntry                 (loli_state *);
void loli_GL__glutAddSubMenu                   (loli_state *);
void loli_GL__glutChangeToMenuEntry            (loli_state *);
void loli_GL__glutChangeToSubMenu              (loli_state *);
void loli_GL__glutRemoveMenuItem               (loli_state *);
void loli_GL__glutAttachMenu                   (loli_state *);
void loli_GL__glutDetachMenu                   (loli_state *);

void loli_GL__glutMainLoop                     (loli_state *);

void loli_GL__glutDisplayFunc                  (loli_state *);
void loli_GL__glutKeyboardFunc                 (loli_state *);
void loli_GL__glutSpecialFunc                  (loli_state *);
void loli_GL__glutReshapeFunc                  (loli_state *);
void loli_GL__glutVisibilityFunc               (loli_state *);
void loli_GL__glutMouseFunc                    (loli_state *);
void loli_GL__glutMotionFunc                   (loli_state *);
void loli_GL__glutPassiveMotionFunc            (loli_state *);
void loli_GL__glutEntryFunc                    (loli_state *);

// TODO: delete it
void loli_GL__example                          (loli_state *);

// OpenGL
void loli_GL__glClearIndex                     (loli_state *);
void loli_GL__glClearColor                     (loli_state *);
void loli_GL__glClear                          (loli_state *);
void loli_GL__glIndexMask                      (loli_state *);
void loli_GL__glColorMask                      (loli_state *);
void loli_GL__glAlphaFunc                      (loli_state *);
void loli_GL__glBlendFunc                      (loli_state *);
void loli_GL__glLogicOp                        (loli_state *);
void loli_GL__glCullFace                       (loli_state *);
void loli_GL__glFrontFace                      (loli_state *);
void loli_GL__glPointSize                      (loli_state *);
void loli_GL__glLineWidth                      (loli_state *);
void loli_GL__glLineStipple                    (loli_state *);
void loli_GL__glPolygonMode                    (loli_state *);
void loli_GL__glPolygonOffset                  (loli_state *);
void loli_GL__glPolygonStipple                 (loli_state *);
void loli_GL__glGetPolygonStipple              (loli_state *);
void loli_GL__glEdgeFlag                       (loli_state *);
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

void loli_GL_var_GLUT_LEFT_BUTTON(loli_state *);
void loli_GL_var_GLUT_MIDDLE_BUTTON(loli_state *);
void loli_GL_var_GLUT_DOWN(loli_state *);
void loli_GL_var_GLUT_UP(loli_state *);
void loli_GL_var_GLUT_ENTERED(loli_state *);
void loli_GL_var_GLUT_WINDOW_X(loli_state *);
void loli_GL_var_GLUT_WINDOW_Y(loli_state *);
void loli_GL_var_GLUT_WINDOW_WIDTH(loli_state *);
void loli_GL_var_GLUT_WINDOW_HEIGHT(loli_state *);
void loli_GL_var_GLUT_WINDOW_BUFFER_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_STENCIL_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_DEPTH_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_RED_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_GREEN_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_BLUE_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_ALPHA_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_ACCUM_RED_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_ACCUM_GREEN_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_ACCUM_BLUE_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_ACCUM_ALPHA_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_DOUBLEBUFFER(loli_state *);
void loli_GL_var_GLUT_WINDOW_RGBA(loli_state *);
void loli_GL_var_GLUT_WINDOW_PARENT(loli_state *);
void loli_GL_var_GLUT_WINDOW_NUM_CHILDREN(loli_state *);
void loli_GL_var_GLUT_WINDOW_COLORMAP_SIZE(loli_state *);
void loli_GL_var_GLUT_WINDOW_NUM_SAMPLES(loli_state *);
void loli_GL_var_GLUT_WINDOW_STEREO(loli_state *);
void loli_GL_var_GLUT_WINDOW_CURSOR(loli_state *);
void loli_GL_var_GLUT_SCREEN_WIDTH(loli_state *);
void loli_GL_var_GLUT_SCREEN_HEIGHT(loli_state *);
void loli_GL_var_GLUT_SCREEN_WIDTH_MM(loli_state *);
void loli_GL_var_GLUT_SCREEN_HEIGHT_MM(loli_state *);
void loli_GL_var_GLUT_MENU_NUM_ITEMS(loli_state *);
void loli_GL_var_GLUT_DISPLAY_MODE_POSSIBLE(loli_state *);
void loli_GL_var_GLUT_INIT_WINDOW_X(loli_state *);
void loli_GL_var_GLUT_INIT_WINDOW_Y(loli_state *);
void loli_GL_var_GLUT_INIT_WINDOW_WIDTH(loli_state *);
void loli_GL_var_GLUT_INIT_WINDOW_HEIGHT(loli_state *);
void loli_GL_var_GLUT_INIT_DISPLAY_MODE(loli_state *);
void loli_GL_var_GLUT_ELAPSED_TIME(loli_state *);
void loli_GL_var_GLUT_WINDOW_FORMAT_ID(loli_state *);
void loli_GL_var_GLUT_HAS_KEYBOARD(loli_state *);
void loli_GL_var_GLUT_HAS_MOUSE(loli_state *);
void loli_GL_var_GLUT_HAS_SPACEBALL(loli_state *);
void loli_GL_var_GLUT_HAS_DIAL_AND_BUTTON_BOX(loli_state *);
void loli_GL_var_GLUT_HAS_TABLET(loli_state *);
void loli_GL_var_GLUT_NUM_MOUSE_BUTTONS(loli_state *);
void loli_GL_var_GLUT_NUM_SPACEBALL_BUTTONS(loli_state *);
void loli_GL_var_GLUT_NUM_BUTTON_BOX_BUTTONS(loli_state *);
void loli_GL_var_GLUT_NUM_DIALS(loli_state *);
void loli_GL_var_GLUT_NUM_TABLET_BUTTONS(loli_state *);
void loli_GL_var_GLUT_DEVICE_IGNORE_KEY_REPEAT(loli_state *);
void loli_GL_var_GLUT_DEVICE_KEY_REPEAT(loli_state *);
void loli_GL_var_GLUT_HAS_JOYSTICK(loli_state *);
void loli_GL_var_GLUT_OWNS_JOYSTICK(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_BUTTONS(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_AXES(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_POLL_RATE(loli_state *);
void loli_GL_var_GLUT_OVERLAY_POSSIBLE(loli_state *);
void loli_GL_var_GLUT_LAYER_IN_USE(loli_state *);
void loli_GL_var_GLUT_HAS_OVERLAY(loli_state *);
void loli_GL_var_GLUT_TRANSPARENT_INDEX(loli_state *);
void loli_GL_var_GLUT_NORMAL_DAMAGED(loli_state *);
void loli_GL_var_GLUT_OVERLAY_DAMAGED(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_POSSIBLE(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_IN_USE(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_X_DELTA(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_Y_DELTA(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_WIDTH_DELTA(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_HEIGHT_DELTA(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_X(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_Y(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_WIDTH(loli_state *);
void loli_GL_var_GLUT_VIDEO_RESIZE_HEIGHT(loli_state *);
void loli_GL_var_GLUT_NORMAL(loli_state *);
void loli_GL_var_GLUT_OVERLAY(loli_state *);
void loli_GL_var_GLUT_ACTIVE_SHIFT(loli_state *);
void loli_GL_var_GLUT_ACTIVE_CTRL(loli_state *);
void loli_GL_var_GLUT_ACTIVE_ALT(loli_state *);
void loli_GL_var_GLUT_CURSOR_RIGHT_ARROW(loli_state *);
void loli_GL_var_GLUT_CURSOR_LEFT_ARROW(loli_state *);
void loli_GL_var_GLUT_CURSOR_INFO(loli_state *);
void loli_GL_var_GLUT_CURSOR_DESTROY(loli_state *);
void loli_GL_var_GLUT_CURSOR_HELP(loli_state *);
void loli_GL_var_GLUT_CURSOR_CYCLE(loli_state *);
void loli_GL_var_GLUT_CURSOR_SPRAY(loli_state *);
void loli_GL_var_GLUT_CURSOR_WAIT(loli_state *);
void loli_GL_var_GLUT_CURSOR_TEXT(loli_state *);
void loli_GL_var_GLUT_CURSOR_CROSSHAIR(loli_state *);
void loli_GL_var_GLUT_CURSOR_UP_DOWN(loli_state *);
void loli_GL_var_GLUT_CURSOR_LEFT_RIGHT(loli_state *);
void loli_GL_var_GLUT_CURSOR_TOP_SIDE(loli_state *);
void loli_GL_var_GLUT_CURSOR_BOTTOM_SIDE(loli_state *);
void loli_GL_var_GLUT_CURSOR_LEFT_SIDE(loli_state *);
void loli_GL_var_GLUT_CURSOR_RIGHT_SIDE(loli_state *);
void loli_GL_var_GLUT_CURSOR_TOP_LEFT_CORNER(loli_state *);
void loli_GL_var_GLUT_CURSOR_TOP_RIGHT_CORNER(loli_state *);
void loli_GL_var_GLUT_CURSOR_BOTTOM_RIGHT_CORNER(loli_state *);
void loli_GL_var_GLUT_CURSOR_BOTTOM_LEFT_CORNER(loli_state *);
void loli_GL_var_GLUT_CURSOR_INHERIT(loli_state *);
void loli_GL_var_GLUT_CURSOR_NONE(loli_state *);
void loli_GL_var_GLUT_CURSOR_FULL_CROSSHAIR(loli_state *);
void loli_GL_var_GLUT_RED(loli_state *);
void loli_GL_var_GLUT_GREEN(loli_state *);
void loli_GL_var_GLUT_BLUE(loli_state *);
void loli_GL_var_GLUT_KEY_REPEAT_OFF(loli_state *);
void loli_GL_var_GLUT_KEY_REPEAT_ON(loli_state *);
void loli_GL_var_GLUT_KEY_REPEAT_DEFAULT(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_BUTTON_A(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_BUTTON_B(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_BUTTON_C(loli_state *);
void loli_GL_var_GLUT_JOYSTICK_BUTTON_D(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_ACTIVE(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_POSSIBLE(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_WIDTH(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_HEIGHT(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_PIXEL_DEPTH(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_REFRESH_RATE(loli_state *);
void loli_GL_var_GLUT_GAME_MODE_DISPLAY_CHANGED(loli_state *);


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
void loli_GL_var_GL_LIGHTING                   (loli_state *);
void loli_GL_var_GL_LIGHT0                     (loli_state *);
void loli_GL_var_GL_LIGHT1                     (loli_state *);
void loli_GL_var_GL_LIGHT2                     (loli_state *);
void loli_GL_var_GL_LIGHT3                     (loli_state *);
void loli_GL_var_GL_LIGHT4                     (loli_state *);
void loli_GL_var_GL_LIGHT5                     (loli_state *);
void loli_GL_var_GL_LIGHT6                     (loli_state *);
void loli_GL_var_GL_LIGHT7                     (loli_state *);
void loli_GL_var_GL_SPOT_EXPONENT              (loli_state *);
void loli_GL_var_GL_SPOT_CUTOFF                (loli_state *);
void loli_GL_var_GL_CONSTANT_ATTENUATION       (loli_state *);
void loli_GL_var_GL_LINEAR_ATTENUATION         (loli_state *);
void loli_GL_var_GL_QUADRATIC_ATTENUATION      (loli_state *);
void loli_GL_var_GL_AMBIENT                    (loli_state *);
void loli_GL_var_GL_DIFFUSE                    (loli_state *);
void loli_GL_var_GL_SPECULAR                   (loli_state *);
void loli_GL_var_GL_SHININESS                  (loli_state *);
void loli_GL_var_GL_EMISSION                   (loli_state *);
void loli_GL_var_GL_POSITION                   (loli_state *);
void loli_GL_var_GL_SPOT_DIRECTION             (loli_state *);
void loli_GL_var_GL_AMBIENT_AND_DIFFUSE        (loli_state *);
void loli_GL_var_GL_COLOR_INDEXES              (loli_state *);
void loli_GL_var_GL_LIGHT_MODEL_TWO_SIDE       (loli_state *);
void loli_GL_var_GL_LIGHT_MODEL_LOCAL_VIEWER   (loli_state *);
void loli_GL_var_GL_LIGHT_MODEL_AMBIENT        (loli_state *);
void loli_GL_var_GL_FRONT_AND_BACK             (loli_state *);
void loli_GL_var_GL_SHADE_MODEL                (loli_state *);
void loli_GL_var_GL_FLAT                       (loli_state *);
void loli_GL_var_GL_SMOOTH                     (loli_state *);
void loli_GL_var_GL_COLOR_MATERIAL             (loli_state *);
void loli_GL_var_GL_COLOR_MATERIAL_FACE        (loli_state *);
void loli_GL_var_GL_COLOR_MATERIAL_PARAMETER   (loli_state *);
void loli_GL_var_GL_NORMALIZE                  (loli_state *);
void loli_GL_var_GL_CLIP_PLANE0                (loli_state *);
void loli_GL_var_GL_CLIP_PLANE1                (loli_state *);
void loli_GL_var_GL_CLIP_PLANE2                (loli_state *);
void loli_GL_var_GL_CLIP_PLANE3                (loli_state *);
void loli_GL_var_GL_CLIP_PLANE4                (loli_state *);
void loli_GL_var_GL_CLIP_PLANE5                (loli_state *);
void loli_GL_var_GL_ACCUM_RED_BITS             (loli_state *);
void loli_GL_var_GL_ACCUM_GREEN_BITS           (loli_state *);
void loli_GL_var_GL_ACCUM_BLUE_BITS            (loli_state *);
void loli_GL_var_GL_ACCUM_ALPHA_BITS           (loli_state *);
void loli_GL_var_GL_ACCUM_CLEAR_VALUE          (loli_state *);
void loli_GL_var_GL_ACCUM                      (loli_state *);
void loli_GL_var_GL_ADD                        (loli_state *);
void loli_GL_var_GL_LOAD                       (loli_state *);
void loli_GL_var_GL_MULT                       (loli_state *);
void loli_GL_var_GL_RETURN                     (loli_state *);
void loli_GL_var_GL_ALPHA_TEST                 (loli_state *);
void loli_GL_var_GL_ALPHA_TEST_REF             (loli_state *);
void loli_GL_var_GL_ALPHA_TEST_FUNC            (loli_state *);
void loli_GL_var_GL_BLEND                      (loli_state *);
void loli_GL_var_GL_BLEND_SRC                  (loli_state *);
void loli_GL_var_GL_BLEND_DST                  (loli_state *);
void loli_GL_var_GL_ZERO                       (loli_state *);
void loli_GL_var_GL_ONE                        (loli_state *);
void loli_GL_var_GL_SRC_COLOR                  (loli_state *);
void loli_GL_var_GL_ONE_MINUS_SRC_COLOR        (loli_state *);
void loli_GL_var_GL_SRC_ALPHA                  (loli_state *);
void loli_GL_var_GL_ONE_MINUS_SRC_ALPHA        (loli_state *);
void loli_GL_var_GL_DST_ALPHA                  (loli_state *);
void loli_GL_var_GL_ONE_MINUS_DST_ALPHA        (loli_state *);
void loli_GL_var_GL_DST_COLOR                  (loli_state *);
void loli_GL_var_GL_ONE_MINUS_DST_COLOR        (loli_state *);
void loli_GL_var_GL_SRC_ALPHA_SATURATE         (loli_state *);
void loli_GL_var_GL_FEEDBACK                   (loli_state *);
void loli_GL_var_GL_RENDER                     (loli_state *);
void loli_GL_var_GL_SELECT                     (loli_state *);
void loli_GL_var_GL_2D                         (loli_state *);
void loli_GL_var_GL_3D                         (loli_state *);
void loli_GL_var_GL_3D_COLOR                   (loli_state *);
void loli_GL_var_GL_3D_COLOR_TEXTURE           (loli_state *);
void loli_GL_var_GL_4D_COLOR_TEXTURE           (loli_state *);
void loli_GL_var_GL_POINT_TOKEN                (loli_state *);
void loli_GL_var_GL_LINE_TOKEN                 (loli_state *);
void loli_GL_var_GL_LINE_RESET_TOKEN           (loli_state *);
void loli_GL_var_GL_POLYGON_TOKEN              (loli_state *);
void loli_GL_var_GL_BITMAP_TOKEN               (loli_state *);
void loli_GL_var_GL_DRAW_PIXEL_TOKEN           (loli_state *);
void loli_GL_var_GL_COPY_PIXEL_TOKEN           (loli_state *);
void loli_GL_var_GL_PASS_THROUGH_TOKEN         (loli_state *);
void loli_GL_var_GL_FEEDBACK_BUFFER_POINTER    (loli_state *);
void loli_GL_var_GL_FEEDBACK_BUFFER_SIZE       (loli_state *);
void loli_GL_var_GL_FEEDBACK_BUFFER_TYPE       (loli_state *);
void loli_GL_var_GL_SELECTION_BUFFER_POINTER   (loli_state *);
void loli_GL_var_GL_SELECTION_BUFFER_SIZE      (loli_state *);
void loli_GL_var_GL_FOG                        (loli_state *);
void loli_GL_var_GL_FOG_MODE                   (loli_state *);
void loli_GL_var_GL_FOG_DENSITY                (loli_state *);
void loli_GL_var_GL_FOG_COLOR                  (loli_state *);
void loli_GL_var_GL_FOG_INDEX                  (loli_state *);
void loli_GL_var_GL_FOG_START                  (loli_state *);
void loli_GL_var_GL_FOG_END                    (loli_state *);
void loli_GL_var_GL_LINEAR                     (loli_state *);
void loli_GL_var_GL_EXP                        (loli_state *);
void loli_GL_var_GL_EXP2                       (loli_state *);
void loli_GL_var_GL_LOGIC_OP                   (loli_state *);
void loli_GL_var_GL_INDEX_LOGIC_OP             (loli_state *);
void loli_GL_var_GL_COLOR_LOGIC_OP             (loli_state *);
void loli_GL_var_GL_LOGIC_OP_MODE              (loli_state *);
void loli_GL_var_GL_CLEAR                      (loli_state *);
void loli_GL_var_GL_SET                        (loli_state *);
void loli_GL_var_GL_COPY                       (loli_state *);
void loli_GL_var_GL_COPY_INVERTED              (loli_state *);
void loli_GL_var_GL_NOOP                       (loli_state *);
void loli_GL_var_GL_INVERT                     (loli_state *);
void loli_GL_var_GL_AND                        (loli_state *);
void loli_GL_var_GL_NAND                       (loli_state *);
void loli_GL_var_GL_OR                         (loli_state *);
void loli_GL_var_GL_NOR                        (loli_state *);
void loli_GL_var_GL_XOR                        (loli_state *);
void loli_GL_var_GL_EQUIV                      (loli_state *);
void loli_GL_var_GL_AND_REVERSE                (loli_state *);
void loli_GL_var_GL_AND_INVERTED               (loli_state *);
void loli_GL_var_GL_OR_REVERSE                 (loli_state *);
void loli_GL_var_GL_OR_INVERTED                (loli_state *);
void loli_GL_var_GL_STENCIL_BITS               (loli_state *);
void loli_GL_var_GL_STENCIL_TEST               (loli_state *);
void loli_GL_var_GL_STENCIL_CLEAR_VALUE        (loli_state *);
void loli_GL_var_GL_STENCIL_FUNC               (loli_state *);
void loli_GL_var_GL_STENCIL_VALUE_MASK         (loli_state *);
void loli_GL_var_GL_STENCIL_FAIL               (loli_state *);
void loli_GL_var_GL_STENCIL_PASS_DEPTH_FAIL    (loli_state *);
void loli_GL_var_GL_STENCIL_PASS_DEPTH_PASS    (loli_state *);
void loli_GL_var_GL_STENCIL_REF                (loli_state *);
void loli_GL_var_GL_STENCIL_WRITEMASK          (loli_state *);
void loli_GL_var_GL_STENCIL_INDEX              (loli_state *);
void loli_GL_var_GL_KEEP                       (loli_state *);
void loli_GL_var_GL_REPLACE                    (loli_state *);
void loli_GL_var_GL_INCR                       (loli_state *);
void loli_GL_var_GL_DECR                       (loli_state *);
void loli_GL_var_GL_NONE                       (loli_state *);
void loli_GL_var_GL_LEFT                       (loli_state *);
void loli_GL_var_GL_RIGHT                      (loli_state *);
void loli_GL_var_GL_FRONT_LEFT                 (loli_state *);
void loli_GL_var_GL_FRONT_RIGHT                (loli_state *);
void loli_GL_var_GL_BACK_LEFT                  (loli_state *);
void loli_GL_var_GL_BACK_RIGHT                 (loli_state *);
void loli_GL_var_GL_AUX0                       (loli_state *);
void loli_GL_var_GL_AUX1                       (loli_state *);
void loli_GL_var_GL_AUX2                       (loli_state *);
void loli_GL_var_GL_AUX3                       (loli_state *);
void loli_GL_var_GL_COLOR_INDEX                (loli_state *);
void loli_GL_var_GL_RED                        (loli_state *);
void loli_GL_var_GL_GREEN                      (loli_state *);
void loli_GL_var_GL_BLUE                       (loli_state *);
void loli_GL_var_GL_ALPHA                      (loli_state *);
void loli_GL_var_GL_LUMINANCE                  (loli_state *);
void loli_GL_var_GL_LUMINANCE_ALPHA            (loli_state *);
void loli_GL_var_GL_ALPHA_BITS                 (loli_state *);
void loli_GL_var_GL_RED_BITS                   (loli_state *);
void loli_GL_var_GL_GREEN_BITS                 (loli_state *);
void loli_GL_var_GL_BLUE_BITS                  (loli_state *);
void loli_GL_var_GL_INDEX_BITS                 (loli_state *);
void loli_GL_var_GL_SUBPIXEL_BITS              (loli_state *);
void loli_GL_var_GL_AUX_BUFFERS                (loli_state *);
void loli_GL_var_GL_READ_BUFFER                (loli_state *);
void loli_GL_var_GL_DRAW_BUFFER                (loli_state *);
void loli_GL_var_GL_DOUBLEBUFFER               (loli_state *);
void loli_GL_var_GL_STEREO                     (loli_state *);
void loli_GL_var_GL_BITMAP                     (loli_state *);
void loli_GL_var_GL_COLOR                      (loli_state *);
void loli_GL_var_GL_DEPTH                      (loli_state *);
void loli_GL_var_GL_STENCIL                    (loli_state *);
void loli_GL_var_GL_DITHER                     (loli_state *);
void loli_GL_var_GL_RGB                        (loli_state *);
void loli_GL_var_GL_RGBA                       (loli_state *);
void loli_GL_var_GL_MAX_LIST_NESTING           (loli_state *);
void loli_GL_var_GL_MAX_EVAL_ORDER             (loli_state *);
void loli_GL_var_GL_MAX_LIGHTS                 (loli_state *);
void loli_GL_var_GL_MAX_CLIP_PLANES            (loli_state *);
void loli_GL_var_GL_MAX_TEXTURE_SIZE           (loli_state *);
void loli_GL_var_GL_MAX_PIXEL_MAP_TABLE        (loli_state *);
void loli_GL_var_GL_MAX_ATTRIB_STACK_DEPTH     (loli_state *);
void loli_GL_var_GL_MAX_MODELVIEW_STACK_DEPTH  (loli_state *);
void loli_GL_var_GL_MAX_NAME_STACK_DEPTH       (loli_state *);
void loli_GL_var_GL_MAX_PROJECTION_STACK_DEPTH (loli_state *);
void loli_GL_var_GL_MAX_TEXTURE_STACK_DEPTH    (loli_state *);
void loli_GL_var_GL_MAX_VIEWPORT_DIMS          (loli_state *);
void loli_GL_var_GL_MAX_CLIENT_ATTRIB_STACK_DEPTH(loli_state *);
void loli_GL_var_GL_ATTRIB_STACK_DEPTH         (loli_state *);
void loli_GL_var_GL_CLIENT_ATTRIB_STACK_DEPTH  (loli_state *);
void loli_GL_var_GL_COLOR_CLEAR_VALUE          (loli_state *);
void loli_GL_var_GL_COLOR_WRITEMASK            (loli_state *);
void loli_GL_var_GL_CURRENT_INDEX              (loli_state *);
void loli_GL_var_GL_CURRENT_COLOR              (loli_state *);
void loli_GL_var_GL_CURRENT_NORMAL             (loli_state *);
void loli_GL_var_GL_CURRENT_RASTER_COLOR       (loli_state *);
void loli_GL_var_GL_CURRENT_RASTER_DISTANCE    (loli_state *);
void loli_GL_var_GL_CURRENT_RASTER_INDEX       (loli_state *);
void loli_GL_var_GL_CURRENT_RASTER_POSITION    (loli_state *);
void loli_GL_var_GL_CURRENT_RASTER_TEXTURE_COORDS(loli_state *);
void loli_GL_var_GL_CURRENT_RASTER_POSITION_VALID(loli_state *);
void loli_GL_var_GL_CURRENT_TEXTURE_COORDS     (loli_state *);
void loli_GL_var_GL_INDEX_CLEAR_VALUE          (loli_state *);
void loli_GL_var_GL_INDEX_MODE                 (loli_state *);
void loli_GL_var_GL_INDEX_WRITEMASK            (loli_state *);
void loli_GL_var_GL_MODELVIEW_MATRIX           (loli_state *);
void loli_GL_var_GL_MODELVIEW_STACK_DEPTH      (loli_state *);
void loli_GL_var_GL_NAME_STACK_DEPTH           (loli_state *);
void loli_GL_var_GL_PROJECTION_MATRIX          (loli_state *);
void loli_GL_var_GL_PROJECTION_STACK_DEPTH     (loli_state *);
void loli_GL_var_GL_RENDER_MODE                (loli_state *);
void loli_GL_var_GL_RGBA_MODE                  (loli_state *);
void loli_GL_var_GL_TEXTURE_MATRIX             (loli_state *);
void loli_GL_var_GL_TEXTURE_STACK_DEPTH        (loli_state *);
void loli_GL_var_GL_VIEWPORT                   (loli_state *);
void loli_GL_var_GL_AUTO_NORMAL                (loli_state *);
void loli_GL_var_GL_MAP1_COLOR_4               (loli_state *);
void loli_GL_var_GL_MAP1_INDEX                 (loli_state *);
void loli_GL_var_GL_MAP1_NORMAL                (loli_state *);
void loli_GL_var_GL_MAP1_TEXTURE_COORD_1       (loli_state *);
void loli_GL_var_GL_MAP1_TEXTURE_COORD_2       (loli_state *);
void loli_GL_var_GL_MAP1_TEXTURE_COORD_3       (loli_state *);
void loli_GL_var_GL_MAP1_TEXTURE_COORD_4       (loli_state *);
void loli_GL_var_GL_MAP1_VERTEX_3              (loli_state *);
void loli_GL_var_GL_MAP1_VERTEX_4              (loli_state *);
void loli_GL_var_GL_MAP2_COLOR_4               (loli_state *);
void loli_GL_var_GL_MAP2_INDEX                 (loli_state *);
void loli_GL_var_GL_MAP2_NORMAL                (loli_state *);
void loli_GL_var_GL_MAP2_TEXTURE_COORD_1       (loli_state *);
void loli_GL_var_GL_MAP2_TEXTURE_COORD_2       (loli_state *);
void loli_GL_var_GL_MAP2_TEXTURE_COORD_3       (loli_state *);
void loli_GL_var_GL_MAP2_TEXTURE_COORD_4       (loli_state *);
void loli_GL_var_GL_MAP2_VERTEX_3              (loli_state *);
void loli_GL_var_GL_MAP2_VERTEX_4              (loli_state *);
void loli_GL_var_GL_MAP1_GRID_DOMAIN           (loli_state *);
void loli_GL_var_GL_MAP1_GRID_SEGMENTS         (loli_state *);
void loli_GL_var_GL_MAP2_GRID_DOMAIN           (loli_state *);
void loli_GL_var_GL_MAP2_GRID_SEGMENTS         (loli_state *);
void loli_GL_var_GL_COEFF                      (loli_state *);
void loli_GL_var_GL_ORDER                      (loli_state *);
void loli_GL_var_GL_DOMAIN                     (loli_state *);
void loli_GL_var_GL_PERSPECTIVE_CORRECTION_HINT(loli_state *);
void loli_GL_var_GL_POINT_SMOOTH_HINT          (loli_state *);
void loli_GL_var_GL_LINE_SMOOTH_HINT           (loli_state *);
void loli_GL_var_GL_POLYGON_SMOOTH_HINT        (loli_state *);
void loli_GL_var_GL_DONT_CARE                  (loli_state *);
void loli_GL_var_GL_FASTEST                    (loli_state *);
void loli_GL_var_GL_NICEST                     (loli_state *);
void loli_GL_var_GL_SCISSOR_BOX                (loli_state *);
void loli_GL_var_GL_SCISSOR_TEST               (loli_state *);
void loli_GL_var_GL_MAP_COLOR                  (loli_state *);
void loli_GL_var_GL_MAP_STENCIL                (loli_state *);
void loli_GL_var_GL_INDEX_SHIFT                (loli_state *);
void loli_GL_var_GL_INDEX_OFFSET               (loli_state *);
void loli_GL_var_GL_RED_SCALE                  (loli_state *);
void loli_GL_var_GL_RED_BIAS                   (loli_state *);
void loli_GL_var_GL_GREEN_SCALE                (loli_state *);
void loli_GL_var_GL_GREEN_BIAS                 (loli_state *);
void loli_GL_var_GL_BLUE_SCALE                 (loli_state *);
void loli_GL_var_GL_BLUE_BIAS                  (loli_state *);
void loli_GL_var_GL_ALPHA_SCALE                (loli_state *);
void loli_GL_var_GL_ALPHA_BIAS                 (loli_state *);
void loli_GL_var_GL_DEPTH_SCALE                (loli_state *);
void loli_GL_var_GL_DEPTH_BIAS                 (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_S_TO_S_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_I_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_R_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_G_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_B_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_A_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_R_TO_R_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_G_TO_G_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_B_TO_B_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_A_TO_A_SIZE      (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_S_TO_S           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_I           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_R           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_G           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_B           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_I_TO_A           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_R_TO_R           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_G_TO_G           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_B_TO_B           (loli_state *);
void loli_GL_var_GL_PIXEL_MAP_A_TO_A           (loli_state *);
void loli_GL_var_GL_PACK_ALIGNMENT             (loli_state *);
void loli_GL_var_GL_PACK_LSB_FIRST             (loli_state *);
void loli_GL_var_GL_PACK_ROW_LENGTH            (loli_state *);
void loli_GL_var_GL_PACK_SKIP_PIXELS           (loli_state *);
void loli_GL_var_GL_PACK_SKIP_ROWS             (loli_state *);
void loli_GL_var_GL_PACK_SWAP_BYTES            (loli_state *);
void loli_GL_var_GL_UNPACK_ALIGNMENT           (loli_state *);
void loli_GL_var_GL_UNPACK_LSB_FIRST           (loli_state *);
void loli_GL_var_GL_UNPACK_ROW_LENGTH          (loli_state *);
void loli_GL_var_GL_UNPACK_SKIP_PIXELS         (loli_state *);
void loli_GL_var_GL_UNPACK_SKIP_ROWS           (loli_state *);
void loli_GL_var_GL_UNPACK_SWAP_BYTES          (loli_state *);
void loli_GL_var_GL_ZOOM_X                     (loli_state *);
void loli_GL_var_GL_ZOOM_Y                     (loli_state *);
void loli_GL_var_GL_TEXTURE_ENV                (loli_state *);
void loli_GL_var_GL_TEXTURE_ENV_MODE           (loli_state *);
void loli_GL_var_GL_TEXTURE_1D                 (loli_state *);
void loli_GL_var_GL_TEXTURE_2D                 (loli_state *);
void loli_GL_var_GL_TEXTURE_WRAP_S             (loli_state *);
void loli_GL_var_GL_TEXTURE_WRAP_T             (loli_state *);
void loli_GL_var_GL_TEXTURE_MAG_FILTER         (loli_state *);
void loli_GL_var_GL_TEXTURE_MIN_FILTER         (loli_state *);
void loli_GL_var_GL_TEXTURE_ENV_COLOR          (loli_state *);
void loli_GL_var_GL_TEXTURE_GEN_S              (loli_state *);
void loli_GL_var_GL_TEXTURE_GEN_T              (loli_state *);
void loli_GL_var_GL_TEXTURE_GEN_R              (loli_state *);
void loli_GL_var_GL_TEXTURE_GEN_Q              (loli_state *);
void loli_GL_var_GL_TEXTURE_GEN_MODE           (loli_state *);
void loli_GL_var_GL_TEXTURE_BORDER_COLOR       (loli_state *);
void loli_GL_var_GL_TEXTURE_WIDTH              (loli_state *);
void loli_GL_var_GL_TEXTURE_HEIGHT             (loli_state *);
void loli_GL_var_GL_TEXTURE_BORDER             (loli_state *);
void loli_GL_var_GL_TEXTURE_COMPONENTS         (loli_state *);
void loli_GL_var_GL_TEXTURE_RED_SIZE           (loli_state *);
void loli_GL_var_GL_TEXTURE_GREEN_SIZE         (loli_state *);
void loli_GL_var_GL_TEXTURE_BLUE_SIZE          (loli_state *);
void loli_GL_var_GL_TEXTURE_ALPHA_SIZE         (loli_state *);
void loli_GL_var_GL_TEXTURE_LUMINANCE_SIZE     (loli_state *);
void loli_GL_var_GL_TEXTURE_INTENSITY_SIZE     (loli_state *);
void loli_GL_var_GL_NEAREST_MIPMAP_NEAREST     (loli_state *);
void loli_GL_var_GL_NEAREST_MIPMAP_LINEAR      (loli_state *);
void loli_GL_var_GL_LINEAR_MIPMAP_NEAREST      (loli_state *);
void loli_GL_var_GL_LINEAR_MIPMAP_LINEAR       (loli_state *);
void loli_GL_var_GL_OBJECT_LINEAR              (loli_state *);
void loli_GL_var_GL_OBJECT_PLANE               (loli_state *);
void loli_GL_var_GL_EYE_LINEAR                 (loli_state *);
void loli_GL_var_GL_EYE_PLANE                  (loli_state *);
void loli_GL_var_GL_SPHERE_MAP                 (loli_state *);
void loli_GL_var_GL_DECAL                      (loli_state *);
void loli_GL_var_GL_MODULATE                   (loli_state *);
void loli_GL_var_GL_NEAREST                    (loli_state *);
void loli_GL_var_GL_REPEAT                     (loli_state *);
void loli_GL_var_GL_CLAMP                      (loli_state *);
void loli_GL_var_GL_S                          (loli_state *);
void loli_GL_var_GL_T                          (loli_state *);
void loli_GL_var_GL_R                          (loli_state *);
void loli_GL_var_GL_Q                          (loli_state *);
void loli_GL_var_GL_VENDOR                     (loli_state *);
void loli_GL_var_GL_RENDERER                   (loli_state *);
void loli_GL_var_GL_VERSION                    (loli_state *);
void loli_GL_var_GL_EXTENSIONS                 (loli_state *);
void loli_GL_var_GL_NO_ERROR                   (loli_state *);
void loli_GL_var_GL_INVALID_ENUM               (loli_state *);
void loli_GL_var_GL_INVALID_VALUE              (loli_state *);
void loli_GL_var_GL_INVALID_OPERATION          (loli_state *);
void loli_GL_var_GL_STACK_OVERFLOW             (loli_state *);
void loli_GL_var_GL_STACK_UNDERFLOW            (loli_state *);
void loli_GL_var_GL_OUT_OF_MEMORY              (loli_state *);
void loli_GL_var_GL_CURRENT_BIT                (loli_state *);
void loli_GL_var_GL_POINT_BIT                  (loli_state *);
void loli_GL_var_GL_LINE_BIT                   (loli_state *);
void loli_GL_var_GL_POLYGON_BIT                (loli_state *);
void loli_GL_var_GL_POLYGON_STIPPLE_BIT        (loli_state *);
void loli_GL_var_GL_PIXEL_MODE_BIT             (loli_state *);
void loli_GL_var_GL_LIGHTING_BIT               (loli_state *);
void loli_GL_var_GL_FOG_BIT                    (loli_state *);
void loli_GL_var_GL_DEPTH_BUFFER_BIT           (loli_state *);
void loli_GL_var_GL_ACCUM_BUFFER_BIT           (loli_state *);
void loli_GL_var_GL_STENCIL_BUFFER_BIT         (loli_state *);
void loli_GL_var_GL_VIEWPORT_BIT               (loli_state *);
void loli_GL_var_GL_TRANSFORM_BIT              (loli_state *);
void loli_GL_var_GL_ENABLE_BIT                 (loli_state *);
void loli_GL_var_GL_COLOR_BUFFER_BIT           (loli_state *);
void loli_GL_var_GL_HINT_BIT                   (loli_state *);
void loli_GL_var_GL_EVAL_BIT                   (loli_state *);
void loli_GL_var_GL_LIST_BIT                   (loli_state *);
void loli_GL_var_GL_TEXTURE_BIT                (loli_state *);
void loli_GL_var_GL_SCISSOR_BIT                (loli_state *);
void loli_GL_var_GL_ALL_ATTRIB_BITS            (loli_state *);
void loli_GL_var_GL_PROXY_TEXTURE_1D           (loli_state *);
void loli_GL_var_GL_PROXY_TEXTURE_2D           (loli_state *);
void loli_GL_var_GL_TEXTURE_PRIORITY           (loli_state *);
void loli_GL_var_GL_TEXTURE_RESIDENT           (loli_state *);
void loli_GL_var_GL_TEXTURE_BINDING_1D         (loli_state *);
void loli_GL_var_GL_TEXTURE_BINDING_2D         (loli_state *);
void loli_GL_var_GL_TEXTURE_INTERNAL_FORMAT    (loli_state *);
void loli_GL_var_GL_ALPHA4                     (loli_state *);
void loli_GL_var_GL_ALPHA8                     (loli_state *);
void loli_GL_var_GL_ALPHA12                    (loli_state *);
void loli_GL_var_GL_ALPHA16                    (loli_state *);
void loli_GL_var_GL_LUMINANCE4                 (loli_state *);
void loli_GL_var_GL_LUMINANCE8                 (loli_state *);
void loli_GL_var_GL_LUMINANCE12                (loli_state *);
void loli_GL_var_GL_LUMINANCE16                (loli_state *);
void loli_GL_var_GL_LUMINANCE4_ALPHA4          (loli_state *);
void loli_GL_var_GL_LUMINANCE6_ALPHA2          (loli_state *);
void loli_GL_var_GL_LUMINANCE8_ALPHA8          (loli_state *);
void loli_GL_var_GL_LUMINANCE12_ALPHA4         (loli_state *);
void loli_GL_var_GL_LUMINANCE12_ALPHA12        (loli_state *);
void loli_GL_var_GL_LUMINANCE16_ALPHA16        (loli_state *);
void loli_GL_var_GL_INTENSITY                  (loli_state *);
void loli_GL_var_GL_INTENSITY4                 (loli_state *);
void loli_GL_var_GL_INTENSITY8                 (loli_state *);
void loli_GL_var_GL_INTENSITY12                (loli_state *);
void loli_GL_var_GL_INTENSITY16                (loli_state *);
void loli_GL_var_GL_R3_G3_B2                   (loli_state *);
void loli_GL_var_GL_RGB4                       (loli_state *);
void loli_GL_var_GL_RGB5                       (loli_state *);
void loli_GL_var_GL_RGB8                       (loli_state *);
void loli_GL_var_GL_RGB10                      (loli_state *);
void loli_GL_var_GL_RGB12                      (loli_state *);
void loli_GL_var_GL_RGB16                      (loli_state *);
void loli_GL_var_GL_RGBA2                      (loli_state *);
void loli_GL_var_GL_RGBA4                      (loli_state *);
void loli_GL_var_GL_RGB5_A1                    (loli_state *);
void loli_GL_var_GL_RGBA8                      (loli_state *);
void loli_GL_var_GL_RGB10_A2                   (loli_state *);
void loli_GL_var_GL_RGBA12                     (loli_state *);
void loli_GL_var_GL_RGBA16                     (loli_state *);
void loli_GL_var_GL_CLIENT_PIXEL_STORE_BIT     (loli_state *);
void loli_GL_var_GL_CLIENT_VERTEX_ARRAY_BIT    (loli_state *);
void loli_GL_var_GL_ALL_CLIENT_ATTRIB_BITS     (loli_state *);
void loli_GL_var_GL_CLIENT_ALL_ATTRIB_BITS     (loli_state *);
void loli_GL_var_GL_RESCALE_NORMAL             (loli_state *);
void loli_GL_var_GL_CLAMP_TO_EDGE              (loli_state *);
void loli_GL_var_GL_MAX_ELEMENTS_VERTICES      (loli_state *);
void loli_GL_var_GL_MAX_ELEMENTS_INDICES       (loli_state *);
void loli_GL_var_GL_BGR                        (loli_state *);
void loli_GL_var_GL_BGRA                       (loli_state *);
void loli_GL_var_GL_UNSIGNED_BYTE_3_3_2        (loli_state *);
void loli_GL_var_GL_UNSIGNED_BYTE_2_3_3_REV    (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_5_6_5       (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_5_6_5_REV   (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_4_4_4_4     (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_4_4_4_4_REV (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_5_5_5_1     (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_1_5_5_5_REV (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT_8_8_8_8       (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT_8_8_8_8_REV   (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT_10_10_10_2    (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT_2_10_10_10_REV(loli_state *);
void loli_GL_var_GL_LIGHT_MODEL_COLOR_CONTROL  (loli_state *);
void loli_GL_var_GL_SINGLE_COLOR               (loli_state *);
void loli_GL_var_GL_SEPARATE_SPECULAR_COLOR    (loli_state *);
void loli_GL_var_GL_TEXTURE_MIN_LOD            (loli_state *);
void loli_GL_var_GL_TEXTURE_MAX_LOD            (loli_state *);
void loli_GL_var_GL_TEXTURE_BASE_LEVEL         (loli_state *);
void loli_GL_var_GL_TEXTURE_MAX_LEVEL          (loli_state *);
void loli_GL_var_GL_SMOOTH_POINT_SIZE_RANGE    (loli_state *);
void loli_GL_var_GL_SMOOTH_POINT_SIZE_GRANULARITY(loli_state *);
void loli_GL_var_GL_SMOOTH_LINE_WIDTH_RANGE    (loli_state *);
void loli_GL_var_GL_SMOOTH_LINE_WIDTH_GRANULARITY(loli_state *);
void loli_GL_var_GL_ALIASED_POINT_SIZE_RANGE   (loli_state *);
void loli_GL_var_GL_ALIASED_LINE_WIDTH_RANGE   (loli_state *);
void loli_GL_var_GL_PACK_SKIP_IMAGES           (loli_state *);
void loli_GL_var_GL_PACK_IMAGE_HEIGHT          (loli_state *);
void loli_GL_var_GL_UNPACK_SKIP_IMAGES         (loli_state *);
void loli_GL_var_GL_UNPACK_IMAGE_HEIGHT        (loli_state *);
void loli_GL_var_GL_TEXTURE_3D                 (loli_state *);
void loli_GL_var_GL_PROXY_TEXTURE_3D           (loli_state *);
void loli_GL_var_GL_TEXTURE_DEPTH              (loli_state *);
void loli_GL_var_GL_TEXTURE_WRAP_R             (loli_state *);
void loli_GL_var_GL_MAX_3D_TEXTURE_SIZE        (loli_state *);
void loli_GL_var_GL_TEXTURE_BINDING_3D         (loli_state *);
void loli_GL_var_GL_CONSTANT_COLOR             (loli_state *);
void loli_GL_var_GL_ONE_MINUS_CONSTANT_COLOR   (loli_state *);
void loli_GL_var_GL_CONSTANT_ALPHA             (loli_state *);
void loli_GL_var_GL_ONE_MINUS_CONSTANT_ALPHA   (loli_state *);
void loli_GL_var_GL_COLOR_TABLE                (loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_COLOR_TABLE(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_COLOR_TABLE(loli_state *);
void loli_GL_var_GL_PROXY_COLOR_TABLE          (loli_state *);
void loli_GL_var_GL_PROXY_POST_CONVOLUTION_COLOR_TABLE(loli_state *);
void loli_GL_var_GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE(loli_state *);
void loli_GL_var_GL_COLOR_TABLE_SCALE          (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_BIAS           (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_FORMAT         (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_WIDTH          (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_RED_SIZE       (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_GREEN_SIZE     (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_BLUE_SIZE      (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_ALPHA_SIZE     (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_LUMINANCE_SIZE (loli_state *);
void loli_GL_var_GL_COLOR_TABLE_INTENSITY_SIZE (loli_state *);
void loli_GL_var_GL_CONVOLUTION_1D             (loli_state *);
void loli_GL_var_GL_CONVOLUTION_2D             (loli_state *);
void loli_GL_var_GL_SEPARABLE_2D               (loli_state *);
void loli_GL_var_GL_CONVOLUTION_BORDER_MODE    (loli_state *);
void loli_GL_var_GL_CONVOLUTION_FILTER_SCALE   (loli_state *);
void loli_GL_var_GL_CONVOLUTION_FILTER_BIAS    (loli_state *);
void loli_GL_var_GL_REDUCE                     (loli_state *);
void loli_GL_var_GL_CONVOLUTION_FORMAT         (loli_state *);
void loli_GL_var_GL_CONVOLUTION_WIDTH          (loli_state *);
void loli_GL_var_GL_CONVOLUTION_HEIGHT         (loli_state *);
void loli_GL_var_GL_MAX_CONVOLUTION_WIDTH      (loli_state *);
void loli_GL_var_GL_MAX_CONVOLUTION_HEIGHT     (loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_RED_SCALE (loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_GREEN_SCALE(loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_BLUE_SCALE(loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_ALPHA_SCALE(loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_RED_BIAS  (loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_GREEN_BIAS(loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_BLUE_BIAS (loli_state *);
void loli_GL_var_GL_POST_CONVOLUTION_ALPHA_BIAS(loli_state *);
void loli_GL_var_GL_CONSTANT_BORDER            (loli_state *);
void loli_GL_var_GL_REPLICATE_BORDER           (loli_state *);
void loli_GL_var_GL_CONVOLUTION_BORDER_COLOR   (loli_state *);
void loli_GL_var_GL_COLOR_MATRIX               (loli_state *);
void loli_GL_var_GL_COLOR_MATRIX_STACK_DEPTH   (loli_state *);
void loli_GL_var_GL_MAX_COLOR_MATRIX_STACK_DEPTH(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_RED_SCALE(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_GREEN_SCALE(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_BLUE_SCALE(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_ALPHA_SCALE(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_RED_BIAS (loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_GREEN_BIAS(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_BLUE_BIAS(loli_state *);
void loli_GL_var_GL_POST_COLOR_MATRIX_ALPHA_BIAS(loli_state *);
void loli_GL_var_GL_HISTOGRAM                  (loli_state *);
void loli_GL_var_GL_PROXY_HISTOGRAM            (loli_state *);
void loli_GL_var_GL_HISTOGRAM_WIDTH            (loli_state *);
void loli_GL_var_GL_HISTOGRAM_FORMAT           (loli_state *);
void loli_GL_var_GL_HISTOGRAM_RED_SIZE         (loli_state *);
void loli_GL_var_GL_HISTOGRAM_GREEN_SIZE       (loli_state *);
void loli_GL_var_GL_HISTOGRAM_BLUE_SIZE        (loli_state *);
void loli_GL_var_GL_HISTOGRAM_ALPHA_SIZE       (loli_state *);
void loli_GL_var_GL_HISTOGRAM_LUMINANCE_SIZE   (loli_state *);
void loli_GL_var_GL_HISTOGRAM_SINK             (loli_state *);
void loli_GL_var_GL_MINMAX                     (loli_state *);
void loli_GL_var_GL_MINMAX_FORMAT              (loli_state *);
void loli_GL_var_GL_MINMAX_SINK                (loli_state *);
void loli_GL_var_GL_TABLE_TOO_LARGE            (loli_state *);
void loli_GL_var_GL_BLEND_EQUATION             (loli_state *);
void loli_GL_var_GL_MIN                        (loli_state *);
void loli_GL_var_GL_MAX                        (loli_state *);
void loli_GL_var_GL_FUNC_ADD                   (loli_state *);
void loli_GL_var_GL_FUNC_SUBTRACT              (loli_state *);
void loli_GL_var_GL_FUNC_REVERSE_SUBTRACT      (loli_state *);
void loli_GL_var_GL_BLEND_COLOR                (loli_state *);
void loli_GL_var_GL_TEXTURE0                   (loli_state *);
void loli_GL_var_GL_TEXTURE1                   (loli_state *);
void loli_GL_var_GL_TEXTURE2                   (loli_state *);
void loli_GL_var_GL_TEXTURE3                   (loli_state *);
void loli_GL_var_GL_TEXTURE4                   (loli_state *);
void loli_GL_var_GL_TEXTURE5                   (loli_state *);
void loli_GL_var_GL_TEXTURE6                   (loli_state *);
void loli_GL_var_GL_TEXTURE7                   (loli_state *);
void loli_GL_var_GL_TEXTURE8                   (loli_state *);
void loli_GL_var_GL_TEXTURE9                   (loli_state *);
void loli_GL_var_GL_TEXTURE10                  (loli_state *);
void loli_GL_var_GL_TEXTURE11                  (loli_state *);
void loli_GL_var_GL_TEXTURE12                  (loli_state *);
void loli_GL_var_GL_TEXTURE13                  (loli_state *);
void loli_GL_var_GL_TEXTURE14                  (loli_state *);
void loli_GL_var_GL_TEXTURE15                  (loli_state *);
void loli_GL_var_GL_TEXTURE16                  (loli_state *);
void loli_GL_var_GL_TEXTURE17                  (loli_state *);
void loli_GL_var_GL_TEXTURE18                  (loli_state *);
void loli_GL_var_GL_TEXTURE19                  (loli_state *);
void loli_GL_var_GL_TEXTURE20                  (loli_state *);
void loli_GL_var_GL_TEXTURE21                  (loli_state *);
void loli_GL_var_GL_TEXTURE22                  (loli_state *);
void loli_GL_var_GL_TEXTURE23                  (loli_state *);
void loli_GL_var_GL_TEXTURE24                  (loli_state *);
void loli_GL_var_GL_TEXTURE25                  (loli_state *);
void loli_GL_var_GL_TEXTURE26                  (loli_state *);
void loli_GL_var_GL_TEXTURE27                  (loli_state *);
void loli_GL_var_GL_TEXTURE28                  (loli_state *);
void loli_GL_var_GL_TEXTURE29                  (loli_state *);
void loli_GL_var_GL_TEXTURE30                  (loli_state *);
void loli_GL_var_GL_TEXTURE31                  (loli_state *);
void loli_GL_var_GL_ACTIVE_TEXTURE             (loli_state *);
void loli_GL_var_GL_CLIENT_ACTIVE_TEXTURE      (loli_state *);
void loli_GL_var_GL_MAX_TEXTURE_UNITS          (loli_state *);
void loli_GL_var_GL_NORMAL_MAP                 (loli_state *);
void loli_GL_var_GL_REFLECTION_MAP             (loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP           (loli_state *);
void loli_GL_var_GL_TEXTURE_BINDING_CUBE_MAP   (loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP_POSITIVE_X(loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP_NEGATIVE_X(loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP_POSITIVE_Y(loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y(loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP_POSITIVE_Z(loli_state *);
void loli_GL_var_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z(loli_state *);
void loli_GL_var_GL_PROXY_TEXTURE_CUBE_MAP     (loli_state *);
void loli_GL_var_GL_MAX_CUBE_MAP_TEXTURE_SIZE  (loli_state *);
void loli_GL_var_GL_COMPRESSED_ALPHA           (loli_state *);
void loli_GL_var_GL_COMPRESSED_LUMINANCE       (loli_state *);
void loli_GL_var_GL_COMPRESSED_LUMINANCE_ALPHA (loli_state *);
void loli_GL_var_GL_COMPRESSED_INTENSITY       (loli_state *);
void loli_GL_var_GL_COMPRESSED_RGB             (loli_state *);
void loli_GL_var_GL_COMPRESSED_RGBA            (loli_state *);
void loli_GL_var_GL_TEXTURE_COMPRESSION_HINT   (loli_state *);
void loli_GL_var_GL_TEXTURE_COMPRESSED_IMAGE_SIZE(loli_state *);
void loli_GL_var_GL_TEXTURE_COMPRESSED         (loli_state *);
void loli_GL_var_GL_NUM_COMPRESSED_TEXTURE_FORMATS(loli_state *);
void loli_GL_var_GL_COMPRESSED_TEXTURE_FORMATS (loli_state *);
void loli_GL_var_GL_MULTISAMPLE                (loli_state *);
void loli_GL_var_GL_SAMPLE_ALPHA_TO_COVERAGE   (loli_state *);
void loli_GL_var_GL_SAMPLE_ALPHA_TO_ONE        (loli_state *);
void loli_GL_var_GL_SAMPLE_COVERAGE            (loli_state *);
void loli_GL_var_GL_SAMPLE_BUFFERS             (loli_state *);
void loli_GL_var_GL_SAMPLES                    (loli_state *);
void loli_GL_var_GL_SAMPLE_COVERAGE_VALUE      (loli_state *);
void loli_GL_var_GL_SAMPLE_COVERAGE_INVERT     (loli_state *);
void loli_GL_var_GL_MULTISAMPLE_BIT            (loli_state *);
void loli_GL_var_GL_TRANSPOSE_MODELVIEW_MATRIX (loli_state *);
void loli_GL_var_GL_TRANSPOSE_PROJECTION_MATRIX(loli_state *);
void loli_GL_var_GL_TRANSPOSE_TEXTURE_MATRIX   (loli_state *);
void loli_GL_var_GL_TRANSPOSE_COLOR_MATRIX     (loli_state *);
void loli_GL_var_GL_COMBINE                    (loli_state *);
void loli_GL_var_GL_COMBINE_RGB                (loli_state *);
void loli_GL_var_GL_COMBINE_ALPHA              (loli_state *);
void loli_GL_var_GL_SOURCE0_RGB                (loli_state *);
void loli_GL_var_GL_SOURCE1_RGB                (loli_state *);
void loli_GL_var_GL_SOURCE2_RGB                (loli_state *);
void loli_GL_var_GL_SOURCE0_ALPHA              (loli_state *);
void loli_GL_var_GL_SOURCE1_ALPHA              (loli_state *);
void loli_GL_var_GL_SOURCE2_ALPHA              (loli_state *);
void loli_GL_var_GL_OPERAND0_RGB               (loli_state *);
void loli_GL_var_GL_OPERAND1_RGB               (loli_state *);
void loli_GL_var_GL_OPERAND2_RGB               (loli_state *);
void loli_GL_var_GL_OPERAND0_ALPHA             (loli_state *);
void loli_GL_var_GL_OPERAND1_ALPHA             (loli_state *);
void loli_GL_var_GL_OPERAND2_ALPHA             (loli_state *);
void loli_GL_var_GL_RGB_SCALE                  (loli_state *);
void loli_GL_var_GL_ADD_SIGNED                 (loli_state *);
void loli_GL_var_GL_INTERPOLATE                (loli_state *);
void loli_GL_var_GL_SUBTRACT                   (loli_state *);
void loli_GL_var_GL_CONSTANT                   (loli_state *);
void loli_GL_var_GL_PRIMARY_COLOR              (loli_state *);
void loli_GL_var_GL_PREVIOUS                   (loli_state *);
void loli_GL_var_GL_DOT3_RGB                   (loli_state *);
void loli_GL_var_GL_DOT3_RGBA                  (loli_state *);
void loli_GL_var_GL_CLAMP_TO_BORDER            (loli_state *);
void loli_GL_var_GL_TEXTURE0_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE1_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE2_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE3_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE4_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE5_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE6_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE7_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE8_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE9_ARB               (loli_state *);
void loli_GL_var_GL_TEXTURE10_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE11_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE12_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE13_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE14_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE15_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE16_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE17_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE18_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE19_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE20_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE21_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE22_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE23_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE24_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE25_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE26_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE27_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE28_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE29_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE30_ARB              (loli_state *);
void loli_GL_var_GL_TEXTURE31_ARB              (loli_state *);
void loli_GL_var_GL_ACTIVE_TEXTURE_ARB         (loli_state *);
void loli_GL_var_GL_CLIENT_ACTIVE_TEXTURE_ARB  (loli_state *);
void loli_GL_var_GL_MAX_TEXTURE_UNITS_ARB      (loli_state *);
void loli_GL_var_GL_DEPTH_STENCIL_MESA         (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT_24_8_MESA     (loli_state *);
void loli_GL_var_GL_UNSIGNED_INT_8_24_REV_MESA (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_15_1_MESA   (loli_state *);
void loli_GL_var_GL_UNSIGNED_SHORT_1_15_REV_MESA(loli_state *);
void loli_GL_var_GL_ALPHA_BLEND_EQUATION_ATI   (loli_state *);

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

        loli_GL__glutEstablishOverlay,
        loli_GL__glutRemoveOverlay,
        loli_GL__glutUseLayer,
        loli_GL__glutPostOverlayRedisplay,
        loli_GL__glutPostWindowOverlayRedisplay,
        loli_GL__glutShowOverlay,
        loli_GL__glutHideOverlay,

        loli_GL__glutCreateMenu,
        loli_GL__glutDestroyMenu,
        loli_GL__glutGetMenu,
        loli_GL__glutSetMenu,
        loli_GL__glutAddMenuEntry,
        loli_GL__glutAddSubMenu,
        loli_GL__glutChangeToMenuEntry,
        loli_GL__glutChangeToSubMenu,
        loli_GL__glutRemoveMenuItem,
        loli_GL__glutAttachMenu,
        loli_GL__glutDetachMenu,

        loli_GL__glutMainLoop,

        loli_GL__glutDisplayFunc,
        loli_GL__glutKeyboardFunc,
        loli_GL__glutSpecialFunc,
        loli_GL__glutReshapeFunc,
        loli_GL__glutVisibilityFunc,
        loli_GL__glutMouseFunc,
        loli_GL__glutMotionFunc,
        loli_GL__glutPassiveMotionFunc,
        loli_GL__glutEntryFunc,

        // TODO: delete it
        loli_GL__example,

        loli_GL__glClearIndex,
        loli_GL__glClearColor,
        loli_GL__glClear,
        loli_GL__glIndexMask,
        loli_GL__glColorMask,
        loli_GL__glAlphaFunc,
        loli_GL__glBlendFunc,
        loli_GL__glLogicOp,
        loli_GL__glCullFace,
        loli_GL__glFrontFace,
        loli_GL__glPointSize,
        loli_GL__glLineWidth,
        loli_GL__glLineStipple,
        loli_GL__glPolygonMode,
        loli_GL__glPolygonOffset,
        loli_GL__glPolygonStipple,
        loli_GL__glGetPolygonStipple,
        loli_GL__glEdgeFlag,
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

        loli_GL_var_GLUT_LEFT_BUTTON,
        loli_GL_var_GLUT_MIDDLE_BUTTON,
        loli_GL_var_GLUT_DOWN,
        loli_GL_var_GLUT_UP,
        loli_GL_var_GLUT_ENTERED,
        loli_GL_var_GLUT_WINDOW_X,
        loli_GL_var_GLUT_WINDOW_Y,
        loli_GL_var_GLUT_WINDOW_WIDTH,
        loli_GL_var_GLUT_WINDOW_HEIGHT,
        loli_GL_var_GLUT_WINDOW_BUFFER_SIZE,
        loli_GL_var_GLUT_WINDOW_STENCIL_SIZE,
        loli_GL_var_GLUT_WINDOW_DEPTH_SIZE,
        loli_GL_var_GLUT_WINDOW_RED_SIZE,
        loli_GL_var_GLUT_WINDOW_GREEN_SIZE,
        loli_GL_var_GLUT_WINDOW_BLUE_SIZE,
        loli_GL_var_GLUT_WINDOW_ALPHA_SIZE,
        loli_GL_var_GLUT_WINDOW_ACCUM_RED_SIZE,
        loli_GL_var_GLUT_WINDOW_ACCUM_GREEN_SIZE,
        loli_GL_var_GLUT_WINDOW_ACCUM_BLUE_SIZE,
        loli_GL_var_GLUT_WINDOW_ACCUM_ALPHA_SIZE,
        loli_GL_var_GLUT_WINDOW_DOUBLEBUFFER,
        loli_GL_var_GLUT_WINDOW_RGBA,
        loli_GL_var_GLUT_WINDOW_PARENT,
        loli_GL_var_GLUT_WINDOW_NUM_CHILDREN,
        loli_GL_var_GLUT_WINDOW_COLORMAP_SIZE,
        loli_GL_var_GLUT_WINDOW_NUM_SAMPLES,
        loli_GL_var_GLUT_WINDOW_STEREO,
        loli_GL_var_GLUT_WINDOW_CURSOR,
        loli_GL_var_GLUT_SCREEN_WIDTH,
        loli_GL_var_GLUT_SCREEN_HEIGHT,
        loli_GL_var_GLUT_SCREEN_WIDTH_MM,
        loli_GL_var_GLUT_SCREEN_HEIGHT_MM,
        loli_GL_var_GLUT_MENU_NUM_ITEMS,
        loli_GL_var_GLUT_DISPLAY_MODE_POSSIBLE,
        loli_GL_var_GLUT_INIT_WINDOW_X,
        loli_GL_var_GLUT_INIT_WINDOW_Y,
        loli_GL_var_GLUT_INIT_WINDOW_WIDTH,
        loli_GL_var_GLUT_INIT_WINDOW_HEIGHT,
        loli_GL_var_GLUT_INIT_DISPLAY_MODE,
        loli_GL_var_GLUT_ELAPSED_TIME,
        loli_GL_var_GLUT_WINDOW_FORMAT_ID,
        loli_GL_var_GLUT_HAS_KEYBOARD,
        loli_GL_var_GLUT_HAS_MOUSE,
        loli_GL_var_GLUT_HAS_SPACEBALL,
        loli_GL_var_GLUT_HAS_DIAL_AND_BUTTON_BOX,
        loli_GL_var_GLUT_HAS_TABLET,
        loli_GL_var_GLUT_NUM_MOUSE_BUTTONS,
        loli_GL_var_GLUT_NUM_SPACEBALL_BUTTONS,
        loli_GL_var_GLUT_NUM_BUTTON_BOX_BUTTONS,
        loli_GL_var_GLUT_NUM_DIALS,
        loli_GL_var_GLUT_NUM_TABLET_BUTTONS,
        loli_GL_var_GLUT_DEVICE_IGNORE_KEY_REPEAT,
        loli_GL_var_GLUT_DEVICE_KEY_REPEAT,
        loli_GL_var_GLUT_HAS_JOYSTICK,
        loli_GL_var_GLUT_OWNS_JOYSTICK,
        loli_GL_var_GLUT_JOYSTICK_BUTTONS,
        loli_GL_var_GLUT_JOYSTICK_AXES,
        loli_GL_var_GLUT_JOYSTICK_POLL_RATE,
        loli_GL_var_GLUT_OVERLAY_POSSIBLE,
        loli_GL_var_GLUT_LAYER_IN_USE,
        loli_GL_var_GLUT_HAS_OVERLAY,
        loli_GL_var_GLUT_TRANSPARENT_INDEX,
        loli_GL_var_GLUT_NORMAL_DAMAGED,
        loli_GL_var_GLUT_OVERLAY_DAMAGED,
        loli_GL_var_GLUT_VIDEO_RESIZE_POSSIBLE,
        loli_GL_var_GLUT_VIDEO_RESIZE_IN_USE,
        loli_GL_var_GLUT_VIDEO_RESIZE_X_DELTA,
        loli_GL_var_GLUT_VIDEO_RESIZE_Y_DELTA,
        loli_GL_var_GLUT_VIDEO_RESIZE_WIDTH_DELTA,
        loli_GL_var_GLUT_VIDEO_RESIZE_HEIGHT_DELTA,
        loli_GL_var_GLUT_VIDEO_RESIZE_X,
        loli_GL_var_GLUT_VIDEO_RESIZE_Y,
        loli_GL_var_GLUT_VIDEO_RESIZE_WIDTH,
        loli_GL_var_GLUT_VIDEO_RESIZE_HEIGHT,
        loli_GL_var_GLUT_NORMAL,
        loli_GL_var_GLUT_OVERLAY,
        loli_GL_var_GLUT_ACTIVE_SHIFT,
        loli_GL_var_GLUT_ACTIVE_CTRL,
        loli_GL_var_GLUT_ACTIVE_ALT,
        loli_GL_var_GLUT_CURSOR_RIGHT_ARROW,
        loli_GL_var_GLUT_CURSOR_LEFT_ARROW,
        loli_GL_var_GLUT_CURSOR_INFO,
        loli_GL_var_GLUT_CURSOR_DESTROY,
        loli_GL_var_GLUT_CURSOR_HELP,
        loli_GL_var_GLUT_CURSOR_CYCLE,
        loli_GL_var_GLUT_CURSOR_SPRAY,
        loli_GL_var_GLUT_CURSOR_WAIT,
        loli_GL_var_GLUT_CURSOR_TEXT,
        loli_GL_var_GLUT_CURSOR_CROSSHAIR,
        loli_GL_var_GLUT_CURSOR_UP_DOWN,
        loli_GL_var_GLUT_CURSOR_LEFT_RIGHT,
        loli_GL_var_GLUT_CURSOR_TOP_SIDE,
        loli_GL_var_GLUT_CURSOR_BOTTOM_SIDE,
        loli_GL_var_GLUT_CURSOR_LEFT_SIDE,
        loli_GL_var_GLUT_CURSOR_RIGHT_SIDE,
        loli_GL_var_GLUT_CURSOR_TOP_LEFT_CORNER,
        loli_GL_var_GLUT_CURSOR_TOP_RIGHT_CORNER,
        loli_GL_var_GLUT_CURSOR_BOTTOM_RIGHT_CORNER,
        loli_GL_var_GLUT_CURSOR_BOTTOM_LEFT_CORNER,
        loli_GL_var_GLUT_CURSOR_INHERIT,
        loli_GL_var_GLUT_CURSOR_NONE,
        loli_GL_var_GLUT_CURSOR_FULL_CROSSHAIR,
        loli_GL_var_GLUT_RED,
        loli_GL_var_GLUT_GREEN,
        loli_GL_var_GLUT_BLUE,
        loli_GL_var_GLUT_KEY_REPEAT_OFF,
        loli_GL_var_GLUT_KEY_REPEAT_ON,
        loli_GL_var_GLUT_KEY_REPEAT_DEFAULT,
        loli_GL_var_GLUT_JOYSTICK_BUTTON_A,
        loli_GL_var_GLUT_JOYSTICK_BUTTON_B,
        loli_GL_var_GLUT_JOYSTICK_BUTTON_C,
        loli_GL_var_GLUT_JOYSTICK_BUTTON_D,
        loli_GL_var_GLUT_GAME_MODE_ACTIVE,
        loli_GL_var_GLUT_GAME_MODE_POSSIBLE,
        loli_GL_var_GLUT_GAME_MODE_WIDTH,
        loli_GL_var_GLUT_GAME_MODE_HEIGHT,
        loli_GL_var_GLUT_GAME_MODE_PIXEL_DEPTH,
        loli_GL_var_GLUT_GAME_MODE_REFRESH_RATE,
        loli_GL_var_GLUT_GAME_MODE_DISPLAY_CHANGED,

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
        loli_GL_var_GL_LIGHTING,
        loli_GL_var_GL_LIGHT0,
        loli_GL_var_GL_LIGHT1,
        loli_GL_var_GL_LIGHT2,
        loli_GL_var_GL_LIGHT3,
        loli_GL_var_GL_LIGHT4,
        loli_GL_var_GL_LIGHT5,
        loli_GL_var_GL_LIGHT6,
        loli_GL_var_GL_LIGHT7,
        loli_GL_var_GL_SPOT_EXPONENT,
        loli_GL_var_GL_SPOT_CUTOFF,
        loli_GL_var_GL_CONSTANT_ATTENUATION,
        loli_GL_var_GL_LINEAR_ATTENUATION,
        loli_GL_var_GL_QUADRATIC_ATTENUATION,
        loli_GL_var_GL_AMBIENT,
        loli_GL_var_GL_DIFFUSE,
        loli_GL_var_GL_SPECULAR,
        loli_GL_var_GL_SHININESS,
        loli_GL_var_GL_EMISSION,
        loli_GL_var_GL_POSITION,
        loli_GL_var_GL_SPOT_DIRECTION,
        loli_GL_var_GL_AMBIENT_AND_DIFFUSE,
        loli_GL_var_GL_COLOR_INDEXES,
        loli_GL_var_GL_LIGHT_MODEL_TWO_SIDE,
        loli_GL_var_GL_LIGHT_MODEL_LOCAL_VIEWER,
        loli_GL_var_GL_LIGHT_MODEL_AMBIENT,
        loli_GL_var_GL_FRONT_AND_BACK,
        loli_GL_var_GL_SHADE_MODEL,
        loli_GL_var_GL_FLAT,
        loli_GL_var_GL_SMOOTH,
        loli_GL_var_GL_COLOR_MATERIAL,
        loli_GL_var_GL_COLOR_MATERIAL_FACE,
        loli_GL_var_GL_COLOR_MATERIAL_PARAMETER,
        loli_GL_var_GL_NORMALIZE,
        loli_GL_var_GL_CLIP_PLANE0,
        loli_GL_var_GL_CLIP_PLANE1,
        loli_GL_var_GL_CLIP_PLANE2,
        loli_GL_var_GL_CLIP_PLANE3,
        loli_GL_var_GL_CLIP_PLANE4,
        loli_GL_var_GL_CLIP_PLANE5,
        loli_GL_var_GL_ACCUM_RED_BITS,
        loli_GL_var_GL_ACCUM_GREEN_BITS,
        loli_GL_var_GL_ACCUM_BLUE_BITS,
        loli_GL_var_GL_ACCUM_ALPHA_BITS,
        loli_GL_var_GL_ACCUM_CLEAR_VALUE,
        loli_GL_var_GL_ACCUM,
        loli_GL_var_GL_ADD,
        loli_GL_var_GL_LOAD,
        loli_GL_var_GL_MULT,
        loli_GL_var_GL_RETURN,
        loli_GL_var_GL_ALPHA_TEST,
        loli_GL_var_GL_ALPHA_TEST_REF,
        loli_GL_var_GL_ALPHA_TEST_FUNC,
        loli_GL_var_GL_BLEND,
        loli_GL_var_GL_BLEND_SRC,
        loli_GL_var_GL_BLEND_DST,
        loli_GL_var_GL_ZERO,
        loli_GL_var_GL_ONE,
        loli_GL_var_GL_SRC_COLOR,
        loli_GL_var_GL_ONE_MINUS_SRC_COLOR,
        loli_GL_var_GL_SRC_ALPHA,
        loli_GL_var_GL_ONE_MINUS_SRC_ALPHA,
        loli_GL_var_GL_DST_ALPHA,
        loli_GL_var_GL_ONE_MINUS_DST_ALPHA,
        loli_GL_var_GL_DST_COLOR,
        loli_GL_var_GL_ONE_MINUS_DST_COLOR,
        loli_GL_var_GL_SRC_ALPHA_SATURATE,
        loli_GL_var_GL_FEEDBACK,
        loli_GL_var_GL_RENDER,
        loli_GL_var_GL_SELECT,
        loli_GL_var_GL_2D,
        loli_GL_var_GL_3D,
        loli_GL_var_GL_3D_COLOR,
        loli_GL_var_GL_3D_COLOR_TEXTURE,
        loli_GL_var_GL_4D_COLOR_TEXTURE,
        loli_GL_var_GL_POINT_TOKEN,
        loli_GL_var_GL_LINE_TOKEN,
        loli_GL_var_GL_LINE_RESET_TOKEN,
        loli_GL_var_GL_POLYGON_TOKEN,
        loli_GL_var_GL_BITMAP_TOKEN,
        loli_GL_var_GL_DRAW_PIXEL_TOKEN,
        loli_GL_var_GL_COPY_PIXEL_TOKEN,
        loli_GL_var_GL_PASS_THROUGH_TOKEN,
        loli_GL_var_GL_FEEDBACK_BUFFER_POINTER,
        loli_GL_var_GL_FEEDBACK_BUFFER_SIZE,
        loli_GL_var_GL_FEEDBACK_BUFFER_TYPE,
        loli_GL_var_GL_SELECTION_BUFFER_POINTER,
        loli_GL_var_GL_SELECTION_BUFFER_SIZE,
        loli_GL_var_GL_FOG,
        loli_GL_var_GL_FOG_MODE,
        loli_GL_var_GL_FOG_DENSITY,
        loli_GL_var_GL_FOG_COLOR,
        loli_GL_var_GL_FOG_INDEX,
        loli_GL_var_GL_FOG_START,
        loli_GL_var_GL_FOG_END,
        loli_GL_var_GL_LINEAR,
        loli_GL_var_GL_EXP,
        loli_GL_var_GL_EXP2,
        loli_GL_var_GL_LOGIC_OP,
        loli_GL_var_GL_INDEX_LOGIC_OP,
        loli_GL_var_GL_COLOR_LOGIC_OP,
        loli_GL_var_GL_LOGIC_OP_MODE,
        loli_GL_var_GL_CLEAR,
        loli_GL_var_GL_SET,
        loli_GL_var_GL_COPY,
        loli_GL_var_GL_COPY_INVERTED,
        loli_GL_var_GL_NOOP,
        loli_GL_var_GL_INVERT,
        loli_GL_var_GL_AND,
        loli_GL_var_GL_NAND,
        loli_GL_var_GL_OR,
        loli_GL_var_GL_NOR,
        loli_GL_var_GL_XOR,
        loli_GL_var_GL_EQUIV,
        loli_GL_var_GL_AND_REVERSE,
        loli_GL_var_GL_AND_INVERTED,
        loli_GL_var_GL_OR_REVERSE,
        loli_GL_var_GL_OR_INVERTED,
        loli_GL_var_GL_STENCIL_BITS,
        loli_GL_var_GL_STENCIL_TEST,
        loli_GL_var_GL_STENCIL_CLEAR_VALUE,
        loli_GL_var_GL_STENCIL_FUNC,
        loli_GL_var_GL_STENCIL_VALUE_MASK,
        loli_GL_var_GL_STENCIL_FAIL,
        loli_GL_var_GL_STENCIL_PASS_DEPTH_FAIL,
        loli_GL_var_GL_STENCIL_PASS_DEPTH_PASS,
        loli_GL_var_GL_STENCIL_REF,
        loli_GL_var_GL_STENCIL_WRITEMASK,
        loli_GL_var_GL_STENCIL_INDEX,
        loli_GL_var_GL_KEEP,
        loli_GL_var_GL_REPLACE,
        loli_GL_var_GL_INCR,
        loli_GL_var_GL_DECR,
        loli_GL_var_GL_NONE,
        loli_GL_var_GL_LEFT,
        loli_GL_var_GL_RIGHT,
        loli_GL_var_GL_FRONT_LEFT,
        loli_GL_var_GL_FRONT_RIGHT,
        loli_GL_var_GL_BACK_LEFT,
        loli_GL_var_GL_BACK_RIGHT,
        loli_GL_var_GL_AUX0,
        loli_GL_var_GL_AUX1,
        loli_GL_var_GL_AUX2,
        loli_GL_var_GL_AUX3,
        loli_GL_var_GL_COLOR_INDEX,
        loli_GL_var_GL_RED,
        loli_GL_var_GL_GREEN,
        loli_GL_var_GL_BLUE,
        loli_GL_var_GL_ALPHA,
        loli_GL_var_GL_LUMINANCE,
        loli_GL_var_GL_LUMINANCE_ALPHA,
        loli_GL_var_GL_ALPHA_BITS,
        loli_GL_var_GL_RED_BITS,
        loli_GL_var_GL_GREEN_BITS,
        loli_GL_var_GL_BLUE_BITS,
        loli_GL_var_GL_INDEX_BITS,
        loli_GL_var_GL_SUBPIXEL_BITS,
        loli_GL_var_GL_AUX_BUFFERS,
        loli_GL_var_GL_READ_BUFFER,
        loli_GL_var_GL_DRAW_BUFFER,
        loli_GL_var_GL_DOUBLEBUFFER,
        loli_GL_var_GL_STEREO,
        loli_GL_var_GL_BITMAP,
        loli_GL_var_GL_COLOR,
        loli_GL_var_GL_DEPTH,
        loli_GL_var_GL_STENCIL,
        loli_GL_var_GL_DITHER,
        loli_GL_var_GL_RGB,
        loli_GL_var_GL_RGBA,
        loli_GL_var_GL_MAX_LIST_NESTING,
        loli_GL_var_GL_MAX_EVAL_ORDER,
        loli_GL_var_GL_MAX_LIGHTS,
        loli_GL_var_GL_MAX_CLIP_PLANES,
        loli_GL_var_GL_MAX_TEXTURE_SIZE,
        loli_GL_var_GL_MAX_PIXEL_MAP_TABLE,
        loli_GL_var_GL_MAX_ATTRIB_STACK_DEPTH,
        loli_GL_var_GL_MAX_MODELVIEW_STACK_DEPTH,
        loli_GL_var_GL_MAX_NAME_STACK_DEPTH,
        loli_GL_var_GL_MAX_PROJECTION_STACK_DEPTH,
        loli_GL_var_GL_MAX_TEXTURE_STACK_DEPTH,
        loli_GL_var_GL_MAX_VIEWPORT_DIMS,
        loli_GL_var_GL_MAX_CLIENT_ATTRIB_STACK_DEPTH,
        loli_GL_var_GL_ATTRIB_STACK_DEPTH,
        loli_GL_var_GL_CLIENT_ATTRIB_STACK_DEPTH,
        loli_GL_var_GL_COLOR_CLEAR_VALUE,
        loli_GL_var_GL_COLOR_WRITEMASK,
        loli_GL_var_GL_CURRENT_INDEX,
        loli_GL_var_GL_CURRENT_COLOR,
        loli_GL_var_GL_CURRENT_NORMAL,
        loli_GL_var_GL_CURRENT_RASTER_COLOR,
        loli_GL_var_GL_CURRENT_RASTER_DISTANCE,
        loli_GL_var_GL_CURRENT_RASTER_INDEX,
        loli_GL_var_GL_CURRENT_RASTER_POSITION,
        loli_GL_var_GL_CURRENT_RASTER_TEXTURE_COORDS,
        loli_GL_var_GL_CURRENT_RASTER_POSITION_VALID,
        loli_GL_var_GL_CURRENT_TEXTURE_COORDS,
        loli_GL_var_GL_INDEX_CLEAR_VALUE,
        loli_GL_var_GL_INDEX_MODE,
        loli_GL_var_GL_INDEX_WRITEMASK,
        loli_GL_var_GL_MODELVIEW_MATRIX,
        loli_GL_var_GL_MODELVIEW_STACK_DEPTH,
        loli_GL_var_GL_NAME_STACK_DEPTH,
        loli_GL_var_GL_PROJECTION_MATRIX,
        loli_GL_var_GL_PROJECTION_STACK_DEPTH,
        loli_GL_var_GL_RENDER_MODE,
        loli_GL_var_GL_RGBA_MODE,
        loli_GL_var_GL_TEXTURE_MATRIX,
        loli_GL_var_GL_TEXTURE_STACK_DEPTH,
        loli_GL_var_GL_VIEWPORT,
        loli_GL_var_GL_AUTO_NORMAL,
        loli_GL_var_GL_MAP1_COLOR_4,
        loli_GL_var_GL_MAP1_INDEX,
        loli_GL_var_GL_MAP1_NORMAL,
        loli_GL_var_GL_MAP1_TEXTURE_COORD_1,
        loli_GL_var_GL_MAP1_TEXTURE_COORD_2,
        loli_GL_var_GL_MAP1_TEXTURE_COORD_3,
        loli_GL_var_GL_MAP1_TEXTURE_COORD_4,
        loli_GL_var_GL_MAP1_VERTEX_3,
        loli_GL_var_GL_MAP1_VERTEX_4,
        loli_GL_var_GL_MAP2_COLOR_4,
        loli_GL_var_GL_MAP2_INDEX,
        loli_GL_var_GL_MAP2_NORMAL,
        loli_GL_var_GL_MAP2_TEXTURE_COORD_1,
        loli_GL_var_GL_MAP2_TEXTURE_COORD_2,
        loli_GL_var_GL_MAP2_TEXTURE_COORD_3,
        loli_GL_var_GL_MAP2_TEXTURE_COORD_4,
        loli_GL_var_GL_MAP2_VERTEX_3,
        loli_GL_var_GL_MAP2_VERTEX_4,
        loli_GL_var_GL_MAP1_GRID_DOMAIN,
        loli_GL_var_GL_MAP1_GRID_SEGMENTS,
        loli_GL_var_GL_MAP2_GRID_DOMAIN,
        loli_GL_var_GL_MAP2_GRID_SEGMENTS,
        loli_GL_var_GL_COEFF,
        loli_GL_var_GL_ORDER,
        loli_GL_var_GL_DOMAIN,
        loli_GL_var_GL_PERSPECTIVE_CORRECTION_HINT,
        loli_GL_var_GL_POINT_SMOOTH_HINT,
        loli_GL_var_GL_LINE_SMOOTH_HINT,
        loli_GL_var_GL_POLYGON_SMOOTH_HINT,
        loli_GL_var_GL_DONT_CARE,
        loli_GL_var_GL_FASTEST,
        loli_GL_var_GL_NICEST,
        loli_GL_var_GL_SCISSOR_BOX,
        loli_GL_var_GL_SCISSOR_TEST,
        loli_GL_var_GL_MAP_COLOR,
        loli_GL_var_GL_MAP_STENCIL,
        loli_GL_var_GL_INDEX_SHIFT,
        loli_GL_var_GL_INDEX_OFFSET,
        loli_GL_var_GL_RED_SCALE,
        loli_GL_var_GL_RED_BIAS,
        loli_GL_var_GL_GREEN_SCALE,
        loli_GL_var_GL_GREEN_BIAS,
        loli_GL_var_GL_BLUE_SCALE,
        loli_GL_var_GL_BLUE_BIAS,
        loli_GL_var_GL_ALPHA_SCALE,
        loli_GL_var_GL_ALPHA_BIAS,
        loli_GL_var_GL_DEPTH_SCALE,
        loli_GL_var_GL_DEPTH_BIAS,
        loli_GL_var_GL_PIXEL_MAP_S_TO_S_SIZE,
        loli_GL_var_GL_PIXEL_MAP_I_TO_I_SIZE,
        loli_GL_var_GL_PIXEL_MAP_I_TO_R_SIZE,
        loli_GL_var_GL_PIXEL_MAP_I_TO_G_SIZE,
        loli_GL_var_GL_PIXEL_MAP_I_TO_B_SIZE,
        loli_GL_var_GL_PIXEL_MAP_I_TO_A_SIZE,
        loli_GL_var_GL_PIXEL_MAP_R_TO_R_SIZE,
        loli_GL_var_GL_PIXEL_MAP_G_TO_G_SIZE,
        loli_GL_var_GL_PIXEL_MAP_B_TO_B_SIZE,
        loli_GL_var_GL_PIXEL_MAP_A_TO_A_SIZE,
        loli_GL_var_GL_PIXEL_MAP_S_TO_S,
        loli_GL_var_GL_PIXEL_MAP_I_TO_I,
        loli_GL_var_GL_PIXEL_MAP_I_TO_R,
        loli_GL_var_GL_PIXEL_MAP_I_TO_G,
        loli_GL_var_GL_PIXEL_MAP_I_TO_B,
        loli_GL_var_GL_PIXEL_MAP_I_TO_A,
        loli_GL_var_GL_PIXEL_MAP_R_TO_R,
        loli_GL_var_GL_PIXEL_MAP_G_TO_G,
        loli_GL_var_GL_PIXEL_MAP_B_TO_B,
        loli_GL_var_GL_PIXEL_MAP_A_TO_A,
        loli_GL_var_GL_PACK_ALIGNMENT,
        loli_GL_var_GL_PACK_LSB_FIRST,
        loli_GL_var_GL_PACK_ROW_LENGTH,
        loli_GL_var_GL_PACK_SKIP_PIXELS,
        loli_GL_var_GL_PACK_SKIP_ROWS,
        loli_GL_var_GL_PACK_SWAP_BYTES,
        loli_GL_var_GL_UNPACK_ALIGNMENT,
        loli_GL_var_GL_UNPACK_LSB_FIRST,
        loli_GL_var_GL_UNPACK_ROW_LENGTH,
        loli_GL_var_GL_UNPACK_SKIP_PIXELS,
        loli_GL_var_GL_UNPACK_SKIP_ROWS,
        loli_GL_var_GL_UNPACK_SWAP_BYTES,
        loli_GL_var_GL_ZOOM_X,
        loli_GL_var_GL_ZOOM_Y,
        loli_GL_var_GL_TEXTURE_ENV,
        loli_GL_var_GL_TEXTURE_ENV_MODE,
        loli_GL_var_GL_TEXTURE_1D,
        loli_GL_var_GL_TEXTURE_2D,
        loli_GL_var_GL_TEXTURE_WRAP_S,
        loli_GL_var_GL_TEXTURE_WRAP_T,
        loli_GL_var_GL_TEXTURE_MAG_FILTER,
        loli_GL_var_GL_TEXTURE_MIN_FILTER,
        loli_GL_var_GL_TEXTURE_ENV_COLOR,
        loli_GL_var_GL_TEXTURE_GEN_S,
        loli_GL_var_GL_TEXTURE_GEN_T,
        loli_GL_var_GL_TEXTURE_GEN_R,
        loli_GL_var_GL_TEXTURE_GEN_Q,
        loli_GL_var_GL_TEXTURE_GEN_MODE,
        loli_GL_var_GL_TEXTURE_BORDER_COLOR,
        loli_GL_var_GL_TEXTURE_WIDTH,
        loli_GL_var_GL_TEXTURE_HEIGHT,
        loli_GL_var_GL_TEXTURE_BORDER,
        loli_GL_var_GL_TEXTURE_COMPONENTS,
        loli_GL_var_GL_TEXTURE_RED_SIZE,
        loli_GL_var_GL_TEXTURE_GREEN_SIZE,
        loli_GL_var_GL_TEXTURE_BLUE_SIZE,
        loli_GL_var_GL_TEXTURE_ALPHA_SIZE,
        loli_GL_var_GL_TEXTURE_LUMINANCE_SIZE,
        loli_GL_var_GL_TEXTURE_INTENSITY_SIZE,
        loli_GL_var_GL_NEAREST_MIPMAP_NEAREST,
        loli_GL_var_GL_NEAREST_MIPMAP_LINEAR,
        loli_GL_var_GL_LINEAR_MIPMAP_NEAREST,
        loli_GL_var_GL_LINEAR_MIPMAP_LINEAR,
        loli_GL_var_GL_OBJECT_LINEAR,
        loli_GL_var_GL_OBJECT_PLANE,
        loli_GL_var_GL_EYE_LINEAR,
        loli_GL_var_GL_EYE_PLANE,
        loli_GL_var_GL_SPHERE_MAP,
        loli_GL_var_GL_DECAL,
        loli_GL_var_GL_MODULATE,
        loli_GL_var_GL_NEAREST,
        loli_GL_var_GL_REPEAT,
        loli_GL_var_GL_CLAMP,
        loli_GL_var_GL_S,
        loli_GL_var_GL_T,
        loli_GL_var_GL_R,
        loli_GL_var_GL_Q,
        loli_GL_var_GL_VENDOR,
        loli_GL_var_GL_RENDERER,
        loli_GL_var_GL_VERSION,
        loli_GL_var_GL_EXTENSIONS,
        loli_GL_var_GL_NO_ERROR,
        loli_GL_var_GL_INVALID_ENUM,
        loli_GL_var_GL_INVALID_VALUE,
        loli_GL_var_GL_INVALID_OPERATION,
        loli_GL_var_GL_STACK_OVERFLOW,
        loli_GL_var_GL_STACK_UNDERFLOW,
        loli_GL_var_GL_OUT_OF_MEMORY,
        loli_GL_var_GL_CURRENT_BIT,
        loli_GL_var_GL_POINT_BIT,
        loli_GL_var_GL_LINE_BIT,
        loli_GL_var_GL_POLYGON_BIT,
        loli_GL_var_GL_POLYGON_STIPPLE_BIT,
        loli_GL_var_GL_PIXEL_MODE_BIT,
        loli_GL_var_GL_LIGHTING_BIT,
        loli_GL_var_GL_FOG_BIT,
        loli_GL_var_GL_DEPTH_BUFFER_BIT,
        loli_GL_var_GL_ACCUM_BUFFER_BIT,
        loli_GL_var_GL_STENCIL_BUFFER_BIT,
        loli_GL_var_GL_VIEWPORT_BIT,
        loli_GL_var_GL_TRANSFORM_BIT,
        loli_GL_var_GL_ENABLE_BIT,
        loli_GL_var_GL_COLOR_BUFFER_BIT,
        loli_GL_var_GL_HINT_BIT,
        loli_GL_var_GL_EVAL_BIT,
        loli_GL_var_GL_LIST_BIT,
        loli_GL_var_GL_TEXTURE_BIT,
        loli_GL_var_GL_SCISSOR_BIT,
        loli_GL_var_GL_ALL_ATTRIB_BITS,
        loli_GL_var_GL_PROXY_TEXTURE_1D,
        loli_GL_var_GL_PROXY_TEXTURE_2D,
        loli_GL_var_GL_TEXTURE_PRIORITY,
        loli_GL_var_GL_TEXTURE_RESIDENT,
        loli_GL_var_GL_TEXTURE_BINDING_1D,
        loli_GL_var_GL_TEXTURE_BINDING_2D,
        loli_GL_var_GL_TEXTURE_INTERNAL_FORMAT,
        loli_GL_var_GL_ALPHA4,
        loli_GL_var_GL_ALPHA8,
        loli_GL_var_GL_ALPHA12,
        loli_GL_var_GL_ALPHA16,
        loli_GL_var_GL_LUMINANCE4,
        loli_GL_var_GL_LUMINANCE8,
        loli_GL_var_GL_LUMINANCE12,
        loli_GL_var_GL_LUMINANCE16,
        loli_GL_var_GL_LUMINANCE4_ALPHA4,
        loli_GL_var_GL_LUMINANCE6_ALPHA2,
        loli_GL_var_GL_LUMINANCE8_ALPHA8,
        loli_GL_var_GL_LUMINANCE12_ALPHA4,
        loli_GL_var_GL_LUMINANCE12_ALPHA12,
        loli_GL_var_GL_LUMINANCE16_ALPHA16,
        loli_GL_var_GL_INTENSITY,
        loli_GL_var_GL_INTENSITY4,
        loli_GL_var_GL_INTENSITY8,
        loli_GL_var_GL_INTENSITY12,
        loli_GL_var_GL_INTENSITY16,
        loli_GL_var_GL_R3_G3_B2,
        loli_GL_var_GL_RGB4,
        loli_GL_var_GL_RGB5,
        loli_GL_var_GL_RGB8,
        loli_GL_var_GL_RGB10,
        loli_GL_var_GL_RGB12,
        loli_GL_var_GL_RGB16,
        loli_GL_var_GL_RGBA2,
        loli_GL_var_GL_RGBA4,
        loli_GL_var_GL_RGB5_A1,
        loli_GL_var_GL_RGBA8,
        loli_GL_var_GL_RGB10_A2,
        loli_GL_var_GL_RGBA12,
        loli_GL_var_GL_RGBA16,
        loli_GL_var_GL_CLIENT_PIXEL_STORE_BIT,
        loli_GL_var_GL_CLIENT_VERTEX_ARRAY_BIT,
        loli_GL_var_GL_ALL_CLIENT_ATTRIB_BITS,
        loli_GL_var_GL_CLIENT_ALL_ATTRIB_BITS,
        loli_GL_var_GL_RESCALE_NORMAL,
        loli_GL_var_GL_CLAMP_TO_EDGE,
        loli_GL_var_GL_MAX_ELEMENTS_VERTICES,
        loli_GL_var_GL_MAX_ELEMENTS_INDICES,
        loli_GL_var_GL_BGR,
        loli_GL_var_GL_BGRA,
        loli_GL_var_GL_UNSIGNED_BYTE_3_3_2,
        loli_GL_var_GL_UNSIGNED_BYTE_2_3_3_REV,
        loli_GL_var_GL_UNSIGNED_SHORT_5_6_5,
        loli_GL_var_GL_UNSIGNED_SHORT_5_6_5_REV,
        loli_GL_var_GL_UNSIGNED_SHORT_4_4_4_4,
        loli_GL_var_GL_UNSIGNED_SHORT_4_4_4_4_REV,
        loli_GL_var_GL_UNSIGNED_SHORT_5_5_5_1,
        loli_GL_var_GL_UNSIGNED_SHORT_1_5_5_5_REV,
        loli_GL_var_GL_UNSIGNED_INT_8_8_8_8,
        loli_GL_var_GL_UNSIGNED_INT_8_8_8_8_REV,
        loli_GL_var_GL_UNSIGNED_INT_10_10_10_2,
        loli_GL_var_GL_UNSIGNED_INT_2_10_10_10_REV,
        loli_GL_var_GL_LIGHT_MODEL_COLOR_CONTROL,
        loli_GL_var_GL_SINGLE_COLOR,
        loli_GL_var_GL_SEPARATE_SPECULAR_COLOR,
        loli_GL_var_GL_TEXTURE_MIN_LOD,
        loli_GL_var_GL_TEXTURE_MAX_LOD,
        loli_GL_var_GL_TEXTURE_BASE_LEVEL,
        loli_GL_var_GL_TEXTURE_MAX_LEVEL,
        loli_GL_var_GL_SMOOTH_POINT_SIZE_RANGE,
        loli_GL_var_GL_SMOOTH_POINT_SIZE_GRANULARITY,
        loli_GL_var_GL_SMOOTH_LINE_WIDTH_RANGE,
        loli_GL_var_GL_SMOOTH_LINE_WIDTH_GRANULARITY,
        loli_GL_var_GL_ALIASED_POINT_SIZE_RANGE,
        loli_GL_var_GL_ALIASED_LINE_WIDTH_RANGE,
        loli_GL_var_GL_PACK_SKIP_IMAGES,
        loli_GL_var_GL_PACK_IMAGE_HEIGHT,
        loli_GL_var_GL_UNPACK_SKIP_IMAGES,
        loli_GL_var_GL_UNPACK_IMAGE_HEIGHT,
        loli_GL_var_GL_TEXTURE_3D,
        loli_GL_var_GL_PROXY_TEXTURE_3D,
        loli_GL_var_GL_TEXTURE_DEPTH,
        loli_GL_var_GL_TEXTURE_WRAP_R,
        loli_GL_var_GL_MAX_3D_TEXTURE_SIZE,
        loli_GL_var_GL_TEXTURE_BINDING_3D,
        loli_GL_var_GL_CONSTANT_COLOR,
        loli_GL_var_GL_ONE_MINUS_CONSTANT_COLOR,
        loli_GL_var_GL_CONSTANT_ALPHA,
        loli_GL_var_GL_ONE_MINUS_CONSTANT_ALPHA,
        loli_GL_var_GL_COLOR_TABLE,
        loli_GL_var_GL_POST_CONVOLUTION_COLOR_TABLE,
        loli_GL_var_GL_POST_COLOR_MATRIX_COLOR_TABLE,
        loli_GL_var_GL_PROXY_COLOR_TABLE,
        loli_GL_var_GL_PROXY_POST_CONVOLUTION_COLOR_TABLE,
        loli_GL_var_GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE,
        loli_GL_var_GL_COLOR_TABLE_SCALE,
        loli_GL_var_GL_COLOR_TABLE_BIAS,
        loli_GL_var_GL_COLOR_TABLE_FORMAT,
        loli_GL_var_GL_COLOR_TABLE_WIDTH,
        loli_GL_var_GL_COLOR_TABLE_RED_SIZE,
        loli_GL_var_GL_COLOR_TABLE_GREEN_SIZE,
        loli_GL_var_GL_COLOR_TABLE_BLUE_SIZE,
        loli_GL_var_GL_COLOR_TABLE_ALPHA_SIZE,
        loli_GL_var_GL_COLOR_TABLE_LUMINANCE_SIZE,
        loli_GL_var_GL_COLOR_TABLE_INTENSITY_SIZE,
        loli_GL_var_GL_CONVOLUTION_1D,
        loli_GL_var_GL_CONVOLUTION_2D,
        loli_GL_var_GL_SEPARABLE_2D,
        loli_GL_var_GL_CONVOLUTION_BORDER_MODE,
        loli_GL_var_GL_CONVOLUTION_FILTER_SCALE,
        loli_GL_var_GL_CONVOLUTION_FILTER_BIAS,
        loli_GL_var_GL_REDUCE,
        loli_GL_var_GL_CONVOLUTION_FORMAT,
        loli_GL_var_GL_CONVOLUTION_WIDTH,
        loli_GL_var_GL_CONVOLUTION_HEIGHT,
        loli_GL_var_GL_MAX_CONVOLUTION_WIDTH,
        loli_GL_var_GL_MAX_CONVOLUTION_HEIGHT,
        loli_GL_var_GL_POST_CONVOLUTION_RED_SCALE,
        loli_GL_var_GL_POST_CONVOLUTION_GREEN_SCALE,
        loli_GL_var_GL_POST_CONVOLUTION_BLUE_SCALE,
        loli_GL_var_GL_POST_CONVOLUTION_ALPHA_SCALE,
        loli_GL_var_GL_POST_CONVOLUTION_RED_BIAS,
        loli_GL_var_GL_POST_CONVOLUTION_GREEN_BIAS,
        loli_GL_var_GL_POST_CONVOLUTION_BLUE_BIAS,
        loli_GL_var_GL_POST_CONVOLUTION_ALPHA_BIAS,
        loli_GL_var_GL_CONSTANT_BORDER,
        loli_GL_var_GL_REPLICATE_BORDER,
        loli_GL_var_GL_CONVOLUTION_BORDER_COLOR,
        loli_GL_var_GL_COLOR_MATRIX,
        loli_GL_var_GL_COLOR_MATRIX_STACK_DEPTH,
        loli_GL_var_GL_MAX_COLOR_MATRIX_STACK_DEPTH,
        loli_GL_var_GL_POST_COLOR_MATRIX_RED_SCALE,
        loli_GL_var_GL_POST_COLOR_MATRIX_GREEN_SCALE,
        loli_GL_var_GL_POST_COLOR_MATRIX_BLUE_SCALE,
        loli_GL_var_GL_POST_COLOR_MATRIX_ALPHA_SCALE,
        loli_GL_var_GL_POST_COLOR_MATRIX_RED_BIAS,
        loli_GL_var_GL_POST_COLOR_MATRIX_GREEN_BIAS,
        loli_GL_var_GL_POST_COLOR_MATRIX_BLUE_BIAS,
        loli_GL_var_GL_POST_COLOR_MATRIX_ALPHA_BIAS,
        loli_GL_var_GL_HISTOGRAM,
        loli_GL_var_GL_PROXY_HISTOGRAM,
        loli_GL_var_GL_HISTOGRAM_WIDTH,
        loli_GL_var_GL_HISTOGRAM_FORMAT,
        loli_GL_var_GL_HISTOGRAM_RED_SIZE,
        loli_GL_var_GL_HISTOGRAM_GREEN_SIZE,
        loli_GL_var_GL_HISTOGRAM_BLUE_SIZE,
        loli_GL_var_GL_HISTOGRAM_ALPHA_SIZE,
        loli_GL_var_GL_HISTOGRAM_LUMINANCE_SIZE,
        loli_GL_var_GL_HISTOGRAM_SINK,
        loli_GL_var_GL_MINMAX,
        loli_GL_var_GL_MINMAX_FORMAT,
        loli_GL_var_GL_MINMAX_SINK,
        loli_GL_var_GL_TABLE_TOO_LARGE,
        loli_GL_var_GL_BLEND_EQUATION,
        loli_GL_var_GL_MIN,
        loli_GL_var_GL_MAX,
        loli_GL_var_GL_FUNC_ADD,
        loli_GL_var_GL_FUNC_SUBTRACT,
        loli_GL_var_GL_FUNC_REVERSE_SUBTRACT,
        loli_GL_var_GL_BLEND_COLOR,
        loli_GL_var_GL_TEXTURE0,
        loli_GL_var_GL_TEXTURE1,
        loli_GL_var_GL_TEXTURE2,
        loli_GL_var_GL_TEXTURE3,
        loli_GL_var_GL_TEXTURE4,
        loli_GL_var_GL_TEXTURE5,
        loli_GL_var_GL_TEXTURE6,
        loli_GL_var_GL_TEXTURE7,
        loli_GL_var_GL_TEXTURE8,
        loli_GL_var_GL_TEXTURE9,
        loli_GL_var_GL_TEXTURE10,
        loli_GL_var_GL_TEXTURE11,
        loli_GL_var_GL_TEXTURE12,
        loli_GL_var_GL_TEXTURE13,
        loli_GL_var_GL_TEXTURE14,
        loli_GL_var_GL_TEXTURE15,
        loli_GL_var_GL_TEXTURE16,
        loli_GL_var_GL_TEXTURE17,
        loli_GL_var_GL_TEXTURE18,
        loli_GL_var_GL_TEXTURE19,
        loli_GL_var_GL_TEXTURE20,
        loli_GL_var_GL_TEXTURE21,
        loli_GL_var_GL_TEXTURE22,
        loli_GL_var_GL_TEXTURE23,
        loli_GL_var_GL_TEXTURE24,
        loli_GL_var_GL_TEXTURE25,
        loli_GL_var_GL_TEXTURE26,
        loli_GL_var_GL_TEXTURE27,
        loli_GL_var_GL_TEXTURE28,
        loli_GL_var_GL_TEXTURE29,
        loli_GL_var_GL_TEXTURE30,
        loli_GL_var_GL_TEXTURE31,
        loli_GL_var_GL_ACTIVE_TEXTURE,
        loli_GL_var_GL_CLIENT_ACTIVE_TEXTURE,
        loli_GL_var_GL_MAX_TEXTURE_UNITS,
        loli_GL_var_GL_NORMAL_MAP,
        loli_GL_var_GL_REFLECTION_MAP,
        loli_GL_var_GL_TEXTURE_CUBE_MAP,
        loli_GL_var_GL_TEXTURE_BINDING_CUBE_MAP,
        loli_GL_var_GL_TEXTURE_CUBE_MAP_POSITIVE_X,
        loli_GL_var_GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
        loli_GL_var_GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
        loli_GL_var_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
        loli_GL_var_GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
        loli_GL_var_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
        loli_GL_var_GL_PROXY_TEXTURE_CUBE_MAP,
        loli_GL_var_GL_MAX_CUBE_MAP_TEXTURE_SIZE,
        loli_GL_var_GL_COMPRESSED_ALPHA,
        loli_GL_var_GL_COMPRESSED_LUMINANCE,
        loli_GL_var_GL_COMPRESSED_LUMINANCE_ALPHA,
        loli_GL_var_GL_COMPRESSED_INTENSITY,
        loli_GL_var_GL_COMPRESSED_RGB,
        loli_GL_var_GL_COMPRESSED_RGBA,
        loli_GL_var_GL_TEXTURE_COMPRESSION_HINT,
        loli_GL_var_GL_TEXTURE_COMPRESSED_IMAGE_SIZE,
        loli_GL_var_GL_TEXTURE_COMPRESSED,
        loli_GL_var_GL_NUM_COMPRESSED_TEXTURE_FORMATS,
        loli_GL_var_GL_COMPRESSED_TEXTURE_FORMATS,
        loli_GL_var_GL_MULTISAMPLE,
        loli_GL_var_GL_SAMPLE_ALPHA_TO_COVERAGE,
        loli_GL_var_GL_SAMPLE_ALPHA_TO_ONE,
        loli_GL_var_GL_SAMPLE_COVERAGE,
        loli_GL_var_GL_SAMPLE_BUFFERS,
        loli_GL_var_GL_SAMPLES,
        loli_GL_var_GL_SAMPLE_COVERAGE_VALUE,
        loli_GL_var_GL_SAMPLE_COVERAGE_INVERT,
        loli_GL_var_GL_MULTISAMPLE_BIT,
        loli_GL_var_GL_TRANSPOSE_MODELVIEW_MATRIX,
        loli_GL_var_GL_TRANSPOSE_PROJECTION_MATRIX,
        loli_GL_var_GL_TRANSPOSE_TEXTURE_MATRIX,
        loli_GL_var_GL_TRANSPOSE_COLOR_MATRIX,
        loli_GL_var_GL_COMBINE,
        loli_GL_var_GL_COMBINE_RGB,
        loli_GL_var_GL_COMBINE_ALPHA,
        loli_GL_var_GL_SOURCE0_RGB,
        loli_GL_var_GL_SOURCE1_RGB,
        loli_GL_var_GL_SOURCE2_RGB,
        loli_GL_var_GL_SOURCE0_ALPHA,
        loli_GL_var_GL_SOURCE1_ALPHA,
        loli_GL_var_GL_SOURCE2_ALPHA,
        loli_GL_var_GL_OPERAND0_RGB,
        loli_GL_var_GL_OPERAND1_RGB,
        loli_GL_var_GL_OPERAND2_RGB,
        loli_GL_var_GL_OPERAND0_ALPHA,
        loli_GL_var_GL_OPERAND1_ALPHA,
        loli_GL_var_GL_OPERAND2_ALPHA,
        loli_GL_var_GL_RGB_SCALE,
        loli_GL_var_GL_ADD_SIGNED,
        loli_GL_var_GL_INTERPOLATE,
        loli_GL_var_GL_SUBTRACT,
        loli_GL_var_GL_CONSTANT,
        loli_GL_var_GL_PRIMARY_COLOR,
        loli_GL_var_GL_PREVIOUS,
        loli_GL_var_GL_DOT3_RGB,
        loli_GL_var_GL_DOT3_RGBA,
        loli_GL_var_GL_CLAMP_TO_BORDER,
        loli_GL_var_GL_TEXTURE0_ARB,
        loli_GL_var_GL_TEXTURE1_ARB,
        loli_GL_var_GL_TEXTURE2_ARB,
        loli_GL_var_GL_TEXTURE3_ARB,
        loli_GL_var_GL_TEXTURE4_ARB,
        loli_GL_var_GL_TEXTURE5_ARB,
        loli_GL_var_GL_TEXTURE6_ARB,
        loli_GL_var_GL_TEXTURE7_ARB,
        loli_GL_var_GL_TEXTURE8_ARB,
        loli_GL_var_GL_TEXTURE9_ARB,
        loli_GL_var_GL_TEXTURE10_ARB,
        loli_GL_var_GL_TEXTURE11_ARB,
        loli_GL_var_GL_TEXTURE12_ARB,
        loli_GL_var_GL_TEXTURE13_ARB,
        loli_GL_var_GL_TEXTURE14_ARB,
        loli_GL_var_GL_TEXTURE15_ARB,
        loli_GL_var_GL_TEXTURE16_ARB,
        loli_GL_var_GL_TEXTURE17_ARB,
        loli_GL_var_GL_TEXTURE18_ARB,
        loli_GL_var_GL_TEXTURE19_ARB,
        loli_GL_var_GL_TEXTURE20_ARB,
        loli_GL_var_GL_TEXTURE21_ARB,
        loli_GL_var_GL_TEXTURE22_ARB,
        loli_GL_var_GL_TEXTURE23_ARB,
        loli_GL_var_GL_TEXTURE24_ARB,
        loli_GL_var_GL_TEXTURE25_ARB,
        loli_GL_var_GL_TEXTURE26_ARB,
        loli_GL_var_GL_TEXTURE27_ARB,
        loli_GL_var_GL_TEXTURE28_ARB,
        loli_GL_var_GL_TEXTURE29_ARB,
        loli_GL_var_GL_TEXTURE30_ARB,
        loli_GL_var_GL_TEXTURE31_ARB,
        loli_GL_var_GL_ACTIVE_TEXTURE_ARB,
        loli_GL_var_GL_CLIENT_ACTIVE_TEXTURE_ARB,
        loli_GL_var_GL_MAX_TEXTURE_UNITS_ARB,
        loli_GL_var_GL_DEPTH_STENCIL_MESA,
        loli_GL_var_GL_UNSIGNED_INT_24_8_MESA,
        loli_GL_var_GL_UNSIGNED_INT_8_24_REV_MESA,
        loli_GL_var_GL_UNSIGNED_SHORT_15_1_MESA,
        loli_GL_var_GL_UNSIGNED_SHORT_1_15_REV_MESA,
        loli_GL_var_GL_ALPHA_BLEND_EQUATION_ATI,
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
        ,"F\0glutReshapeWindow\0(Integer, Integer)"
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

        ,"F\0glutEstablishOverlay"
        ,"F\0glutRemoveOverlay"
        ,"F\0glutUseLayer\0(Integer)"
        ,"F\0glutPostOverlayRedisplay"
        ,"F\0glutPostWindowOverlayRedisplay\0(Integer)"
        ,"F\0glutShowOverlay"
        ,"F\0glutHideOverlay"

        ,"F\0glutCreateMenu\0(Function(Integer)): Integer"
        ,"F\0glutDestroyMenu\0(Integer)"
        ,"F\0glutGetMenu\0(): Integer"
        ,"F\0glutSetMenu\0(Integer)"
        ,"F\0glutAddMenuEntry\0(String, Integer)"
        ,"F\0glutAddSubMenu\0(String, Integer)"
        ,"F\0glutChangeToMenuEntry\0(Integer, String, Integer)"
        ,"F\0glutChangeToSubMenu\0(Integer, String, Integer)"
        ,"F\0glutRemoveMenuItem\0(Integer)"
        ,"F\0glutAttachMenu\0(Integer)"
        ,"F\0glutDetachMenu\0(Integer)"

        ,"F\0glutMainLoop"

        ,"F\0glutDisplayFunc\0(Function())"
        ,"F\0glutKeyboardFunc\0(Function(Byte, Integer, Integer))"
        ,"F\0glutSpecialFunc\0(Function(Integer, Integer, Integer))"
        ,"F\0glutReshapeFunc\0(Function(Integer, Integer))"
        ,"F\0glutVisibilityFunc\0(Function(Integer))"
        ,"F\0glutMouseFunc\0(Function(Integer, Integer, Integer, Integer))"
        ,"F\0glutMotionFunc\0(Function(Integer, Integer))"
        ,"F\0glutPassiveMotionFunc\0(Function(Integer, Integer))"
        ,"F\0glutEntryFunc\0(Function(Integer))"

        // TODO: delete it
        ,"F\0example"

        ,"F\0glClearIndex\0(Integer)"
        ,"F\0glClearColor\0(Integer, Integer, Integer, Integer)"
        ,"F\0glClear\0(Integer)"
        ,"F\0glIndexMask\0(Integer)"
        ,"F\0glColorMask\0(Integer, Integer, Integer, Integer)"
        ,"F\0glAlphaFunc\0(Integer, Integer)"
        ,"F\0glBlendFunc\0(Integer, Integer)"
        ,"F\0glLogicOp\0(Integer)"
        ,"F\0glCullFace\0(Integer)"
        ,"F\0glFrontFace\0(Integer)"
        ,"F\0glPointSize\0(Integer)"
        ,"F\0glLineWidth\0(Integer)"
        ,"F\0glLineStipple\0(Integer, Integer)"
        ,"F\0glPolygonMode\0(Integer, Integer)"
        ,"F\0glPolygonOffset\0(Integer, Integer)"
        ,"F\0glPolygonStipple\0(Integer)"
        ,"F\0glGetPolygonStipple\0(Integer)"
        ,"F\0glEdgeFlag\0(Integer)"

        ,"F\0glEnd"
        ,"F\0glFlush"


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
        ,"R\0GLUT_VISIBLE\0Integer"
        ,"R\0GLUT_HIDDEN\0Integer"
        ,"R\0GLUT_FULLY_RETAINED\0Integer"
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
        ,"R\0GLUT_KEY_LEFT\0Integer"
        ,"R\0GLUT_KEY_UP\0Integer"
        ,"R\0GLUT_KEY_RIGHT\0Integer"
        ,"R\0GLUT_KEY_DOWN\0Integer"
        ,"R\0GLUT_KEY_PAGE_UP\0Integer"
        ,"R\0GLUT_KEY_PAGE_DOWN\0Integer"
        ,"R\0GLUT_KEY_HOME\0Integer"
        ,"R\0GLUT_KEY_END\0Integer"
        ,"R\0GLUT_KEY_INSERT\0Integer"

        ,"R\0GLUT_LEFT_BUTTON\0Integer"
        ,"R\0GLUT_MIDDLE_BUTTON\0Integer"
        ,"R\0GLUT_DOWN\0Integer"
        ,"R\0GLUT_UP\0Integer"
        ,"R\0GLUT_ENTERED\0Integer"
        ,"R\0GLUT_WINDOW_X\0Integer"
        ,"R\0GLUT_WINDOW_Y\0Integer"
        ,"R\0GLUT_WINDOW_WIDTH\0Integer"
        ,"R\0GLUT_WINDOW_HEIGHT\0Integer"
        ,"R\0GLUT_WINDOW_BUFFER_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_STENCIL_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_DEPTH_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_RED_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_GREEN_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_BLUE_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_ALPHA_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_ACCUM_RED_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_ACCUM_GREEN_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_ACCUM_BLUE_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_ACCUM_ALPHA_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_DOUBLEBUFFER\0Integer"
        ,"R\0GLUT_WINDOW_RGBA\0Integer"
        ,"R\0GLUT_WINDOW_PARENT\0Integer"
        ,"R\0GLUT_WINDOW_NUM_CHILDREN\0Integer"
        ,"R\0GLUT_WINDOW_COLORMAP_SIZE\0Integer"
        ,"R\0GLUT_WINDOW_NUM_SAMPLES\0Integer"
        ,"R\0GLUT_WINDOW_STEREO\0Integer"
        ,"R\0GLUT_WINDOW_CURSOR\0Integer"
        ,"R\0GLUT_SCREEN_WIDTH\0Integer"
        ,"R\0GLUT_SCREEN_HEIGHT\0Integer"
        ,"R\0GLUT_SCREEN_WIDTH_MM\0Integer"
        ,"R\0GLUT_SCREEN_HEIGHT_MM\0Integer"
        ,"R\0GLUT_MENU_NUM_ITEMS\0Integer"
        ,"R\0GLUT_DISPLAY_MODE_POSSIBLE\0Integer"
        ,"R\0GLUT_INIT_WINDOW_X\0Integer"
        ,"R\0GLUT_INIT_WINDOW_Y\0Integer"
        ,"R\0GLUT_INIT_WINDOW_WIDTH\0Integer"
        ,"R\0GLUT_INIT_WINDOW_HEIGHT\0Integer"
        ,"R\0GLUT_INIT_DISPLAY_MODE\0Integer"
        ,"R\0GLUT_ELAPSED_TIME\0Integer"
        ,"R\0GLUT_WINDOW_FORMAT_ID\0Integer"
        ,"R\0GLUT_HAS_KEYBOARD\0Integer"
        ,"R\0GLUT_HAS_MOUSE\0Integer"
        ,"R\0GLUT_HAS_SPACEBALL\0Integer"
        ,"R\0GLUT_HAS_DIAL_AND_BUTTON_BOX\0Integer"
        ,"R\0GLUT_HAS_TABLET\0Integer"
        ,"R\0GLUT_NUM_MOUSE_BUTTONS\0Integer"
        ,"R\0GLUT_NUM_SPACEBALL_BUTTONS\0Integer"
        ,"R\0GLUT_NUM_BUTTON_BOX_BUTTONS\0Integer"
        ,"R\0GLUT_NUM_DIALS\0Integer"
        ,"R\0GLUT_NUM_TABLET_BUTTONS\0Integer"
        ,"R\0GLUT_DEVICE_IGNORE_KEY_REPEAT\0Integer"
        ,"R\0GLUT_DEVICE_KEY_REPEAT\0Integer"
        ,"R\0GLUT_HAS_JOYSTICK\0Integer"
        ,"R\0GLUT_OWNS_JOYSTICK\0Integer"
        ,"R\0GLUT_JOYSTICK_BUTTONS\0Integer"
        ,"R\0GLUT_JOYSTICK_AXES\0Integer"
        ,"R\0GLUT_JOYSTICK_POLL_RATE\0Integer"
        ,"R\0GLUT_OVERLAY_POSSIBLE\0Integer"
        ,"R\0GLUT_LAYER_IN_USE\0Integer"
        ,"R\0GLUT_HAS_OVERLAY\0Integer"
        ,"R\0GLUT_TRANSPARENT_INDEX\0Integer"
        ,"R\0GLUT_NORMAL_DAMAGED\0Integer"
        ,"R\0GLUT_OVERLAY_DAMAGED\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_POSSIBLE\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_IN_USE\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_X_DELTA\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_Y_DELTA\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_WIDTH_DELTA\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_HEIGHT_DELTA\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_X\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_Y\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_WIDTH\0Integer"
        ,"R\0GLUT_VIDEO_RESIZE_HEIGHT\0Integer"
        ,"R\0GLUT_NORMAL\0Integer"
        ,"R\0GLUT_OVERLAY\0Integer"
        ,"R\0GLUT_ACTIVE_SHIFT\0Integer"
        ,"R\0GLUT_ACTIVE_CTRL\0Integer"
        ,"R\0GLUT_ACTIVE_ALT\0Integer"
        ,"R\0GLUT_CURSOR_RIGHT_ARROW\0Integer"
        ,"R\0GLUT_CURSOR_LEFT_ARROW\0Integer"
        ,"R\0GLUT_CURSOR_INFO\0Integer"
        ,"R\0GLUT_CURSOR_DESTROY\0Integer"
        ,"R\0GLUT_CURSOR_HELP\0Integer"
        ,"R\0GLUT_CURSOR_CYCLE\0Integer"
        ,"R\0GLUT_CURSOR_SPRAY\0Integer"
        ,"R\0GLUT_CURSOR_WAIT\0Integer"
        ,"R\0GLUT_CURSOR_TEXT\0Integer"
        ,"R\0GLUT_CURSOR_CROSSHAIR\0Integer"
        ,"R\0GLUT_CURSOR_UP_DOWN\0Integer"
        ,"R\0GLUT_CURSOR_LEFT_RIGHT\0Integer"
        ,"R\0GLUT_CURSOR_TOP_SIDE\0Integer"
        ,"R\0GLUT_CURSOR_BOTTOM_SIDE\0Integer"
        ,"R\0GLUT_CURSOR_LEFT_SIDE\0Integer"
        ,"R\0GLUT_CURSOR_RIGHT_SIDE\0Integer"
        ,"R\0GLUT_CURSOR_TOP_LEFT_CORNER\0Integer"
        ,"R\0GLUT_CURSOR_TOP_RIGHT_CORNER\0Integer"
        ,"R\0GLUT_CURSOR_BOTTOM_RIGHT_CORNER\0Integer"
        ,"R\0GLUT_CURSOR_BOTTOM_LEFT_CORNER\0Integer"
        ,"R\0GLUT_CURSOR_INHERIT\0Integer"
        ,"R\0GLUT_CURSOR_NONE\0Integer"
        ,"R\0GLUT_CURSOR_FULL_CROSSHAIR\0Integer"
        ,"R\0GLUT_RED\0Integer"
        ,"R\0GLUT_GREEN\0Integer"
        ,"R\0GLUT_BLUE\0Integer"
        ,"R\0GLUT_KEY_REPEAT_OFF\0Integer"
        ,"R\0GLUT_KEY_REPEAT_ON\0Integer"
        ,"R\0GLUT_KEY_REPEAT_DEFAULT\0Integer"
        ,"R\0GLUT_JOYSTICK_BUTTON_A\0Integer"
        ,"R\0GLUT_JOYSTICK_BUTTON_B\0Integer"
        ,"R\0GLUT_JOYSTICK_BUTTON_C\0Integer"
        ,"R\0GLUT_JOYSTICK_BUTTON_D\0Integer"
        ,"R\0GLUT_GAME_MODE_ACTIVE\0Integer"
        ,"R\0GLUT_GAME_MODE_POSSIBLE\0Integer"
        ,"R\0GLUT_GAME_MODE_WIDTH\0Integer"
        ,"R\0GLUT_GAME_MODE_HEIGHT\0Integer"
        ,"R\0GLUT_GAME_MODE_PIXEL_DEPTH\0Integer"
        ,"R\0GLUT_GAME_MODE_REFRESH_RATE\0Integer"
        ,"R\0GLUT_GAME_MODE_DISPLAY_CHANGED\0Integer"

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

        ,"R\0GL_LIGHTING\0Integer"
        ,"R\0GL_LIGHT0\0Integer"
        ,"R\0GL_LIGHT1\0Integer"
        ,"R\0GL_LIGHT2\0Integer"
        ,"R\0GL_LIGHT3\0Integer"
        ,"R\0GL_LIGHT4\0Integer"
        ,"R\0GL_LIGHT5\0Integer"
        ,"R\0GL_LIGHT6\0Integer"
        ,"R\0GL_LIGHT7\0Integer"
        ,"R\0GL_SPOT_EXPONENT\0Integer"
        ,"R\0GL_SPOT_CUTOFF\0Integer"
        ,"R\0GL_CONSTANT_ATTENUATION\0Integer"
        ,"R\0GL_LINEAR_ATTENUATION\0Integer"
        ,"R\0GL_QUADRATIC_ATTENUATION\0Integer"
        ,"R\0GL_AMBIENT\0Integer"
        ,"R\0GL_DIFFUSE\0Integer"
        ,"R\0GL_SPECULAR\0Integer"
        ,"R\0GL_SHININESS\0Integer"
        ,"R\0GL_EMISSION\0Integer"
        ,"R\0GL_POSITION\0Integer"
        ,"R\0GL_SPOT_DIRECTION\0Integer"
        ,"R\0GL_AMBIENT_AND_DIFFUSE\0Integer"
        ,"R\0GL_COLOR_INDEXES\0Integer"
        ,"R\0GL_LIGHT_MODEL_TWO_SIDE\0Integer"
        ,"R\0GL_LIGHT_MODEL_LOCAL_VIEWER\0Integer"
        ,"R\0GL_LIGHT_MODEL_AMBIENT\0Integer"
        ,"R\0GL_FRONT_AND_BACK\0Integer"
        ,"R\0GL_SHADE_MODEL\0Integer"
        ,"R\0GL_FLAT\0Integer"
        ,"R\0GL_SMOOTH\0Integer"
        ,"R\0GL_COLOR_MATERIAL\0Integer"
        ,"R\0GL_COLOR_MATERIAL_FACE\0Integer"
        ,"R\0GL_COLOR_MATERIAL_PARAMETER\0Integer"
        ,"R\0GL_NORMALIZE\0Integer"

        ,"R\0GL_CLIP_PLANE0\0Integer"
        ,"R\0GL_CLIP_PLANE1\0Integer"
        ,"R\0GL_CLIP_PLANE2\0Integer"
        ,"R\0GL_CLIP_PLANE3\0Integer"
        ,"R\0GL_CLIP_PLANE4\0Integer"
        ,"R\0GL_CLIP_PLANE5\0Integer"
        ,"R\0GL_ACCUM_RED_BITS\0Integer"
        ,"R\0GL_ACCUM_GREEN_BITS\0Integer"
        ,"R\0GL_ACCUM_BLUE_BITS\0Integer"
        ,"R\0GL_ACCUM_ALPHA_BITS\0Integer"
        ,"R\0GL_ACCUM_CLEAR_VALUE\0Integer"
        ,"R\0GL_ACCUM\0Integer"
        ,"R\0GL_ADD\0Integer"
        ,"R\0GL_LOAD\0Integer"
        ,"R\0GL_MULT\0Integer"
        ,"R\0GL_RETURN\0Integer"
        ,"R\0GL_ALPHA_TEST\0Integer"
        ,"R\0GL_ALPHA_TEST_REF\0Integer"
        ,"R\0GL_ALPHA_TEST_FUNC\0Integer"
        ,"R\0GL_BLEND\0Integer"
        ,"R\0GL_BLEND_SRC\0Integer"
        ,"R\0GL_BLEND_DST\0Integer"
        ,"R\0GL_ZERO\0Integer"
        ,"R\0GL_ONE\0Integer"
        ,"R\0GL_SRC_COLOR\0Integer"
        ,"R\0GL_ONE_MINUS_SRC_COLOR\0Integer"
        ,"R\0GL_SRC_ALPHA\0Integer"
        ,"R\0GL_ONE_MINUS_SRC_ALPHA\0Integer"
        ,"R\0GL_DST_ALPHA\0Integer"
        ,"R\0GL_ONE_MINUS_DST_ALPHA\0Integer"
        ,"R\0GL_DST_COLOR\0Integer"
        ,"R\0GL_ONE_MINUS_DST_COLOR\0Integer"
        ,"R\0GL_SRC_ALPHA_SATURATE\0Integer"
        ,"R\0GL_FEEDBACK\0Integer"
        ,"R\0GL_RENDER\0Integer"
        ,"R\0GL_SELECT\0Integer"
        ,"R\0GL_2D\0Integer"
        ,"R\0GL_3D\0Integer"
        ,"R\0GL_3D_COLOR\0Integer"
        ,"R\0GL_3D_COLOR_TEXTURE\0Integer"
        ,"R\0GL_4D_COLOR_TEXTURE\0Integer"
        ,"R\0GL_POINT_TOKEN\0Integer"
        ,"R\0GL_LINE_TOKEN\0Integer"
        ,"R\0GL_LINE_RESET_TOKEN\0Integer"
        ,"R\0GL_POLYGON_TOKEN\0Integer"
        ,"R\0GL_BITMAP_TOKEN\0Integer"
        ,"R\0GL_DRAW_PIXEL_TOKEN\0Integer"
        ,"R\0GL_COPY_PIXEL_TOKEN\0Integer"
        ,"R\0GL_PASS_THROUGH_TOKEN\0Integer"
        ,"R\0GL_FEEDBACK_BUFFER_POINTER\0Integer"
        ,"R\0GL_FEEDBACK_BUFFER_SIZE\0Integer"
        ,"R\0GL_FEEDBACK_BUFFER_TYPE\0Integer"
        ,"R\0GL_SELECTION_BUFFER_POINTER\0Integer"
        ,"R\0GL_SELECTION_BUFFER_SIZE\0Integer"
        ,"R\0GL_FOG\0Integer"
        ,"R\0GL_FOG_MODE\0Integer"
        ,"R\0GL_FOG_DENSITY\0Integer"
        ,"R\0GL_FOG_COLOR\0Integer"
        ,"R\0GL_FOG_INDEX\0Integer"
        ,"R\0GL_FOG_START\0Integer"
        ,"R\0GL_FOG_END\0Integer"
        ,"R\0GL_LINEAR\0Integer"
        ,"R\0GL_EXP\0Integer"
        ,"R\0GL_EXP2\0Integer"
        ,"R\0GL_LOGIC_OP\0Integer"
        ,"R\0GL_INDEX_LOGIC_OP\0Integer"
        ,"R\0GL_COLOR_LOGIC_OP\0Integer"
        ,"R\0GL_LOGIC_OP_MODE\0Integer"
        ,"R\0GL_CLEAR\0Integer"
        ,"R\0GL_SET\0Integer"
        ,"R\0GL_COPY\0Integer"
        ,"R\0GL_COPY_INVERTED\0Integer"
        ,"R\0GL_NOOP\0Integer"
        ,"R\0GL_INVERT\0Integer"
        ,"R\0GL_AND\0Integer"
        ,"R\0GL_NAND\0Integer"
        ,"R\0GL_OR\0Integer"
        ,"R\0GL_NOR\0Integer"
        ,"R\0GL_XOR\0Integer"
        ,"R\0GL_EQUIV\0Integer"
        ,"R\0GL_AND_REVERSE\0Integer"
        ,"R\0GL_AND_INVERTED\0Integer"
        ,"R\0GL_OR_REVERSE\0Integer"
        ,"R\0GL_OR_INVERTED\0Integer"
        ,"R\0GL_STENCIL_BITS\0Integer"
        ,"R\0GL_STENCIL_TEST\0Integer"
        ,"R\0GL_STENCIL_CLEAR_VALUE\0Integer"
        ,"R\0GL_STENCIL_FUNC\0Integer"
        ,"R\0GL_STENCIL_VALUE_MASK\0Integer"
        ,"R\0GL_STENCIL_FAIL\0Integer"
        ,"R\0GL_STENCIL_PASS_DEPTH_FAIL\0Integer"
        ,"R\0GL_STENCIL_PASS_DEPTH_PASS\0Integer"
        ,"R\0GL_STENCIL_REF\0Integer"
        ,"R\0GL_STENCIL_WRITEMASK\0Integer"
        ,"R\0GL_STENCIL_INDEX\0Integer"
        ,"R\0GL_KEEP\0Integer"
        ,"R\0GL_REPLACE\0Integer"
        ,"R\0GL_INCR\0Integer"
        ,"R\0GL_DECR\0Integer"
        ,"R\0GL_NONE\0Integer"
        ,"R\0GL_LEFT\0Integer"
        ,"R\0GL_RIGHT\0Integer"
        ,"R\0GL_FRONT_LEFT\0Integer"
        ,"R\0GL_FRONT_RIGHT\0Integer"
        ,"R\0GL_BACK_LEFT\0Integer"
        ,"R\0GL_BACK_RIGHT\0Integer"
        ,"R\0GL_AUX0\0Integer"
        ,"R\0GL_AUX1\0Integer"
        ,"R\0GL_AUX2\0Integer"
        ,"R\0GL_AUX3\0Integer"
        ,"R\0GL_COLOR_INDEX\0Integer"
        ,"R\0GL_RED\0Integer"
        ,"R\0GL_GREEN\0Integer"
        ,"R\0GL_BLUE\0Integer"
        ,"R\0GL_ALPHA\0Integer"
        ,"R\0GL_LUMINANCE\0Integer"
        ,"R\0GL_LUMINANCE_ALPHA\0Integer"
        ,"R\0GL_ALPHA_BITS\0Integer"
        ,"R\0GL_RED_BITS\0Integer"
        ,"R\0GL_GREEN_BITS\0Integer"
        ,"R\0GL_BLUE_BITS\0Integer"
        ,"R\0GL_INDEX_BITS\0Integer"
        ,"R\0GL_SUBPIXEL_BITS\0Integer"
        ,"R\0GL_AUX_BUFFERS\0Integer"
        ,"R\0GL_READ_BUFFER\0Integer"
        ,"R\0GL_DRAW_BUFFER\0Integer"
        ,"R\0GL_DOUBLEBUFFER\0Integer"
        ,"R\0GL_STEREO\0Integer"
        ,"R\0GL_BITMAP\0Integer"
        ,"R\0GL_COLOR\0Integer"
        ,"R\0GL_DEPTH\0Integer"
        ,"R\0GL_STENCIL\0Integer"
        ,"R\0GL_DITHER\0Integer"
        ,"R\0GL_RGB\0Integer"
        ,"R\0GL_RGBA\0Integer"
        ,"R\0GL_MAX_LIST_NESTING\0Integer"
        ,"R\0GL_MAX_EVAL_ORDER\0Integer"
        ,"R\0GL_MAX_LIGHTS\0Integer"
        ,"R\0GL_MAX_CLIP_PLANES\0Integer"
        ,"R\0GL_MAX_TEXTURE_SIZE\0Integer"
        ,"R\0GL_MAX_PIXEL_MAP_TABLE\0Integer"
        ,"R\0GL_MAX_ATTRIB_STACK_DEPTH\0Integer"
        ,"R\0GL_MAX_MODELVIEW_STACK_DEPTH\0Integer"
        ,"R\0GL_MAX_NAME_STACK_DEPTH\0Integer"
        ,"R\0GL_MAX_PROJECTION_STACK_DEPTH\0Integer"
        ,"R\0GL_MAX_TEXTURE_STACK_DEPTH\0Integer"
        ,"R\0GL_MAX_VIEWPORT_DIMS\0Integer"
        ,"R\0GL_MAX_CLIENT_ATTRIB_STACK_DEPTH\0Integer"
        ,"R\0GL_ATTRIB_STACK_DEPTH\0Integer"
        ,"R\0GL_CLIENT_ATTRIB_STACK_DEPTH\0Integer"
        ,"R\0GL_COLOR_CLEAR_VALUE\0Integer"
        ,"R\0GL_COLOR_WRITEMASK\0Integer"
        ,"R\0GL_CURRENT_INDEX\0Integer"
        ,"R\0GL_CURRENT_COLOR\0Integer"
        ,"R\0GL_CURRENT_NORMAL\0Integer"
        ,"R\0GL_CURRENT_RASTER_COLOR\0Integer"
        ,"R\0GL_CURRENT_RASTER_DISTANCE\0Integer"
        ,"R\0GL_CURRENT_RASTER_INDEX\0Integer"
        ,"R\0GL_CURRENT_RASTER_POSITION\0Integer"
        ,"R\0GL_CURRENT_RASTER_TEXTURE_COORDS\0Integer"
        ,"R\0GL_CURRENT_RASTER_POSITION_VALID\0Integer"
        ,"R\0GL_CURRENT_TEXTURE_COORDS\0Integer"
        ,"R\0GL_INDEX_CLEAR_VALUE\0Integer"
        ,"R\0GL_INDEX_MODE\0Integer"
        ,"R\0GL_INDEX_WRITEMASK\0Integer"
        ,"R\0GL_MODELVIEW_MATRIX\0Integer"
        ,"R\0GL_MODELVIEW_STACK_DEPTH\0Integer"
        ,"R\0GL_NAME_STACK_DEPTH\0Integer"
        ,"R\0GL_PROJECTION_MATRIX\0Integer"
        ,"R\0GL_PROJECTION_STACK_DEPTH\0Integer"
        ,"R\0GL_RENDER_MODE\0Integer"
        ,"R\0GL_RGBA_MODE\0Integer"
        ,"R\0GL_TEXTURE_MATRIX\0Integer"
        ,"R\0GL_TEXTURE_STACK_DEPTH\0Integer"
        ,"R\0GL_VIEWPORT\0Integer"
        ,"R\0GL_AUTO_NORMAL\0Integer"
        ,"R\0GL_MAP1_COLOR_4\0Integer"
        ,"R\0GL_MAP1_INDEX\0Integer"
        ,"R\0GL_MAP1_NORMAL\0Integer"
        ,"R\0GL_MAP1_TEXTURE_COORD_1\0Integer"
        ,"R\0GL_MAP1_TEXTURE_COORD_2\0Integer"
        ,"R\0GL_MAP1_TEXTURE_COORD_3\0Integer"
        ,"R\0GL_MAP1_TEXTURE_COORD_4\0Integer"
        ,"R\0GL_MAP1_VERTEX_3\0Integer"
        ,"R\0GL_MAP1_VERTEX_4\0Integer"
        ,"R\0GL_MAP2_COLOR_4\0Integer"
        ,"R\0GL_MAP2_INDEX\0Integer"
        ,"R\0GL_MAP2_NORMAL\0Integer"
        ,"R\0GL_MAP2_TEXTURE_COORD_1\0Integer"
        ,"R\0GL_MAP2_TEXTURE_COORD_2\0Integer"
        ,"R\0GL_MAP2_TEXTURE_COORD_3\0Integer"
        ,"R\0GL_MAP2_TEXTURE_COORD_4\0Integer"
        ,"R\0GL_MAP2_VERTEX_3\0Integer"
        ,"R\0GL_MAP2_VERTEX_4\0Integer"
        ,"R\0GL_MAP1_GRID_DOMAIN\0Integer"
        ,"R\0GL_MAP1_GRID_SEGMENTS\0Integer"
        ,"R\0GL_MAP2_GRID_DOMAIN\0Integer"
        ,"R\0GL_MAP2_GRID_SEGMENTS\0Integer"
        ,"R\0GL_COEFF\0Integer"
        ,"R\0GL_ORDER\0Integer"
        ,"R\0GL_DOMAIN\0Integer"
        ,"R\0GL_PERSPECTIVE_CORRECTION_HINT\0Integer"
        ,"R\0GL_POINT_SMOOTH_HINT\0Integer"
        ,"R\0GL_LINE_SMOOTH_HINT\0Integer"
        ,"R\0GL_POLYGON_SMOOTH_HINT\0Integer"
        ,"R\0GL_DONT_CARE\0Integer"
        ,"R\0GL_FASTEST\0Integer"
        ,"R\0GL_NICEST\0Integer"
        ,"R\0GL_SCISSOR_BOX\0Integer"
        ,"R\0GL_SCISSOR_TEST\0Integer"
        ,"R\0GL_MAP_COLOR\0Integer"
        ,"R\0GL_MAP_STENCIL\0Integer"
        ,"R\0GL_INDEX_SHIFT\0Integer"
        ,"R\0GL_INDEX_OFFSET\0Integer"
        ,"R\0GL_RED_SCALE\0Integer"
        ,"R\0GL_RED_BIAS\0Integer"
        ,"R\0GL_GREEN_SCALE\0Integer"
        ,"R\0GL_GREEN_BIAS\0Integer"
        ,"R\0GL_BLUE_SCALE\0Integer"
        ,"R\0GL_BLUE_BIAS\0Integer"
        ,"R\0GL_ALPHA_SCALE\0Integer"
        ,"R\0GL_ALPHA_BIAS\0Integer"
        ,"R\0GL_DEPTH_SCALE\0Integer"
        ,"R\0GL_DEPTH_BIAS\0Integer"
        ,"R\0GL_PIXEL_MAP_S_TO_S_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_I_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_R_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_G_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_B_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_A_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_R_TO_R_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_G_TO_G_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_B_TO_B_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_A_TO_A_SIZE\0Integer"
        ,"R\0GL_PIXEL_MAP_S_TO_S\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_I\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_R\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_G\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_B\0Integer"
        ,"R\0GL_PIXEL_MAP_I_TO_A\0Integer"
        ,"R\0GL_PIXEL_MAP_R_TO_R\0Integer"
        ,"R\0GL_PIXEL_MAP_G_TO_G\0Integer"
        ,"R\0GL_PIXEL_MAP_B_TO_B\0Integer"
        ,"R\0GL_PIXEL_MAP_A_TO_A\0Integer"
        ,"R\0GL_PACK_ALIGNMENT\0Integer"
        ,"R\0GL_PACK_LSB_FIRST\0Integer"
        ,"R\0GL_PACK_ROW_LENGTH\0Integer"
        ,"R\0GL_PACK_SKIP_PIXELS\0Integer"
        ,"R\0GL_PACK_SKIP_ROWS\0Integer"
        ,"R\0GL_PACK_SWAP_BYTES\0Integer"
        ,"R\0GL_UNPACK_ALIGNMENT\0Integer"
        ,"R\0GL_UNPACK_LSB_FIRST\0Integer"
        ,"R\0GL_UNPACK_ROW_LENGTH\0Integer"
        ,"R\0GL_UNPACK_SKIP_PIXELS\0Integer"
        ,"R\0GL_UNPACK_SKIP_ROWS\0Integer"
        ,"R\0GL_UNPACK_SWAP_BYTES\0Integer"
        ,"R\0GL_ZOOM_X\0Integer"
        ,"R\0GL_ZOOM_Y\0Integer"
        ,"R\0GL_TEXTURE_ENV\0Integer"
        ,"R\0GL_TEXTURE_ENV_MODE\0Integer"
        ,"R\0GL_TEXTURE_1D\0Integer"
        ,"R\0GL_TEXTURE_2D\0Integer"
        ,"R\0GL_TEXTURE_WRAP_S\0Integer"
        ,"R\0GL_TEXTURE_WRAP_T\0Integer"
        ,"R\0GL_TEXTURE_MAG_FILTER\0Integer"
        ,"R\0GL_TEXTURE_MIN_FILTER\0Integer"
        ,"R\0GL_TEXTURE_ENV_COLOR\0Integer"
        ,"R\0GL_TEXTURE_GEN_S\0Integer"
        ,"R\0GL_TEXTURE_GEN_T\0Integer"
        ,"R\0GL_TEXTURE_GEN_R\0Integer"
        ,"R\0GL_TEXTURE_GEN_Q\0Integer"
        ,"R\0GL_TEXTURE_GEN_MODE\0Integer"
        ,"R\0GL_TEXTURE_BORDER_COLOR\0Integer"
        ,"R\0GL_TEXTURE_WIDTH\0Integer"
        ,"R\0GL_TEXTURE_HEIGHT\0Integer"
        ,"R\0GL_TEXTURE_BORDER\0Integer"
        ,"R\0GL_TEXTURE_COMPONENTS\0Integer"
        ,"R\0GL_TEXTURE_RED_SIZE\0Integer"
        ,"R\0GL_TEXTURE_GREEN_SIZE\0Integer"
        ,"R\0GL_TEXTURE_BLUE_SIZE\0Integer"
        ,"R\0GL_TEXTURE_ALPHA_SIZE\0Integer"
        ,"R\0GL_TEXTURE_LUMINANCE_SIZE\0Integer"
        ,"R\0GL_TEXTURE_INTENSITY_SIZE\0Integer"
        ,"R\0GL_NEAREST_MIPMAP_NEAREST\0Integer"
        ,"R\0GL_NEAREST_MIPMAP_LINEAR\0Integer"
        ,"R\0GL_LINEAR_MIPMAP_NEAREST\0Integer"
        ,"R\0GL_LINEAR_MIPMAP_LINEAR\0Integer"
        ,"R\0GL_OBJECT_LINEAR\0Integer"
        ,"R\0GL_OBJECT_PLANE\0Integer"
        ,"R\0GL_EYE_LINEAR\0Integer"
        ,"R\0GL_EYE_PLANE\0Integer"
        ,"R\0GL_SPHERE_MAP\0Integer"
        ,"R\0GL_DECAL\0Integer"
        ,"R\0GL_MODULATE\0Integer"
        ,"R\0GL_NEAREST\0Integer"
        ,"R\0GL_REPEAT\0Integer"
        ,"R\0GL_CLAMP\0Integer"
        ,"R\0GL_S\0Integer"
        ,"R\0GL_T\0Integer"
        ,"R\0GL_R\0Integer"
        ,"R\0GL_Q\0Integer"
        ,"R\0GL_VENDOR\0Integer"
        ,"R\0GL_RENDERER\0Integer"
        ,"R\0GL_VERSION\0Integer"
        ,"R\0GL_EXTENSIONS\0Integer"
        ,"R\0GL_NO_ERROR\0Integer"
        ,"R\0GL_INVALID_ENUM\0Integer"
        ,"R\0GL_INVALID_VALUE\0Integer"
        ,"R\0GL_INVALID_OPERATION\0Integer"
        ,"R\0GL_STACK_OVERFLOW\0Integer"
        ,"R\0GL_STACK_UNDERFLOW\0Integer"
        ,"R\0GL_OUT_OF_MEMORY\0Integer"
        ,"R\0GL_CURRENT_BIT\0Integer"
        ,"R\0GL_POINT_BIT\0Integer"
        ,"R\0GL_LINE_BIT\0Integer"
        ,"R\0GL_POLYGON_BIT\0Integer"
        ,"R\0GL_POLYGON_STIPPLE_BIT\0Integer"
        ,"R\0GL_PIXEL_MODE_BIT\0Integer"
        ,"R\0GL_LIGHTING_BIT\0Integer"
        ,"R\0GL_FOG_BIT\0Integer"
        ,"R\0GL_DEPTH_BUFFER_BIT\0Integer"
        ,"R\0GL_ACCUM_BUFFER_BIT\0Integer"
        ,"R\0GL_STENCIL_BUFFER_BIT\0Integer"
        ,"R\0GL_VIEWPORT_BIT\0Integer"
        ,"R\0GL_TRANSFORM_BIT\0Integer"
        ,"R\0GL_ENABLE_BIT\0Integer"
        ,"R\0GL_COLOR_BUFFER_BIT\0Integer"
        ,"R\0GL_HINT_BIT\0Integer"
        ,"R\0GL_EVAL_BIT\0Integer"
        ,"R\0GL_LIST_BIT\0Integer"
        ,"R\0GL_TEXTURE_BIT\0Integer"
        ,"R\0GL_SCISSOR_BIT\0Integer"
        ,"R\0GL_ALL_ATTRIB_BITS\0Integer"
        ,"R\0GL_PROXY_TEXTURE_1D\0Integer"
        ,"R\0GL_PROXY_TEXTURE_2D\0Integer"
        ,"R\0GL_TEXTURE_PRIORITY\0Integer"
        ,"R\0GL_TEXTURE_RESIDENT\0Integer"
        ,"R\0GL_TEXTURE_BINDING_1D\0Integer"
        ,"R\0GL_TEXTURE_BINDING_2D\0Integer"
        ,"R\0GL_TEXTURE_INTERNAL_FORMAT\0Integer"
        ,"R\0GL_ALPHA4\0Integer"
        ,"R\0GL_ALPHA8\0Integer"
        ,"R\0GL_ALPHA12\0Integer"
        ,"R\0GL_ALPHA16\0Integer"
        ,"R\0GL_LUMINANCE4\0Integer"
        ,"R\0GL_LUMINANCE8\0Integer"
        ,"R\0GL_LUMINANCE12\0Integer"
        ,"R\0GL_LUMINANCE16\0Integer"
        ,"R\0GL_LUMINANCE4_ALPHA4\0Integer"
        ,"R\0GL_LUMINANCE6_ALPHA2\0Integer"
        ,"R\0GL_LUMINANCE8_ALPHA8\0Integer"
        ,"R\0GL_LUMINANCE12_ALPHA4\0Integer"
        ,"R\0GL_LUMINANCE12_ALPHA12\0Integer"
        ,"R\0GL_LUMINANCE16_ALPHA16\0Integer"
        ,"R\0GL_INTENSITY\0Integer"
        ,"R\0GL_INTENSITY4\0Integer"
        ,"R\0GL_INTENSITY8\0Integer"
        ,"R\0GL_INTENSITY12\0Integer"
        ,"R\0GL_INTENSITY16\0Integer"
        ,"R\0GL_R3_G3_B2\0Integer"
        ,"R\0GL_RGB4\0Integer"
        ,"R\0GL_RGB5\0Integer"
        ,"R\0GL_RGB8\0Integer"
        ,"R\0GL_RGB10\0Integer"
        ,"R\0GL_RGB12\0Integer"
        ,"R\0GL_RGB16\0Integer"
        ,"R\0GL_RGBA2\0Integer"
        ,"R\0GL_RGBA4\0Integer"
        ,"R\0GL_RGB5_A1\0Integer"
        ,"R\0GL_RGBA8\0Integer"
        ,"R\0GL_RGB10_A2\0Integer"
        ,"R\0GL_RGBA12\0Integer"
        ,"R\0GL_RGBA16\0Integer"
        ,"R\0GL_CLIENT_PIXEL_STORE_BIT\0Integer"
        ,"R\0GL_CLIENT_VERTEX_ARRAY_BIT\0Integer"
        ,"R\0GL_ALL_CLIENT_ATTRIB_BITS\0Integer"
        ,"R\0GL_CLIENT_ALL_ATTRIB_BITS\0Integer"
        ,"R\0GL_RESCALE_NORMAL\0Integer"
        ,"R\0GL_CLAMP_TO_EDGE\0Integer"
        ,"R\0GL_MAX_ELEMENTS_VERTICES\0Integer"
        ,"R\0GL_MAX_ELEMENTS_INDICES\0Integer"
        ,"R\0GL_BGR\0Integer"
        ,"R\0GL_BGRA\0Integer"
        ,"R\0GL_UNSIGNED_BYTE_3_3_2\0Integer"
        ,"R\0GL_UNSIGNED_BYTE_2_3_3_REV\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_5_6_5\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_5_6_5_REV\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_4_4_4_4\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_4_4_4_4_REV\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_5_5_5_1\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_1_5_5_5_REV\0Integer"
        ,"R\0GL_UNSIGNED_INT_8_8_8_8\0Integer"
        ,"R\0GL_UNSIGNED_INT_8_8_8_8_REV\0Integer"
        ,"R\0GL_UNSIGNED_INT_10_10_10_2\0Integer"
        ,"R\0GL_UNSIGNED_INT_2_10_10_10_REV\0Integer"
        ,"R\0GL_LIGHT_MODEL_COLOR_CONTROL\0Integer"
        ,"R\0GL_SINGLE_COLOR\0Integer"
        ,"R\0GL_SEPARATE_SPECULAR_COLOR\0Integer"
        ,"R\0GL_TEXTURE_MIN_LOD\0Integer"
        ,"R\0GL_TEXTURE_MAX_LOD\0Integer"
        ,"R\0GL_TEXTURE_BASE_LEVEL\0Integer"
        ,"R\0GL_TEXTURE_MAX_LEVEL\0Integer"
        ,"R\0GL_SMOOTH_POINT_SIZE_RANGE\0Integer"
        ,"R\0GL_SMOOTH_POINT_SIZE_GRANULARITY\0Integer"
        ,"R\0GL_SMOOTH_LINE_WIDTH_RANGE\0Integer"
        ,"R\0GL_SMOOTH_LINE_WIDTH_GRANULARITY\0Integer"
        ,"R\0GL_ALIASED_POINT_SIZE_RANGE\0Integer"
        ,"R\0GL_ALIASED_LINE_WIDTH_RANGE\0Integer"
        ,"R\0GL_PACK_SKIP_IMAGES\0Integer"
        ,"R\0GL_PACK_IMAGE_HEIGHT\0Integer"
        ,"R\0GL_UNPACK_SKIP_IMAGES\0Integer"
        ,"R\0GL_UNPACK_IMAGE_HEIGHT\0Integer"
        ,"R\0GL_TEXTURE_3D\0Integer"
        ,"R\0GL_PROXY_TEXTURE_3D\0Integer"
        ,"R\0GL_TEXTURE_DEPTH\0Integer"
        ,"R\0GL_TEXTURE_WRAP_R\0Integer"
        ,"R\0GL_MAX_3D_TEXTURE_SIZE\0Integer"
        ,"R\0GL_TEXTURE_BINDING_3D\0Integer"
        ,"R\0GL_CONSTANT_COLOR\0Integer"
        ,"R\0GL_ONE_MINUS_CONSTANT_COLOR\0Integer"
        ,"R\0GL_CONSTANT_ALPHA\0Integer"
        ,"R\0GL_ONE_MINUS_CONSTANT_ALPHA\0Integer"
        ,"R\0GL_COLOR_TABLE\0Integer"
        ,"R\0GL_POST_CONVOLUTION_COLOR_TABLE\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_COLOR_TABLE\0Integer"
        ,"R\0GL_PROXY_COLOR_TABLE\0Integer"
        ,"R\0GL_PROXY_POST_CONVOLUTION_COLOR_TABLE\0Integer"
        ,"R\0GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE\0Integer"
        ,"R\0GL_COLOR_TABLE_SCALE\0Integer"
        ,"R\0GL_COLOR_TABLE_BIAS\0Integer"
        ,"R\0GL_COLOR_TABLE_FORMAT\0Integer"
        ,"R\0GL_COLOR_TABLE_WIDTH\0Integer"
        ,"R\0GL_COLOR_TABLE_RED_SIZE\0Integer"
        ,"R\0GL_COLOR_TABLE_GREEN_SIZE\0Integer"
        ,"R\0GL_COLOR_TABLE_BLUE_SIZE\0Integer"
        ,"R\0GL_COLOR_TABLE_ALPHA_SIZE\0Integer"
        ,"R\0GL_COLOR_TABLE_LUMINANCE_SIZE\0Integer"
        ,"R\0GL_COLOR_TABLE_INTENSITY_SIZE\0Integer"
        ,"R\0GL_CONVOLUTION_1D\0Integer"
        ,"R\0GL_CONVOLUTION_2D\0Integer"
        ,"R\0GL_SEPARABLE_2D\0Integer"
        ,"R\0GL_CONVOLUTION_BORDER_MODE\0Integer"
        ,"R\0GL_CONVOLUTION_FILTER_SCALE\0Integer"
        ,"R\0GL_CONVOLUTION_FILTER_BIAS\0Integer"
        ,"R\0GL_REDUCE\0Integer"
        ,"R\0GL_CONVOLUTION_FORMAT\0Integer"
        ,"R\0GL_CONVOLUTION_WIDTH\0Integer"
        ,"R\0GL_CONVOLUTION_HEIGHT\0Integer"
        ,"R\0GL_MAX_CONVOLUTION_WIDTH\0Integer"
        ,"R\0GL_MAX_CONVOLUTION_HEIGHT\0Integer"
        ,"R\0GL_POST_CONVOLUTION_RED_SCALE\0Integer"
        ,"R\0GL_POST_CONVOLUTION_GREEN_SCALE\0Integer"
        ,"R\0GL_POST_CONVOLUTION_BLUE_SCALE\0Integer"
        ,"R\0GL_POST_CONVOLUTION_ALPHA_SCALE\0Integer"
        ,"R\0GL_POST_CONVOLUTION_RED_BIAS\0Integer"
        ,"R\0GL_POST_CONVOLUTION_GREEN_BIAS\0Integer"
        ,"R\0GL_POST_CONVOLUTION_BLUE_BIAS\0Integer"
        ,"R\0GL_POST_CONVOLUTION_ALPHA_BIAS\0Integer"
        ,"R\0GL_CONSTANT_BORDER\0Integer"
        ,"R\0GL_REPLICATE_BORDER\0Integer"
        ,"R\0GL_CONVOLUTION_BORDER_COLOR\0Integer"
        ,"R\0GL_COLOR_MATRIX\0Integer"
        ,"R\0GL_COLOR_MATRIX_STACK_DEPTH\0Integer"
        ,"R\0GL_MAX_COLOR_MATRIX_STACK_DEPTH\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_RED_SCALE\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_GREEN_SCALE\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_BLUE_SCALE\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_ALPHA_SCALE\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_RED_BIAS\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_GREEN_BIAS\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_BLUE_BIAS\0Integer"
        ,"R\0GL_POST_COLOR_MATRIX_ALPHA_BIAS\0Integer"
        ,"R\0GL_HISTOGRAM\0Integer"
        ,"R\0GL_PROXY_HISTOGRAM\0Integer"
        ,"R\0GL_HISTOGRAM_WIDTH\0Integer"
        ,"R\0GL_HISTOGRAM_FORMAT\0Integer"
        ,"R\0GL_HISTOGRAM_RED_SIZE\0Integer"
        ,"R\0GL_HISTOGRAM_GREEN_SIZE\0Integer"
        ,"R\0GL_HISTOGRAM_BLUE_SIZE\0Integer"
        ,"R\0GL_HISTOGRAM_ALPHA_SIZE\0Integer"
        ,"R\0GL_HISTOGRAM_LUMINANCE_SIZE\0Integer"
        ,"R\0GL_HISTOGRAM_SINK\0Integer"
        ,"R\0GL_MINMAX\0Integer"
        ,"R\0GL_MINMAX_FORMAT\0Integer"
        ,"R\0GL_MINMAX_SINK\0Integer"
        ,"R\0GL_TABLE_TOO_LARGE\0Integer"
        ,"R\0GL_BLEND_EQUATION\0Integer"
        ,"R\0GL_MIN\0Integer"
        ,"R\0GL_MAX\0Integer"
        ,"R\0GL_FUNC_ADD\0Integer"
        ,"R\0GL_FUNC_SUBTRACT\0Integer"
        ,"R\0GL_FUNC_REVERSE_SUBTRACT\0Integer"
        ,"R\0GL_BLEND_COLOR\0Integer"
        ,"R\0GL_TEXTURE0\0Integer"
        ,"R\0GL_TEXTURE1\0Integer"
        ,"R\0GL_TEXTURE2\0Integer"
        ,"R\0GL_TEXTURE3\0Integer"
        ,"R\0GL_TEXTURE4\0Integer"
        ,"R\0GL_TEXTURE5\0Integer"
        ,"R\0GL_TEXTURE6\0Integer"
        ,"R\0GL_TEXTURE7\0Integer"
        ,"R\0GL_TEXTURE8\0Integer"
        ,"R\0GL_TEXTURE9\0Integer"
        ,"R\0GL_TEXTURE10\0Integer"
        ,"R\0GL_TEXTURE11\0Integer"
        ,"R\0GL_TEXTURE12\0Integer"
        ,"R\0GL_TEXTURE13\0Integer"
        ,"R\0GL_TEXTURE14\0Integer"
        ,"R\0GL_TEXTURE15\0Integer"
        ,"R\0GL_TEXTURE16\0Integer"
        ,"R\0GL_TEXTURE17\0Integer"
        ,"R\0GL_TEXTURE18\0Integer"
        ,"R\0GL_TEXTURE19\0Integer"
        ,"R\0GL_TEXTURE20\0Integer"
        ,"R\0GL_TEXTURE21\0Integer"
        ,"R\0GL_TEXTURE22\0Integer"
        ,"R\0GL_TEXTURE23\0Integer"
        ,"R\0GL_TEXTURE24\0Integer"
        ,"R\0GL_TEXTURE25\0Integer"
        ,"R\0GL_TEXTURE26\0Integer"
        ,"R\0GL_TEXTURE27\0Integer"
        ,"R\0GL_TEXTURE28\0Integer"
        ,"R\0GL_TEXTURE29\0Integer"
        ,"R\0GL_TEXTURE30\0Integer"
        ,"R\0GL_TEXTURE31\0Integer"
        ,"R\0GL_ACTIVE_TEXTURE\0Integer"
        ,"R\0GL_CLIENT_ACTIVE_TEXTURE\0Integer"
        ,"R\0GL_MAX_TEXTURE_UNITS\0Integer"
        ,"R\0GL_NORMAL_MAP\0Integer"
        ,"R\0GL_REFLECTION_MAP\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP\0Integer"
        ,"R\0GL_TEXTURE_BINDING_CUBE_MAP\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP_POSITIVE_X\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP_NEGATIVE_X\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP_POSITIVE_Y\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP_NEGATIVE_Y\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP_POSITIVE_Z\0Integer"
        ,"R\0GL_TEXTURE_CUBE_MAP_NEGATIVE_Z\0Integer"
        ,"R\0GL_PROXY_TEXTURE_CUBE_MAP\0Integer"
        ,"R\0GL_MAX_CUBE_MAP_TEXTURE_SIZE\0Integer"
        ,"R\0GL_COMPRESSED_ALPHA\0Integer"
        ,"R\0GL_COMPRESSED_LUMINANCE\0Integer"
        ,"R\0GL_COMPRESSED_LUMINANCE_ALPHA\0Integer"
        ,"R\0GL_COMPRESSED_INTENSITY\0Integer"
        ,"R\0GL_COMPRESSED_RGB\0Integer"
        ,"R\0GL_COMPRESSED_RGBA\0Integer"
        ,"R\0GL_TEXTURE_COMPRESSION_HINT\0Integer"
        ,"R\0GL_TEXTURE_COMPRESSED_IMAGE_SIZE\0Integer"
        ,"R\0GL_TEXTURE_COMPRESSED\0Integer"
        ,"R\0GL_NUM_COMPRESSED_TEXTURE_FORMATS\0Integer"
        ,"R\0GL_COMPRESSED_TEXTURE_FORMATS\0Integer"
        ,"R\0GL_MULTISAMPLE\0Integer"
        ,"R\0GL_SAMPLE_ALPHA_TO_COVERAGE\0Integer"
        ,"R\0GL_SAMPLE_ALPHA_TO_ONE\0Integer"
        ,"R\0GL_SAMPLE_COVERAGE\0Integer"
        ,"R\0GL_SAMPLE_BUFFERS\0Integer"
        ,"R\0GL_SAMPLES\0Integer"
        ,"R\0GL_SAMPLE_COVERAGE_VALUE\0Integer"
        ,"R\0GL_SAMPLE_COVERAGE_INVERT\0Integer"
        ,"R\0GL_MULTISAMPLE_BIT\0Integer"
        ,"R\0GL_TRANSPOSE_MODELVIEW_MATRIX\0Integer"
        ,"R\0GL_TRANSPOSE_PROJECTION_MATRIX\0Integer"
        ,"R\0GL_TRANSPOSE_TEXTURE_MATRIX\0Integer"
        ,"R\0GL_TRANSPOSE_COLOR_MATRIX\0Integer"
        ,"R\0GL_COMBINE\0Integer"
        ,"R\0GL_COMBINE_RGB\0Integer"
        ,"R\0GL_COMBINE_ALPHA\0Integer"
        ,"R\0GL_SOURCE0_RGB\0Integer"
        ,"R\0GL_SOURCE1_RGB\0Integer"
        ,"R\0GL_SOURCE2_RGB\0Integer"
        ,"R\0GL_SOURCE0_ALPHA\0Integer"
        ,"R\0GL_SOURCE1_ALPHA\0Integer"
        ,"R\0GL_SOURCE2_ALPHA\0Integer"
        ,"R\0GL_OPERAND0_RGB\0Integer"
        ,"R\0GL_OPERAND1_RGB\0Integer"
        ,"R\0GL_OPERAND2_RGB\0Integer"
        ,"R\0GL_OPERAND0_ALPHA\0Integer"
        ,"R\0GL_OPERAND1_ALPHA\0Integer"
        ,"R\0GL_OPERAND2_ALPHA\0Integer"
        ,"R\0GL_RGB_SCALE\0Integer"
        ,"R\0GL_ADD_SIGNED\0Integer"
        ,"R\0GL_INTERPOLATE\0Integer"
        ,"R\0GL_SUBTRACT\0Integer"
        ,"R\0GL_CONSTANT\0Integer"
        ,"R\0GL_PRIMARY_COLOR\0Integer"
        ,"R\0GL_PREVIOUS\0Integer"
        ,"R\0GL_DOT3_RGB\0Integer"
        ,"R\0GL_DOT3_RGBA\0Integer"
        ,"R\0GL_CLAMP_TO_BORDER\0Integer"
        ,"R\0GL_TEXTURE0_ARB\0Integer"
        ,"R\0GL_TEXTURE1_ARB\0Integer"
        ,"R\0GL_TEXTURE2_ARB\0Integer"
        ,"R\0GL_TEXTURE3_ARB\0Integer"
        ,"R\0GL_TEXTURE4_ARB\0Integer"
        ,"R\0GL_TEXTURE5_ARB\0Integer"
        ,"R\0GL_TEXTURE6_ARB\0Integer"
        ,"R\0GL_TEXTURE7_ARB\0Integer"
        ,"R\0GL_TEXTURE8_ARB\0Integer"
        ,"R\0GL_TEXTURE9_ARB\0Integer"
        ,"R\0GL_TEXTURE10_ARB\0Integer"
        ,"R\0GL_TEXTURE11_ARB\0Integer"
        ,"R\0GL_TEXTURE12_ARB\0Integer"
        ,"R\0GL_TEXTURE13_ARB\0Integer"
        ,"R\0GL_TEXTURE14_ARB\0Integer"
        ,"R\0GL_TEXTURE15_ARB\0Integer"
        ,"R\0GL_TEXTURE16_ARB\0Integer"
        ,"R\0GL_TEXTURE17_ARB\0Integer"
        ,"R\0GL_TEXTURE18_ARB\0Integer"
        ,"R\0GL_TEXTURE19_ARB\0Integer"
        ,"R\0GL_TEXTURE20_ARB\0Integer"
        ,"R\0GL_TEXTURE21_ARB\0Integer"
        ,"R\0GL_TEXTURE22_ARB\0Integer"
        ,"R\0GL_TEXTURE23_ARB\0Integer"
        ,"R\0GL_TEXTURE24_ARB\0Integer"
        ,"R\0GL_TEXTURE25_ARB\0Integer"
        ,"R\0GL_TEXTURE26_ARB\0Integer"
        ,"R\0GL_TEXTURE27_ARB\0Integer"
        ,"R\0GL_TEXTURE28_ARB\0Integer"
        ,"R\0GL_TEXTURE29_ARB\0Integer"
        ,"R\0GL_TEXTURE30_ARB\0Integer"
        ,"R\0GL_TEXTURE31_ARB\0Integer"
        ,"R\0GL_ACTIVE_TEXTURE_ARB\0Integer"
        ,"R\0GL_CLIENT_ACTIVE_TEXTURE_ARB\0Integer"
        ,"R\0GL_MAX_TEXTURE_UNITS_ARB\0Integer"
        ,"R\0GL_DEPTH_STENCIL_MESA\0Integer"
        ,"R\0GL_UNSIGNED_INT_24_8_MESA\0Integer"
        ,"R\0GL_UNSIGNED_INT_8_24_REV_MESA\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_15_1_MESA\0Integer"
        ,"R\0GL_UNSIGNED_SHORT_1_15_REV_MESA\0Integer"
        ,"R\0GL_ALPHA_BLEND_EQUATION_ATI\0Integer"

        ,"Z"
};