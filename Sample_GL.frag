#version 330 core

// Interpolated values from the vertex shaders
in vec3 fragColor;

// output data
out vec4 color;

void main()
{
    // Output color = color specified in the vertex shader,
    // interpolated between all 3 surrounding vertices of the triangle
    color = vec4(fragColor,1);
}
