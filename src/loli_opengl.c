#include "loli_opengl_consts.c"

void loli_GL__glutInit(loli_state * state) {
    char * argv[1];
    int    argc = 1;

    argv[0] = strdup(loli_arg_string_raw(state, 0));

    glutInit(&argc, argv);
}

void loli_GL__glutInitDisplayMode(loli_state * state) {
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    glutInitDisplayMode(mode);
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

void loli_GL__glutInitDisplayString(loli_state * state) {
    char * title = loli_arg_string_raw(state, 0);

    glutInitDisplayString(title);
}

void loli_GL__glutCreateWindow(loli_state * state) {
    char * title = loli_arg_string_raw(state, 0);

    loli_push_integer(state, glutCreateWindow(title));
    loli_return_top(state);
}

void loli_GL__glutCreateSubWindow(loli_state * state) {
    int window = (int) loli_arg_integer(state, 0);
    int x = (int) loli_arg_integer(state, 1);
    int y = (int) loli_arg_integer(state, 2);
    int width = (int) loli_arg_integer(state, 3);
    int height = (int) loli_arg_integer(state, 4);

    loli_push_integer(state, glutCreateSubWindow(window, x, y, width, height));
    loli_return_top(state);
}

void loli_GL__glutDestroyWindow(loli_state * state) {
    int window = (int) loli_arg_integer(state, 0);

    glutDestroyWindow(window);
}

void loli_GL__glutSetWindow(loli_state * state) {
    int window = (int) loli_arg_integer(state, 0);

    glutSetWindow(window);
}

void loli_GL__glutGetWindow(loli_state * state) {
    loli_push_integer(state, glutGetWindow());
    loli_return_top(state);
}

void loli_GL__glutSetWindowTitle(loli_state * state) {
    char * title = loli_arg_string_raw(state, 0);

    glutSetWindowTitle(title);
}

void loli_GL__glutSetIconTitle(loli_state * state) {
    char * title = loli_arg_string_raw(state, 0);

    glutSetIconTitle(title);
}

void loli_GL__glutReshapeWindow(loli_state * state) {
    int width = (int) loli_arg_integer(state, 0);
    int height = (int) loli_arg_integer(state, 1);

    glutReshapeWindow(width, height);
}

void loli_GL__glutPositionWindow(loli_state * state) {
    int x = (int) loli_arg_integer(state, 0);
    int y = (int) loli_arg_integer(state, 1);

    glutPositionWindow(x, y);
}

void loli_GL__glutShowWindow(loli_state * state) {
    glutShowWindow();
}

void loli_GL__glutHideWindow(loli_state * state) {
    glutHideWindow();
}

void loli_GL__glutIconifyWindow(loli_state * state) {
    glutIconifyWindow();
}

void loli_GL__glutPopWindow(loli_state * state) {
    glutPopWindow();
}

void loli_GL__glutFullScreen(loli_state * state) {
    glutFullScreen();
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

static void __fn_glutKeyboardFunc(unsigned char c, int i1, int i2) {
    if (_loli_state == 0) return;

    loli_call_prepare(_loli_state, loli_find_function(_loli_state, "glutKeyboardFunc"));
    loli_push_byte(_loli_state, (uint8_t) c);
    loli_push_integer(_loli_state, i1);
    loli_push_integer(_loli_state, i2);
    loli_call(_loli_state, 3);
}

void loli_GL__glutDisplayFunc(loli_state * state) {
    _loli_state = state;

    glutDisplayFunc(__fn_glutDisplayFunc);
}

void loli_GL__glutKeyboardFunc(loli_state * state) {
    _loli_state = state;

    glutKeyboardFunc(__fn_glutKeyboardFunc);
}

void loli_GL__glEnd(loli_state * state) {
    glEnd();
}


void loli_GL__glFlush(loli_state * state) {
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

