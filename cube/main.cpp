#include "Screen.h"
#include <time.h>
#include <numeric>
#include <cmath>
#include <iostream>
#undef main

const double X = 252.573111212;
const double Y = 147.426888788;
const double W = 114.934919164;
const double Z = 285.065080835;

struct vec3 {
	float x, y, z;
};

struct connection {
	int a, b;
};

void rotate(vec3& point, float x = 1, float y = 1, float z = 1) {

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

void line(Screen& screen,
 float x1, float y1, float x2, float y2) {
	float dx = x2 - x1;
	float dy = y2 - y1;

	float length = std::sqrt(dx * dx + dy * dy);
	float angle = std::atan2(dy, dx); //atan2

	for (float i = 0; i < length; i++) {
		screen.pixel(x1 + std::cos(angle) * i, y1 + std::sin(angle) * i);
	}
}

int main() {
	Screen screen;
	srand(time(NULL));
	std::vector<vec3> pyramid{
		{200,200,200},
		{300,200,200},
		{300,200,300},
		{200,200,300},
		{250,100,250},

	};

	std::vector<vec3> icosahedron{
		{Y, 200, Z}, {X, 200, Z}, {Y, 200, W}, {X, 200, W},
		{200, Z, X}, {200, Z, Y}, {200, W, X}, {200, W, Y},

		{Z, X, 200}, {W, X, 200}, {Z, Y, 200}, {W, Y, 200}
	};

	std::vector<vec3> points = icosahedron;

	std::vector<connection> pyramidConnections{

		{0,1},
		{1,2},
		{2,3},
		{3,0},
		{0,4},
		{2,4},
		{1,4},
		{3,4},
	};

	std::vector<connection> icosahedronConnections{
		{0,4},
		{0,1},
		{4,1},
		{0,9},
		{9,4},
		{9,5},
		{5,4},
		{4,5},
		{4,8},
		{5,8},
		{8,1},
		{8,10},
		{10,1},
		{8,3},
		{3,10},
		{5,3},
		{3,8},
		{5,2},
		{2,3},
		{2,7},
		{7,3},
		{7,10},
		{10,3},
		{7,6},
		{6,10},
		{7,11},
		{11,6},
		{11,0},
		{0,6},
		{1,6},
		{6,1},
		{1,10},
		{9,0},
		{9,11},
		{0,11},
		{9,2},
		{11,2},
		{2,5},
		{7,2},
		{2,11}
	};

	std::vector<connection> connections = icosahedronConnections;

	//calculate centeroid
	vec3 c{ 0,0,0 };
	for (auto& p : points) {
		c.x += p.x;
		c.y += p.y;
		c.z += p.z;
	}

	c.x /= points.size();
	c.y /= points.size();
	c.z /= points.size();

	while (true) {
		for (auto& p : points) {
			p.x -= c.x;
			p.y -= c.y;
			p.z -= c.z;

			rotate(p, 0.02, 0.01, 0.04);

			p.x += c.x;
			p.y += c.y;
			p.z += c.z;
			screen.pixel(p.x, p.y);
		}

		for (auto& p : points) {
			screen.pixel(p.x, p.y);
		}

		for (auto& conn : connections) {
			line(screen, points[conn.a].x, points[conn.a].y, points[conn.b].x, points[conn.b].y);
		}

		screen.show();
		screen.clear();

		screen.input();
		SDL_Delay(30);
	}

	return 0;
}