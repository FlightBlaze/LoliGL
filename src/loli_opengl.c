#include "loli_opengl_consts.c"

void loli_GL__loliGlVersion(loli_state * state) {
    loli_push_string(state, LOLIGL_VERSION);
}

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

void loli_GL__glutPostWindowRedisplay(loli_state * state) {
    int window = (int) loli_arg_integer(state, 0);

    glutPostWindowRedisplay(window);
}

void loli_GL__glutPostRedisplay(loli_state * state) {
    glutPostRedisplay();
}

void loli_GL__glutSwapBuffers(loli_state * state) {
    glutSwapBuffers();
}

void loli_GL__glutWarpPointer(loli_state * state) {
    int x = (int) loli_arg_integer(state, 0);
    int y = (int) loli_arg_integer(state, 1);

    glutWarpPointer(x, y);
}

void loli_GL__glutSetCursor(loli_state * state) {
    int cursor = (int) loli_arg_integer(state, 0);

    glutSetCursor(cursor);
}

void loli_GL__glutEstablishOverlay(loli_state * state) {
    glutEstablishOverlay();
}

void loli_GL__glutRemoveOverlay(loli_state * state) {
    glutRemoveOverlay();
}

void loli_GL__glutUseLayer(loli_state * state) {
    unsigned int layer = (unsigned int) loli_arg_integer(state, 0);

    glutUseLayer(layer);
}

void loli_GL__glutPostOverlayRedisplay(loli_state * state) {
    glutPostOverlayRedisplay();
}

void loli_GL__glutPostWindowOverlayRedisplay(loli_state * state) {
    int window = (int) loli_arg_integer(state, 0);

    glutPostWindowOverlayRedisplay(window);
}

void loli_GL__glutShowOverlay(loli_state * state) {
    glutShowOverlay();
}

void loli_GL__glutHideOverlay(loli_state * state) {
    glutHideOverlay();
}


loli_state * _loli_state;

loli_function_val * _fn_glutCreateMenu_val; // Integer

static void __fn_glutCreateMenu(int menu) {
    if (_loli_state            == 0) return;
    if (_fn_glutCreateMenu_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutCreateMenu_val);
    loli_push_integer(_loli_state, menu);
    loli_call(_loli_state, 1);
}

void loli_GL__glutCreateMenu(loli_state * state) {
    _fn_glutCreateMenu_val = loli_arg_function(state, 0);

    loli_push_integer(state, glutCreateMenu(__fn_glutCreateMenu));
    loli_return_top(state);
}

void loli_GL__glutDestroyMenu(loli_state * state) {
    int menu = (int) loli_arg_integer(state, 0);

    glutDestroyMenu(menu);
}

void loli_GL__glutGetMenu(loli_state * state) {
    loli_push_integer(state, glutGetMenu());
    loli_return_top(state);
}

void loli_GL__glutSetMenu(loli_state * state) {
    int menu = (int) loli_arg_integer(state, 0);

    glutSetMenu(menu);
}

void loli_GL__glutAddMenuEntry(loli_state * state) {
    char * label = loli_arg_string_raw(state, 0);
    int    value = (int) loli_arg_integer(state, 1);

    glutAddMenuEntry(label, value);
}

void loli_GL__glutAddSubMenu(loli_state * state) {
    char * label = loli_arg_string_raw(state, 0);
    int    subMenu = (int) loli_arg_integer(state, 1);

    glutAddSubMenu(label, subMenu);
}

void loli_GL__glutChangeToMenuEntry(loli_state * state) {
    int    item = (int) loli_arg_integer(state, 0);
    char * label = loli_arg_string_raw(state, 1);
    int    value = (int) loli_arg_integer(state, 2);

    glutChangeToMenuEntry(item, label, value);
}

void loli_GL__glutChangeToSubMenu(loli_state * state) {
    int    item = (int) loli_arg_integer(state, 0);
    char * label = loli_arg_string_raw(state, 1);
    int    value = (int) loli_arg_integer(state, 2);

    glutChangeToSubMenu(item, label, value);
}

void loli_GL__glutRemoveMenuItem(loli_state * state) {
    int item = (int) loli_arg_integer(state, 0);

    glutRemoveMenuItem(item);
}

void loli_GL__glutAttachMenu(loli_state * state) {
    int button = (int) loli_arg_integer(state, 0);

    glutAttachMenu(button);
}

void loli_GL__glutDetachMenu(loli_state * state) {
    int button = (int) loli_arg_integer(state, 0);

    glutDetachMenu(button);
}

