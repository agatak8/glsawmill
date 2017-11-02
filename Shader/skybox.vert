#version 320 es
layout (location = 0) in lowp vec3 position;
out lowp vec3 TexCoords;

uniform mat4 projection;
uniform mat4 view;


void main()
{
    gl_Position =   projection * view * vec4(position, 1.0);  
    TexCoords = position;
}  
