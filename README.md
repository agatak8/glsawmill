# glsawmill
A model of a saw mill created in OpenGL for a computer graphics class (GKOM)

## Building and running
### Linux
#### Pre-requisites
Header files for GL, glm, GLEW, glfw and SOIL must be installed.

On Ubuntu you can install them with apt:

`sudo apt install libgl-dev libglm-dev libglew-dev libglfw3-dev libsoil-dev`

#### Commands
Simply run `make` to build and then `./sawmill` to run the program.

### Windows
If you're reading this because you're taking GKOM just paste this repo into the example VisualStudio solution (and maybe tweak some header paths)

Otherwise you will need to do more work:

1. Manually download the header files for GL, glm, glfw and SOIL and tweak the Makefile to include their path
2. Manually acquire compiled .lib files for glew32, glfw3 and SOIL and tweak the Makefile to link against them

## Usage
Arrow keys to rotate camera

Z,X to zoom in/out

A,S to decrease/increase lamp intensity

## Troubleshooting
If your GPU driver complains about the GLSL version find the line `#version 300 es` in Shader/gl_06.vert, Shader/gl_06.frag, Shader/skybox.vert and Shader/skybox.frag and replace `300 es` with a version supported by your GPU. Any version >= 300 should work, either core or es is fine.

Because GLSL support for Intel GPUs is sad, `300 es` is used by default, but for nice desktop GPUs you might need to change it to `300 core`.
