# LoliGL

> OpenGL & GLUT port for [loli programming language](https://github.com/txlyre/loli)

### Building

Copy ``libloli.so`` (``libloli.dll`` on windows) to ``bin`` directory and execute commands: 

```bash
mkdir ./build               # make build directory
cmake -S ./ -B ./build      # generate make file to build directory
cd build && make            # compile LoliGL
```

Then in the build folder you can find ``GL.so`` (``GL.dll`` on windows) file.

### Using

Copy ``GL.so`` (``GL.dll`` on windows) to ``pkg`` directory on you`r loli sources.
Then import ``GL`` module from library.

#### Example: Creating window

```rust
import sys
import GL

fn glutDisplayFunc {
    sayln("glutDisplayFunc called")
}

fn glutKeyboardFunc(key: Byte, arg1: Integer, arg2: Integer) {
    if (key == 27t): { # on `Esc` press ...
        sys.exit(0)
    }
}

GL.glutInit("LoliGL application")
GL.glutInitDisplayMode(GL.GLUT_RGB | GL.GLUT_SINGLE)
GL.glutInitWindowSize(200, 200)
GL.glutInitWindowPosition(100, 100)
GL.glutCreateWindow("Test")
GL.glutDisplayFunc()
GL.glutKeyboardFunc()
GL.glutMainLoop()
```
