#include <vector>

#define X 252.573111212
#define Y 147.426888788
#define W 114.934919164
#define Z 285.065080835

struct vec3 {
	float x, y, z;
};

struct connection {
	int a, b;
};

struct shape
{
    std::vector<vec3> points;
    std::vector<connection> connections;
};

std::vector<vec3> pyramid{
        {200, 200, 200},
        {300, 200, 200},
        {300, 200, 300},
        {200, 200, 300},
        {250, 100, 250},

};
shape icosahedron = {
    //Points
    {
        {Y, 200, Z},
        {X, 200, Z},
        {Y, 200, W},
        {X, 200, W},
        {200, Z, X},
        {200, Z, Y},
        {200, W, X},
        {200, W, Y},
        {Z, X, 200},
        {W, X, 200},
        {Z, Y, 200},
        {W, Y, 200}
    },
    //Connections
    {
        {0, 4}, {0, 1}, {4, 1}, {0, 9}, {9, 4}, {9, 5}, 
        {5, 4}, {4, 5}, {4, 8}, {5, 8}, {8, 1}, {8, 10}, 
        {10, 1}, {8, 3}, {3, 10}, {5, 3}, {3, 8}, {5, 2}, 
        {2, 3}, {2, 7}, {7, 3}, {7, 10}, {10, 3}, {7, 6}, 
        {6, 10}, {7, 11}, {11, 6}, {11, 0}, {0, 6}, {1, 6}, 
        {6, 1}, {1, 10}, {9, 0}, {9, 11}, {0, 11}, {9, 2}, 
        {11, 2}, {2, 5}, {7, 2}, {2, 11}
    }
};

std::vector<connection> pyramidConnections{
    {0, 1},
    {0, 4},
    {1, 2},
    {1, 4},
    {2, 3},
    {2, 4},
    {3, 0},
    {3, 4},
};

std::vector<connection> icosahedronConnections{
    
};