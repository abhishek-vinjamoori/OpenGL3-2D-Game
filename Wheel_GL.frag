#version 330 core

// Interpolated values from the vertex shaders
in vec3 fragColor;

// output data
out vec3 color;
uniform sampler2D ttemp[2];

void main()
{
    // Output color = color specified in the vertex shader,
    // interpolated between all 3 surrounding vertices of the triangle
    color = texture(ttemp[1],fragColor.xy).rgb;
}
