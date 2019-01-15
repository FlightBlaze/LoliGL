#include "loli.h"
#include <GL/glut.h>
#include <string.h>

// Glut
void loli_GL__glutInit                     (loli_state *);
void loli_GL__glutInitDisplayMode          (loli_state *);
void loli_GL__glutInitWindowSize           (loli_state *);
void loli_GL__glutInitWindowPosition       (loli_state *);
void loli_GL__glutInitDisplayString        (loli_state *);

void loli_GL__glutCreateWindow             (loli_state *);
void loli_GL__glutCreateSubWindow          (loli_state *);
void loli_GL__glutDestroyWindow            (loli_state *);
void loli_GL__glutSetWindow                (loli_state *);
void loli_GL__glutGetWindow                (loli_state *);
void loli_GL__glutSetWindowTitle           (loli_state *);
void loli_GL__glutSetIconTitle             (loli_state *);
void loli_GL__glutReshapeWindow            (loli_state *);
void loli_GL__glutPositionWindow           (loli_state *);
void loli_GL__glutShowWindow               (loli_state *);
void loli_GL__glutHideWindow               (loli_state *);
void loli_GL__glutIconifyWindow            (loli_state *);
void loli_GL__glutPopWindow                (loli_state *);
void loli_GL__glutFullScreen               (loli_state *);

void loli_GL__glutMainLoop                 (loli_state *);
void loli_GL__glutDisplayFunc              (loli_state *);
void loli_GL__glutKeyboardFunc             (loli_state *);

// TODO: delete it
void loli_GL__example                      (loli_state *);

// OpenGL
void loli_GL__glEnd                        (loli_state *);
void loli_GL__glFlush                      (loli_state *);

void loli_GL_var_GLUT_RGB                  (loli_state *);
void loli_GL_var_GLUT_RGBA                 (loli_state *);
void loli_GL_var_GLUT_INDEX                (loli_state *);
void loli_GL_var_GLUT_SINGLE               (loli_state *);
void loli_GL_var_GLUT_DOUBLE               (loli_state *);
void loli_GL_var_GLUT_ACCUM                (loli_state *);
void loli_GL_var_GLUT_ALPHA                (loli_state *);
void loli_GL_var_GLUT_DEPTH                (loli_state *);
void loli_GL_var_GLUT_STENCIL              (loli_state *);
void loli_GL_var_GLUT_MULTISAMPLE          (loli_state *);
void loli_GL_var_GLUT_STEREO               (loli_state *);
void loli_GL_var_GLUT_LUMINANCE            (loli_state *);

void loli_GL_var_GLUT_MENU_NOT_IN_USE      (loli_state *);
void loli_GL_var_GLUT_MENU_IN_USE          (loli_state *);
void loli_GL_var_GLUT_NOT_VISIBLE          (loli_state *);
void loli_GL_var_GLUT_VISIBLE              (loli_state *);
void loli_GL_var_GLUT_HIDDEN               (loli_state *);
void loli_GL_var_GLUT_FULLY_RETAINED       (loli_state *);
void loli_GL_var_GLUT_PARTIALLY_RETAINED   (loli_state *);
void loli_GL_var_GLUT_FULLY_COVERED        (loli_state *);

void loli_GL_var_GLUT_KEY_F1               (loli_state *);
void loli_GL_var_GLUT_KEY_F2               (loli_state *);
void loli_GL_var_GLUT_KEY_F3               (loli_state *);
void loli_GL_var_GLUT_KEY_F4               (loli_state *);
void loli_GL_var_GLUT_KEY_F5               (loli_state *);
void loli_GL_var_GLUT_KEY_F6               (loli_state *);
void loli_GL_var_GLUT_KEY_F7               (loli_state *);
void loli_GL_var_GLUT_KEY_F8               (loli_state *);
void loli_GL_var_GLUT_KEY_F9               (loli_state *);
void loli_GL_var_GLUT_KEY_F10              (loli_state *);
void loli_GL_var_GLUT_KEY_F11              (loli_state *);
void loli_GL_var_GLUT_KEY_F12              (loli_state *);
void loli_GL_var_GLUT_KEY_LEFT             (loli_state *);
void loli_GL_var_GLUT_KEY_UP               (loli_state *);
void loli_GL_var_GLUT_KEY_RIGHT            (loli_state *);
void loli_GL_var_GLUT_KEY_DOWN             (loli_state *);
void loli_GL_var_GLUT_KEY_PAGE_UP          (loli_state *);
void loli_GL_var_GLUT_KEY_PAGE_DOWN        (loli_state *);
void loli_GL_var_GLUT_KEY_HOME             (loli_state *);
void loli_GL_var_GLUT_KEY_END              (loli_state *);
void loli_GL_var_GLUT_KEY_INSERT           (loli_state *);

loli_call_entry_func loli_GL_call_table[] = {
        NULL,
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
};

const char * loli_GL_info_table[] = {
        "\0\0"
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

        ,"Z"
};