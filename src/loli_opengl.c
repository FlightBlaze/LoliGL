#include "loli_opengl.h"

loli_call_entry_func loli_GL_call_table[] = {
        NULL,
        loli_GL__glutInit,
        loli_GL__glutInitDisplayMode,
        loli_GL__glutInitWindowSize,
        loli_GL__glutInitWindowPosition,
        loli_GL__glutCreateWindow,
        loli_GL__glutMainLoop,
        loli_GL__glutDisplayFunc,

        // TODO: delete it
        loli_GL__example,

        loli_GL__end,
        loli_GL__flush,
};

const char * loli_GL_info_table[] = {
        "\0\0"
        ,"F\0glutInit\0(String)"
        ,"F\0glutInitDisplayMode"
        ,"F\0glutInitWindowSize\0(Integer, Integer)"
        ,"F\0glutInitWindowPosition\0(Integer, Integer)"
        ,"F\0glutCreateWindow\0(String): Integer"
        ,"F\0glutMainLoop"
        ,"F\0glutDisplayFunc"

        // TODO: delete it
        ,"F\0example"

        ,"F\0end"
        ,"F\0flush"
        ,"Z"
};

void loli_GL__glutInit(loli_state * state) {
    char * argv[1];
    int    argc = 1;

    argv[0] = strdup(loli_arg_string_raw(state, 0));

    glutInit(&argc, argv);
}

void loli_GL__glutInitDisplayMode(loli_state * state) {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
}

void loli_GL__glutInitWindowSize(loli_state * state) {
    double width = loli_arg_integer(state, 0);
    double height = loli_arg_integer(state, 1);

    glutInitWindowSize((int) width,(int) height);
}

void loli_GL__glutInitWindowPosition(loli_state * state) {
    double x = loli_arg_integer(state, 0);
    double y = loli_arg_integer(state, 1);

    glutInitWindowPosition((int) x,(int) y);
}

void loli_GL__glutCreateWindow(loli_state * state) {
    char * title = loli_arg_string_raw(state, 0);

    loli_push_integer(state, glutCreateWindow(title));
    loli_return_top(state);
}

void loli_GL__glutMainLoop(loli_state * state) {
    glutMainLoop();
}

loli_state * _loli_state;

static void __fn_glutDisplayFunc() {
    if (_loli_state == 0) return;

    loli_call_prepare(_loli_state, loli_find_function(_loli_state, "glutDisplayFunc"));
    loli_call(_loli_state, 1);
}

void loli_GL__glutDisplayFunc(loli_state * state) {
    _loli_state = state;

    glutDisplayFunc(__fn_glutDisplayFunc);
}

void loli_GL__end(loli_state * state) {
    glEnd();
}


void loli_GL__flush(loli_state * state) {
    glFlush();
}


// TODO: delete it
void loli_GL__example(loli_state * state) {
    glEnable(GL_STENCIL_TEST);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);

    glClear(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    glStencilFunc(GL_ALWAYS, 1, 1);
    glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);

    /* red triangle */
    glColor3ub(200, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3i(-4, -4, 0);
    glVertex3i(4, -4, 0);
    glVertex3i(0, 4, 0);
    glEnd();

    glStencilFunc(GL_EQUAL, 1, 1);
    glStencilOp(GL_INCR, GL_KEEP, GL_DECR);

    /* green square */
    glColor3ub(0, 200, 0);
    glBegin(GL_POLYGON);
    glVertex3i(3, 3, 0);
    glVertex3i(-3, 3, 0);
    glVertex3i(-3, -3, 0);
    glVertex3i(3, -3, 0);
    glEnd();

    glStencilFunc(GL_EQUAL, 1, 1);
    glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);

    /* blue square */
    glColor3ub(0, 0, 200);
    glBegin(GL_POLYGON);
    glVertex3i(3, 3, 0);
    glVertex3i(-3, 3, 0);
    glVertex3i(-3, -3, 0);
    glVertex3i(3, -3, 0);
    glEnd();
    glFlush();
}