loli_function_val * _fn_glutDisplayFunc_val; // void
loli_function_val * _fn_glutKeyboardFunc_val; // Byte, Integer, Integer
loli_function_val * _fn_glutSpecialFunc_val; // Integer, Integer, Integer
loli_function_val * _fn_glutReshapeFunc_val; // Integer, Integer
loli_function_val * _fn_glutVisibilityFunc_val; // Integer
loli_function_val * _fn_glutMouseFunc_val; // Integer, Integer, Integer, Integer
loli_function_val * _fn_glutMotionFunc_val; // Integer, Integer
loli_function_val * _fn_glutPassiveMotionFunc_val; // Integer, Integer
loli_function_val * _fn_glutEntryFunc_val; // Integer

static void __fn_glutDisplayFunc() {
    if (_loli_state             == 0) return;
    if (_fn_glutDisplayFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutDisplayFunc_val);
    loli_call(_loli_state, 0);
}

static void __fn_glutKeyboardFunc(unsigned char c, int i1, int i2) {
    if (_loli_state              == 0) return;
    if (_fn_glutKeyboardFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutKeyboardFunc_val);
    loli_push_byte(_loli_state, (uint8_t) c);
    loli_push_integer(_loli_state, i1);
    loli_push_integer(_loli_state, i2);
    loli_call(_loli_state, 3);
}

static void __fn_glutSpecialFunc(int i1, int i2, int i3) {
    if (_loli_state             == 0) return;
    if (_fn_glutSpecialFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutSpecialFunc_val);
    loli_push_integer(_loli_state, i1);
    loli_push_integer(_loli_state, i2);
    loli_push_integer(_loli_state, i3);

    loli_call(_loli_state, 3);
}

static void __fn_glutReshapeFunc(int i1, int i2) {
    if (_loli_state             == 0) return;
    if (_fn_glutReshapeFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutReshapeFunc_val);
    loli_push_integer(_loli_state, i1);
    loli_push_integer(_loli_state, i2);

    loli_call(_loli_state, 2);
}

static void __fn_glutVisibilityFunc(int i1) {
    if (_loli_state                == 0) return;
    if (_fn_glutVisibilityFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutVisibilityFunc_val);
    loli_push_integer(_loli_state, i1);

    loli_call(_loli_state, 1);
}

static void __fn_glutMouseFunc(int button, int state, int x, int y) {
    if (_loli_state                == 0) return;
    if (_fn_glutMouseFunc_val      == 0) return;

    loli_call_prepare(_loli_state, _fn_glutMouseFunc_val);
    loli_push_integer(_loli_state, button);
    loli_push_integer(_loli_state, state);
    loli_push_integer(_loli_state, x);
    loli_push_integer(_loli_state, y);

    loli_call(_loli_state, 4);
}

static void __fn_glutMotionFunc(int i1, int i2) {
    if (_loli_state                == 0) return;
    if (_fn_glutMotionFunc_val     == 0) return;

    loli_call_prepare(_loli_state, _fn_glutMotionFunc_val);
    loli_push_integer(_loli_state, i1);
    loli_push_integer(_loli_state, i2);

    loli_call(_loli_state, 2);
}

static void __fn_glutPassiveMotionFunc(int i1, int i2) {
    if (_loli_state                   == 0) return;
    if (_fn_glutPassiveMotionFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutPassiveMotionFunc_val);
    loli_push_integer(_loli_state, i1);
    loli_push_integer(_loli_state, i2);

    loli_call(_loli_state, 2);
}

static void __fn_glutEntryFunc(int i1) {
    if (_loli_state           == 0) return;
    if (_fn_glutEntryFunc_val == 0) return;

    loli_call_prepare(_loli_state, _fn_glutEntryFunc_val);
    loli_push_integer(_loli_state, i1);

    loli_call(_loli_state, 1);
}

void loli_GL__glutDisplayFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutDisplayFunc_val = loli_arg_function(state, 0);

    glutDisplayFunc(__fn_glutDisplayFunc);
}

void loli_GL__glutKeyboardFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutKeyboardFunc_val = loli_arg_function(state, 0);

    glutKeyboardFunc(__fn_glutKeyboardFunc);
}

void loli_GL__glutSpecialFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutSpecialFunc_val = loli_arg_function(state, 0);

    glutSpecialFunc(__fn_glutSpecialFunc);
}

void loli_GL__glutReshapeFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutReshapeFunc_val = loli_arg_function(state, 0);

    glutReshapeFunc(__fn_glutReshapeFunc);
}

void loli_GL__glutVisibilityFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutVisibilityFunc_val = loli_arg_function(state, 0);

    glutVisibilityFunc(__fn_glutVisibilityFunc);
}

void loli_GL__glutMouseFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutMouseFunc_val = loli_arg_function(state, 0);

    glutMouseFunc(__fn_glutMouseFunc);
}

void loli_GL__glutMotionFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutMotionFunc_val = loli_arg_function(state, 0);

    glutMotionFunc(__fn_glutMotionFunc);
}

