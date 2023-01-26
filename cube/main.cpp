#include "Screen.h"
#include "shapes.hpp"
#include <time.h>
#include <numeric>
#include <cmath>
#include <iostream>
#undef main

void rotate(vec3 &point, float x, float y, float z)
{

    double cosa = std::cos(y);
    double sina = std::sin(y);

    double cosb = std::cos(x);
    double sinb = std::sin(x);

    double cosc = std::cos(z);
    double sinc = std::sin(z);

    double Axx = cosa * cosb;
    double Axy = cosa * sinb * sinc - sina * cosc;
    double Axz = cosa * sinb * cosc + sina * sinc;

    double Ayx = sina * cosb;
    double Ayy = sina * sinb * sinc + cosa * cosc;
    double Ayz = sina * sinb * cosc - cosa * sinc;

    double Azx = -sinb;
    double Azy = cosb * sinc;
    double Azz = cosb * cosc;

    double px = point.x;
    double py = point.y;
    double pz = point.z;
    point.x = Axx * px + Axy * py + Axz * pz;
    point.y = Ayx * px + Ayy * py + Ayz * pz;
    point.z = Azx * px + Azy * py + Azz * pz;
}

void draw_line(Screen &screen, float x1, float y1, float x2, float y2, float xOffset = 0, float yOffset = 0)
{
    x1 += xOffset; y1+=yOffset;
    x2 += xOffset; y2+=yOffset;
    float dx = x2 - x1;
    float dy = y2 - y1;

    float length = std::sqrt(dx * dx + dy * dy);
    float angle = std::atan2(dy, dx); // atan2

    for (float i = 0; i < length; i++)
    {
        screen.pixel(x1 + std::cos(angle) * i, y1 + std::sin(angle) * i);
    }
}

void draw_shape(shape &currentShape, vec3 &c, Screen &screen, float xOffset = 0, float yOffset =0, vec3 rotationOffset = {0,0,0}) {
    for (vec3 &p : currentShape.points)
    {
        p.x -= c.x;
        p.y -= c.y;
        p.z -= c.z;
        rotate(p, 0.02+rotationOffset.x, 0.01+rotationOffset.y, 0.04+rotationOffset.y);
        p.x += c.x;
        p.y += c.y;
        p.z += c.z;
        screen.pixel(p.x + xOffset, p.y + yOffset);
    }

    for (connection &conn : currentShape.connections)
    {
        draw_line(screen, currentShape.points[conn.a].x, currentShape.points[conn.a].y, currentShape.points[conn.b].x, currentShape.points[conn.b].y, xOffset, yOffset);
    }
}

vec3 calc_centeroid(shape currentShape) {
    vec3 c{0, 0, 0};
    for (auto &p : currentShape.points)
    {
        c.x += p.x;
        c.y += p.y;
        c.z += p.z;
    }

    c.x /= currentShape.points.size();
    c.y /= currentShape.points.size();
    c.z /= currentShape.points.size();
    return c;
}

int main()
{
    Screen screen;
    srand(time(NULL));
    shape currentShape = icosahedron;

    // calculate centeroid
    
    vec3 c = calc_centeroid(currentShape);
    vec3 b = calc_centeroid(pyramid);

    while (true)
    {
        draw_shape(currentShape, c, screen, -100, -100);
        draw_shape(pyramid,b,screen, 100, 100,vec3{0.02,0.05,0.09});
        screen.show();
        screen.clear();

        screen.input();
        SDL_Delay(16);
    }

    return 0;
}