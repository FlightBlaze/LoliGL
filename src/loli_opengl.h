#include "loli.h"
#include <GL/glut.h>
#include <string.h>

// Glut
void loli_GL__glutInit(loli_state *);
void loli_GL__glutInitDisplayMode(loli_state *);
void loli_GL__glutInitWindowSize(loli_state *);
void loli_GL__glutInitWindowPosition(loli_state *);
void loli_GL__glutCreateWindow(loli_state *);
void loli_GL__glutMainLoop(loli_state *);
void loli_GL__glutDisplayFunc(loli_state *);

// OpenGL
void loli_GL__end(loli_state *);
void loli_GL__flush(loli_state *);

// TODO: delete it
void loli_GL__example(loli_state *);