void loli_GL__glutPassiveMotionFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutPassiveMotionFunc_val = loli_arg_function(state, 0);

    glutPassiveMotionFunc(__fn_glutPassiveMotionFunc);
}

void loli_GL__glutEntryFunc(loli_state * state) {
    _loli_state = state;
    _fn_glutEntryFunc_val = loli_arg_function(state, 0);

    glutEntryFunc(__fn_glutEntryFunc);
}

void loli_GL__glutMainLoop(loli_state * state) {
    glutMainLoop();
}

void loli_GL__glClearIndex(loli_state * state) {
    float i = loli_arg_integer(state, 0);

    glClearIndex(i);
}

void loli_GL__glClearColor(loli_state * state) {
    float red   = (float) loli_arg_double(state, 0);
    float green = (float) loli_arg_double(state, 1);
    float blue  = (float) loli_arg_double(state, 2);
    float alpha = (float) loli_arg_double(state, 3);

    glClearColor(red, green, blue, alpha);
}

void loli_GL__glClear(loli_state * state) {
    unsigned int mask = (unsigned int) loli_arg_integer(state, 0);

    glClear(mask);
}

void loli_GL__glIndexMask(loli_state * state) {
    unsigned int mask = (unsigned int) loli_arg_integer(state, 0);

    glIndexMask(mask);
}

void loli_GL__glColorMask(loli_state * state) {
    unsigned char red   = (unsigned char) loli_arg_double(state, 0);
    unsigned char green = (unsigned char) loli_arg_double(state, 1);
    unsigned char blue  = (unsigned char) loli_arg_double(state, 2);
    unsigned char alpha = (unsigned char) loli_arg_double(state, 3);

    glColorMask(red, green, blue, alpha);
}

void loli_GL__glAlphaFunc(loli_state * state) {
    unsigned char func  = (unsigned char) loli_arg_integer(state, 0);
    float ref           = loli_arg_integer(state, 1);

    glAlphaFunc(func, ref);
}

void loli_GL__glBlendFunc(loli_state * state) {
    unsigned char sfactor  = (unsigned char) loli_arg_integer(state, 0);
    unsigned char dfactor  = (unsigned char) loli_arg_integer(state, 1);

    glBlendFunc(sfactor, dfactor);
}

void loli_GL__glLogicOp(loli_state * state) {
    unsigned int opcode  = (unsigned int) loli_arg_integer(state, 0);

    glLogicOp(opcode);
}

void loli_GL__glCullFace(loli_state * state) {
    unsigned int mode  = (unsigned int) loli_arg_integer(state, 0);

    glCullFace(mode);
}

void loli_GL__glFrontFace(loli_state * state) {
    unsigned int mode  = (unsigned int) loli_arg_integer(state, 0);

    glFrontFace(mode);
}

void loli_GL__glPointSize(loli_state * state) {
    float size = loli_arg_integer(state, 0);

    glPointSize(size);
}

void loli_GL__glLineWidth(loli_state * state) {
    float width = loli_arg_integer(state, 0);

    glLineWidth(width);
}

void loli_GL__glLineStipple(loli_state * state) {
    int factor = (int) loli_arg_integer(state, 0);
    unsigned short pattern = (unsigned short) loli_arg_integer(state, 1);

    glLineStipple(factor, pattern);
}

void loli_GL__glPolygonMode(loli_state * state) {
    unsigned int face = (unsigned int) loli_arg_integer(state, 0);
    unsigned int mode = (unsigned int) loli_arg_integer(state, 1);

    glPolygonMode(face, mode);
}

void loli_GL__glPolygonOffset(loli_state * state) {
    float factor = loli_arg_integer(state, 0);
    float units  = loli_arg_integer(state, 1);

    glPolygonOffset(factor, units);
}

void loli_GL__glPolygonStipple(loli_state * state) {
    unsigned char mask = (unsigned char) loli_arg_integer(state, 0);

    glPolygonStipple(&mask);

    loli_push_integer(state, mask);
    loli_return_top(state);
}

void loli_GL__glGetPolygonStipple(loli_state * state) {
    unsigned char mask = (unsigned char) loli_arg_integer(state, 0);

    glGetPolygonStipple(&mask);

    loli_push_integer(state, mask);
    loli_return_top(state);
}

void loli_GL__glEdgeFlag(loli_state * state) {
    unsigned char mask = (unsigned char) loli_arg_integer(state, 0);

    glEdgeFlag(mask);
}

void loli_GL__glEdgeFlagv(loli_state * state) {
    unsigned char mask = (unsigned char) loli_arg_integer(state, 0);

    glEdgeFlagv(&mask);

    loli_push_integer(state, mask);
    loli_return_top(state);
}

