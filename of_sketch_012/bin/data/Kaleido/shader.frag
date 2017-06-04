#version 330
#define PI (3.14159265358979323846)
#define TWO_PI (2*PI)

uniform int ksectors = 10;
uniform float kangleRad = 0.0;
uniform vec2 kcenter = vec2(1024.0, 768.0)/2.0;
uniform vec2 screenCenter = vec2(1024.0, 768.0)/2.0;
uniform sampler2DRect inputTexture;

void main() {
    vec2 texCoord = gl_TexCoord[0].xy;
    vec2 v = texCoord - screenCenter;
    float r = length(v);
    float a = atan(v.y, v.x);
    
    float A = TWO_PI / float(ksectors);
    a = mod(a, A);
    if(a > A/2.0) a = A-a;
    a -= kangleRad;
    
    vec2 u = vec2( cos(a), sin(a) ) * r;
    u += kcenter;
    gl_FragColor = texture2DRect( inputTexture, u);
}
