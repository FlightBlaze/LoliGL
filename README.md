# ![LoliGL](http://newtoo.ru/user-content/LoliGL.png)

# OpenGL in [Loli programming language](https://github.com/loli-foundation/loli)

## Building

Copy ``libloli.so`` (``libloli.dll`` on windows) to ``bin`` directory and execute commands: 

```bash
mkdir ./build               # make build directory
cmake -S ./ -B ./build      # generate make file to build directory
cd build && make            # compile LoliGL
```

Then in the build folder you can find ``GL.so`` (``GL.dll`` on windows) file.

## Using in Loli

Copy ``GL.so`` (``GL.dll`` on windows) to ``pkg`` directory with your loli sources.  
Then import module in code:  
```ts
import GL
```

### Example: Creating window

```rust
import sys
import GL

# define `future` functions
future fn glutKeyboardFunc(Byte, Integer, Integer) { ... }
future fn glutDisplayFunc                          { ... }

# init window
GL.glutInit               ("Test OpenGL application in loli")
GL.glutInitDisplayMode    (GL.GLUT_RGBA | GL.GLUT_SINGLE)
GL.glutInitWindowSize     (200, 200)
GL.glutInitWindowPosition (100, 100)

# create window
GL.glutCreateWindow       (GL.loliGlVersion)

# bind functions
GL.glutDisplayFunc        (glutDisplayFunc)
GL.glutKeyboardFunc       (glutKeyboardFunc)

# main loop
GL.glutMainLoop           ()

fn glutKeyboardFunc(key: Byte, arg1: Integer, arg2: Integer) {
    if (key == 27t): { sys.exit(0) } # on `Esc` press ...
}

fn glutDisplayFunc {
    sayln("on display draw")
}
```