void loli_GL__glScissor(loli_state * state) {
    int x = (int) loli_arg_integer(state, 0);
    int y = (int) loli_arg_integer(state, 1);
    int width = (int) loli_arg_integer(state, 2);
    int height = (int) loli_arg_integer(state, 3);

    glScissor(x, y, width, height);
}

void loli_GL__glClipPlane(loli_state * state) {
    unsigned int plane = (unsigned int) loli_arg_integer(state, 0);
    double       equation = loli_arg_double(state, 1);

    glClipPlane(plane, &equation);

    loli_push_double(state, equation);
    loli_return_top(state);
}

void loli_GL__glGetClipPlane(loli_state * state) {
    unsigned int plane = (unsigned int) loli_arg_integer(state, 0);
    double       equation = loli_arg_double(state, 1);

    glGetClipPlane(plane, &equation);

    loli_push_double(state, equation);
    loli_return_top(state);
}

void loli_GL__glDrawBuffer(loli_state * state) {
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    glDrawBuffer(mode);
}

void loli_GL__glReadBuffer(loli_state * state) {
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    glReadBuffer(mode);
}

void loli_GL__glEnable(loli_state * state) {
    unsigned int cap = (unsigned int) loli_arg_integer(state, 0);

    glEnable(cap);
}

void loli_GL__glDisable(loli_state * state) {
    unsigned int cap = (unsigned int) loli_arg_integer(state, 0);

    glDisable(cap);
}

void loli_GL__glIsEnabled(loli_state * state) {
    unsigned int cap = (unsigned int) loli_arg_integer(state, 0);

    loli_push_integer(state, glIsEnabled(cap));
    loli_return_top(state);
}

void loli_GL__glEnableClientState(loli_state * state) {
    unsigned int cap = (unsigned int) loli_arg_integer(state, 0);

    glEnableClientState(cap);
}

void loli_GL__glDisableClientState(loli_state * state) {
    unsigned int cap = (unsigned int) loli_arg_integer(state, 0);

    glDisableClientState(cap);
}

void loli_GL__glGetBooleanv(loli_state * state) {
    unsigned int  pname = (unsigned int) loli_arg_integer(state, 0);
    unsigned char * params = (unsigned char *) loli_arg_integer(state, 1);

    glGetBooleanv(pname, params);

    loli_push_integer(state, (int64_t) params);
    loli_return_top(state);
}

void loli_GL__glGetDoublev(loli_state * state) {
    unsigned int  pname = (unsigned int) loli_arg_integer(state, 0);
    double params = loli_arg_double(state, 1);

    glGetDoublev(pname, &params);

    loli_push_double(state, (int64_t) params);
    loli_return_top(state);
}

void loli_GL__glGetFloatv(loli_state * state) {
    unsigned int  pname = (unsigned int) loli_arg_integer(state, 0);
    float params = loli_arg_integer(state, 1);

    glGetFloatv(pname, &params);

    loli_push_integer(state, (int64_t) params);
    loli_return_top(state);
}

void loli_GL__glGetIntegerv(loli_state * state) {
    unsigned int  pname = (unsigned int) loli_arg_integer(state, 0);
    int params =  (int) loli_arg_integer(state, 1);

    glGetIntegerv(pname, &params);

    loli_push_integer(state, (int64_t) params);
    loli_return_top(state);
}

void loli_GL__glPushAttrib(loli_state * state) {
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    glPushAttrib(mode);
}

void loli_GL__glPopAttrib(loli_state * state) {
    glPopAttrib();
}

void loli_GL__glPushClientAttrib(loli_state * state) {
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    glPushClientAttrib(mode);
}

void loli_GL__glPopClientAttrib(loli_state * state) {
    glPopClientAttrib();
}

void loli_GL__glRenderMode(loli_state * state) {
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    loli_push_integer(state, glRenderMode(mode));
    loli_return_top(state);
}

void loli_GL__glGetError(loli_state * state) {
    loli_push_integer(state, glGetError());
    loli_return_top(state);
}

void loli_GL__glGetString(loli_state * state) {
    unsigned int name = (unsigned int) loli_arg_integer(state, 0);

    loli_push_string(state, (char *) glGetString(name));
    loli_return_top(state);
}

void loli_GL__glFinish(loli_state * state) {
    glFinish();
}

void loli_GL__glFlush(loli_state * state) {
    glFlush();
}

void loli_GL__glHint(loli_state * state) {
    unsigned int target = (unsigned int) loli_arg_integer(state, 0);
    unsigned int mode   = (unsigned int) loli_arg_integer(state, 1);

    glHint(target, mode);
}

void loli_GL__glEnd(loli_state * state) {
    glEnd();
}





// TODO: delete it
void loli_GL__example(loli_state * state) {
    //glEnable(GL_STENCIL_TEST);
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
    //glFlush();
}

