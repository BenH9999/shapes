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

shape pyramid{
    {    
        {200, 200, 200},
        {300, 200, 200},
        {300, 200, 300},
        {200, 200, 300},
        {250, 100, 250}, 
    },
    {
        {0, 1},
        {0, 4},
        {1, 2},
        {1, 4},
        {2, 3},
        {2, 4},
        {3, 0},
        {3, 4},
    }

};
shape icosahedron = {
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

shape cube = {
    {
        //Top
        {0,0,0},
        {100,0,0},
        {0,0,100},
        {100,0,100},
        //Bottom
        {0,100,0},
        {100,100,0},
        {0,100,100},
        {100,100,100},
    },
    {
        {0,1},
        {0,2},
        {1,3},
        {2,3},

        {4,5},
        {4,6},
        {5,7},
        {6,7},

        {0,4},
        {1,5},
        {2,6},
        {3,7}
    }
};


shape torus = {
    {
        //Circle 0
        {50,100.0,0},{51.0,109.95,0},{52.0,114.0,0},{53.0,117.06,0},{54.0,119.59,0},{55.0,121.8,0},{56.0,123.75,0},{57.0,125.52,0},{58.0,127.13,0},{59.0,128.62,0},{60.0,130.0,0},{61.0,131.29,0},{62.0,132.49,0},{63.0,133.63,0},{64.0,134.7,0},{65.0,135.7,0},{66.0,136.66,0},{67.0,137.56,0},{68.0,138.42,0},{69.0,139.23,0},{70.0,140.0,0},{71.0,140.73,0},{72.0,141.42,0},{73.0,142.08,0},{74.0,142.71,0},{75.0,143.3,0},{76.0,143.86,0},{77.0,144.39,0},{78.0,144.9,0},{79.0,145.38,0},{80.0,145.83,0},{81.0,146.25,0},{82.0,146.65,0},{83.0,147.02,0},{84.0,147.37,0},{85.0,147.69,0},{86.0,148.0,0},{87.0,148.28,0},{88.0,148.54,0},{89.0,148.78,0},{90.0,148.99,0},{91.0,149.19,0},{92.0,149.36,0},{93.0,149.51,0},{94.0,149.64,0},{95.0,149.75,0},{96.0,149.84,0},{97.0,149.91,0},{98.0,149.96,0},{99.0,149.99,0},{100.0,150.0,0},{101.0,149.99,0},{102.0,149.96,0},{103.0,149.91,0},{104.0,149.84,0},{105.0,149.75,0},{106.0,149.64,0},{107.0,149.51,0},{108.0,149.36,0},{109.0,149.19,0},{110.0,148.99,0},{111.0,148.78,0},{112.0,148.54,0},{113.0,148.28,0},{114.0,148.0,0},{115.0,147.69,0},{116.0,147.37,0},{117.0,147.02,0},{118.0,146.65,0},{119.0,146.25,0},{120.0,145.83,0},{121.0,145.38,0},{122.0,144.9,0},{123.0,144.39,0},{124.0,143.86,0},{125.0,143.3,0},{126.0,142.71,0},{127.0,142.08,0},{128.0,141.42,0},{129.0,140.73,0},{130.0,140.0,0},{131.0,139.23,0},{132.0,138.42,0},{133.0,137.56,0},{134.0,136.66,0},{135.0,135.7,0},{136.0,134.7,0},{137.0,133.63,0},{138.0,132.49,0},{139.0,131.29,0},{140.0,130.0,0},{141.0,128.62,0},{142.0,127.13,0},{143.0,125.52,0},{144.0,123.75,0},{145.0,121.8,0},{146.0,119.59,0},{147.0,117.06,0},{148.0,114.0,0},{149.0,109.95,0},{150.0,100.0,0},{150.0,100.0,0},{149.0,90.05,0},{148.0,86.0,0},{147.0,82.94,0},{146.0,80.4,0},{145.0,78.21,0},{144.0,76.25,0},{143.0,74.48,0},{142.0,72.87,0},{141.0,71.38,0},{140.0,70.0,0},{139.0,68.71,0},{138.0,67.51,0},{137.0,66.37,0},{136.0,65.3,0},{135.0,64.29,0},{134.0,63.34,0},{133.0,62.44,0},{132.0,61.58,0},{131.0,60.77,0},{130.0,60.0,0},{129.0,59.27,0},{128.0,58.58,0},{127.0,57.92,0},{126.0,57.29,0},{125.0,56.7,0},{124.0,56.13,0},{123.0,55.61,0},{122.0,55.1,0},{121.0,54.62,0},{120.0,54.17,0},{119.0,53.75,0},{118.0,53.35,0},{117.0,52.98,0},{116.0,52.63,0},{115.0,52.31,0},{114.0,52.0,0},{113.0,51.72,0},{112.0,51.46,0},{111.0,51.23,0},{110.0,51.01,0},{109.0,50.81,0},{108.0,50.65,0},{107.0,50.49,0},{106.0,50.36,0},{105.0,50.25,0},{104.0,50.16,0},{103.0,50.09,0},{102.0,50.04,0},{101.0,50.01,0},{100.0,50.0,0},{99.0,50.01,0},{98.0,50.04,0},{97.0,50.09,0},{96.0,50.16,0},{95.0,50.25,0},{94.0,50.36,0},{93.0,50.49,0},{92.0,50.65,0},{91.0,50.81,0},{90.0,51.01,0},{89.0,51.23,0},{88.0,51.46,0},{87.0,51.72,0},{86.0,52.0,0},{85.0,52.31,0},{84.0,52.63,0},{83.0,52.98,0},{82.0,53.35,0},{81.0,53.75,0},{80.0,54.17,0},{79.0,54.62,0},{78.0,55.1,0},{77.0,55.61,0},{76.0,56.13,0},{75.0,56.7,0},{74.0,57.29,0},{73.0,57.92,0},{72.0,58.58,0},{71.0,59.27,0},{70.0,60.0,0},{69.0,60.77,0},{68.0,61.58,0},{67.0,62.44,0},{66.0,63.34,0},{65.0,64.29,0},{64.0,65.3,0},{63.0,66.37,0},{62.0,67.51,0},{61.0,68.71,0},{60.0,70.0,0},{59.0,71.38,0},{58.0,72.87,0},{57.0,74.48,0},{56.0,76.25,0},{55.0,78.21,0},{54.0,80.4,0},{53.0,82.94,0},{52.0,86.0,0},{51.0,90.05,0},{50,100.0,0},
        //Circle 1
        {-50,100.0,0},{-47.0,129.85,0},{-44.0,142.0,0},{-41.0,151.18,0},{-38.0,158.78,0},{-35.0,165.38,0},{-32.0,171.25,0},{-29.0,176.54,0},{-26.0,181.39,0},{-23.0,185.86,0},{-20.0,190.0,0},{-17.0,193.87,0},{-14.0,197.48,0},{-11.0,200.89,0},{-8.0,204.1,0},{-5.0,207.12,0},{-2.0,209.98,0},{1.0,212.69,0},{4.0,215.26,0},{7.0,217.69,0},{10.0,220.0,0},{13.0,222.19,0},{16.0,224.27,0},{19.0,226.25,0},{22.0,228.13,0},{25.0,229.9,0},{28.0,231.59,0},{31.0,233.19,0},{34.0,234.7,0},{37.0,236.12,0},{40.0,237.48,0},{43.0,238.75,0},{46.0,239.95,0},{49.0,241.06,0},{52.0,242.11,0},{55.0,243.08,0},{58.0,244.0,0},{61.0,244.84,0},{64.0,245.62,0},{67.0,246.32,0},{70.0,246.97,0},{73.0,247.56,0},{76.0,248.06,0},{79.0,248.53,0},{82.0,248.92,0},{85.0,249.25,0},{88.0,249.52,0},{91.0,249.73,0},{94.0,249.88,0},{97.0,249.97,0},{100.0,250.0,0},{103.0,249.97,0},{106.0,249.88,0},{109.0,249.73,0},{112.0,249.52,0},{115.0,249.25,0},{118.0,248.92,0},{121.0,248.53,0},{124.0,248.06,0},{127.0,247.56,0},{130.0,246.97,0},{133.0,246.32,0},{136.0,245.62,0},{139.0,244.84,0},{142.0,244.0,0},{145.0,243.08,0},{148.0,242.11,0},{151.0,241.06,0},{154.0,239.95,0},{157.0,238.75,0},{160.0,237.48,0},{163.0,236.12,0},{166.0,234.7,0},{169.0,233.19,0},{172.0,231.59,0},{175.0,229.9,0},{178.0,228.13,0},{181.0,226.25,0},{184.0,224.27,0},{187.0,222.19,0},{190.0,220.0,0},{193.0,217.69,0},{196.0,215.26,0},{199.0,212.69,0},{202.0,209.98,0},{205.0,207.12,0},{208.0,204.1,0},{211.0,200.89,0},{214.0,197.48,0},{217.0,193.87,0},{220.0,190.0,0},{223.0,185.86,0},{226.0,181.39,0},{229.0,176.54,0},{232.0,171.25,0},{235.0,165.38,0},{238.0,158.78,0},{241.0,151.18,0},{244.0,142.0,0},{247.0,129.85,0},{250.0,100.0,0},{250.0,100.0,0},{247.0,70.15,0},{244.0,58.0,0},{241.0,48.82,0},{238.0,41.21,0},{235.0,34.62,0},{232.0,28.75,0},{229.0,23.45,0},{226.0,18.61,0},{223.0,14.14,0},{220.0,10.0,0},{217.0,6.13,0},{214.0,2.52,0},{211.0,-0.89,0},{208.0,-4.1,0},{205.0,-7.12,0},{202.0,-9.98,0},{199.0,-12.7,0},{196.0,-15.26,0},{193.0,-17.69,0},{190.0,-20.0,0},{187.0,-22.19,0},{184.0,-24.27,0},{181.0,-26.25,0},{178.0,-28.13,0},{175.0,-29.9,0},{172.0,-31.59,0},{169.0,-33.18,0},{166.0,-34.7,0},{163.0,-36.12,0},{160.0,-37.47,0},{157.0,-38.75,0},{154.0,-39.95,0},{151.0,-41.06,0},{148.0,-42.11,0},{145.0,-43.08,0},{142.0,-44.0,0},{139.0,-44.84,0},{136.0,-45.62,0},{133.0,-46.32,0},{130.0,-46.97,0},{127.0,-47.56,0},{124.0,-48.06,0},{121.0,-48.53,0},{118.0,-48.92,0},{115.0,-49.25,0},{112.0,-49.52,0},{109.0,-49.73,0},{106.0,-49.88,0},{103.0,-49.97,0},{100.0,-50.0,0},{97.0,-49.97,0},{94.0,-49.88,0},{91.0,-49.73,0},{88.0,-49.52,0},{85.0,-49.25,0},{82.0,-48.92,0},{79.0,-48.53,0},{76.0,-48.06,0},{73.0,-47.56,0},{70.0,-46.97,0},{67.0,-46.32,0},{64.0,-45.62,0},{61.0,-44.84,0},{58.0,-44.0,0},{55.0,-43.08,0},{52.0,-42.11,0},{49.0,-41.06,0},{46.0,-39.95,0},{43.0,-38.75,0},{40.0,-37.47,0},{37.0,-36.12,0},{34.0,-34.7,0},{31.0,-33.18,0},{28.0,-31.59,0},{25.0,-29.9,0},{22.0,-28.13,0},{19.0,-26.25,0},{16.0,-24.27,0},{13.0,-22.19,0},{10.0,-20.0,0},{7.0,-17.69,0},{4.0,-15.26,0},{1.0,-12.7,0},{-2.0,-9.98,0},{-5.0,-7.12,0},{-8.0,-4.1,0},{-11.0,-0.89,0},{-14.0,2.52,0},{-17.0,6.13,0},{-20.0,10.0,0},{-23.0,14.14,0},{-26.0,18.61,0},{-29.0,23.45,0},{-32.0,28.75,0},{-35.0,34.62,0},{-38.0,41.21,0},{-41.0,48.82,0},{-44.0,58.0,0},{-47.0,70.15,0},{-50,100.0,0},
        //Circle 2
        {0,100.0,25},{2.0,119.9,25},{4.0,128.0,25},{6.0,134.12,25},{8.0,139.19,25},{10.0,143.59,25},{12.0,147.5,25},{14.0,151.03,25},{16.0,154.26,25},{18.0,157.24,25},{20.0,160.0,25},{22.0,162.58,25},{24.0,164.99,25},{26.0,167.26,25},{28.0,169.4,25},{30.0,171.41,25},{32.0,173.32,25},{34.0,175.13,25},{36.0,176.84,25},{38.0,178.46,25},{40.0,180.0,25},{42.0,181.46,25},{44.0,182.85,25},{46.0,184.17,25},{48.0,185.42,25},{50.0,186.6,25},{52.0,187.73,25},{54.0,188.79,25},{56.0,189.8,25},{58.0,190.75,25},{60.0,191.65,25},{62.0,192.5,25},{64.0,193.3,25},{66.0,194.04,25},{68.0,194.74,25},{70.0,195.39,25},{72.0,196.0,25},{74.0,196.56,25},{76.0,197.08,25},{78.0,197.55,25},{80.0,197.98,25},{82.0,198.37,25},{84.0,198.71,25},{86.0,199.02,25},{88.0,199.28,25},{90.0,199.5,25},{92.0,199.68,25},{94.0,199.82,25},{96.0,199.92,25},{98.0,199.98,25},{100.0,200.0,25},{102.0,199.98,25},{104.0,199.92,25},{106.0,199.82,25},{108.0,199.68,25},{110.0,199.5,25},{112.0,199.28,25},{114.0,199.02,25},{116.0,198.71,25},{118.0,198.37,25},{120.0,197.98,25},{122.0,197.55,25},{124.0,197.08,25},{126.0,196.56,25},{128.0,196.0,25},{130.0,195.39,25},{132.0,194.74,25},{134.0,194.04,25},{136.0,193.3,25},{138.0,192.5,25},{140.0,191.65,25},{142.0,190.75,25},{144.0,189.8,25},{146.0,188.79,25},{148.0,187.73,25},{150.0,186.6,25},{152.0,185.42,25},{154.0,184.17,25},{156.0,182.85,25},{158.0,181.46,25},{160.0,180.0,25},{162.0,178.46,25},{164.0,176.84,25},{166.0,175.13,25},{168.0,173.32,25},{170.0,171.41,25},{172.0,169.4,25},{174.0,167.26,25},{176.0,164.99,25},{178.0,162.58,25},{180.0,160.0,25},{182.0,157.24,25},{184.0,154.26,25},{186.0,151.03,25},{188.0,147.5,25},{190.0,143.59,25},{192.0,139.19,25},{194.0,134.12,25},{196.0,128.0,25},{198.0,119.9,25},{200.0,100.0,25},{200.0,100.0,25},{198.0,80.1,25},{196.0,72.0,25},{194.0,65.88,25},{192.0,60.81,25},{190.0,56.41,25},{188.0,52.5,25},{186.0,48.97,25},{184.0,45.74,25},{182.0,42.76,25},{180.0,40.0,25},{178.0,37.42,25},{176.0,35.01,25},{174.0,32.74,25},{172.0,30.6,25},{170.0,28.59,25},{168.0,26.68,25},{166.0,24.87,25},{164.0,23.16,25},{162.0,21.54,25},{160.0,20.0,25},{158.0,18.54,25},{156.0,17.15,25},{154.0,15.83,25},{152.0,14.58,25},{150.0,13.4,25},{148.0,12.27,25},{146.0,11.21,25},{144.0,10.2,25},{142.0,9.25,25},{140.0,8.35,25},{138.0,7.5,25},{136.0,6.7,25},{134.0,5.96,25},{132.0,5.26,25},{130.0,4.61,25},{128.0,4.0,25},{126.0,3.44,25},{124.0,2.92,25},{122.0,2.45,25},{120.0,2.02,25},{118.0,1.63,25},{116.0,1.29,25},{114.0,0.98,25},{112.0,0.72,25},{110.0,0.5,25},{108.0,0.32,25},{106.0,0.18,25},{104.0,0.08,25},{102.0,0.02,25},{100.0,0.0,25},{98.0,0.02,25},{96.0,0.08,25},{94.0,0.18,25},{92.0,0.32,25},{90.0,0.5,25},{88.0,0.72,25},{86.0,0.98,25},{84.0,1.29,25},{82.0,1.63,25},{80.0,2.02,25},{78.0,2.45,25},{76.0,2.92,25},{74.0,3.44,25},{72.0,4.0,25},{70.0,4.61,25},{68.0,5.26,25},{66.0,5.96,25},{64.0,6.7,25},{62.0,7.5,25},{60.0,8.35,25},{58.0,9.25,25},{56.0,10.2,25},{54.0,11.21,25},{52.0,12.27,25},{50.0,13.4,25},{48.0,14.58,25},{46.0,15.83,25},{44.0,17.15,25},{42.0,18.54,25},{40.0,20.0,25},{38.0,21.54,25},{36.0,23.16,25},{34.0,24.87,25},{32.0,26.68,25},{30.0,28.59,25},{28.0,30.6,25},{26.0,32.74,25},{24.0,35.01,25},{22.0,37.42,25},{20.0,40.0,25},{18.0,42.76,25},{16.0,45.74,25},{14.0,48.97,25},{12.0,52.5,25},{10.0,56.41,25},{8.0,60.81,25},{6.0,65.88,25},{4.0,72.0,25},{2.0,80.1,25},{0,100.0,25},
        //Circle 3
        {0,100.0,-25},{2.0,119.9,-25},{4.0,128.0,-25},{6.0,134.12,-25},{8.0,139.19,-25},{10.0,143.59,-25},{12.0,147.5,-25},{14.0,151.03,-25},{16.0,154.26,-25},{18.0,157.24,-25},{20.0,160.0,-25},{22.0,162.58,-25},{24.0,164.99,-25},{26.0,167.26,-25},{28.0,169.4,-25},{30.0,171.41,-25},{32.0,173.32,-25},{34.0,175.13,-25},{36.0,176.84,-25},{38.0,178.46,-25},{40.0,180.0,-25},{42.0,181.46,-25},{44.0,182.85,-25},{46.0,184.17,-25},{48.0,185.42,-25},{50.0,186.6,-25},{52.0,187.73,-25},{54.0,188.79,-25},{56.0,189.8,-25},{58.0,190.75,-25},{60.0,191.65,-25},{62.0,192.5,-25},{64.0,193.3,-25},{66.0,194.04,-25},{68.0,194.74,-25},{70.0,195.39,-25},{72.0,196.0,-25},{74.0,196.56,-25},{76.0,197.08,-25},{78.0,197.55,-25},{80.0,197.98,-25},{82.0,198.37,-25},{84.0,198.71,-25},{86.0,199.02,-25},{88.0,199.28,-25},{90.0,199.5,-25},{92.0,199.68,-25},{94.0,199.82,-25},{96.0,199.92,-25},{98.0,199.98,-25},{100.0,200.0,-25},{102.0,199.98,-25},{104.0,199.92,-25},{106.0,199.82,-25},{108.0,199.68,-25},{110.0,199.5,-25},{112.0,199.28,-25},{114.0,199.02,-25},{116.0,198.71,-25},{118.0,198.37,-25},{120.0,197.98,-25},{122.0,197.55,-25},{124.0,197.08,-25},{126.0,196.56,-25},{128.0,196.0,-25},{130.0,195.39,-25},{132.0,194.74,-25},{134.0,194.04,-25},{136.0,193.3,-25},{138.0,192.5,-25},{140.0,191.65,-25},{142.0,190.75,-25},{144.0,189.8,-25},{146.0,188.79,-25},{148.0,187.73,-25},{150.0,186.6,-25},{152.0,185.42,-25},{154.0,184.17,-25},{156.0,182.85,-25},{158.0,181.46,-25},{160.0,180.0,-25},{162.0,178.46,-25},{164.0,176.84,-25},{166.0,175.13,-25},{168.0,173.32,-25},{170.0,171.41,-25},{172.0,169.4,-25},{174.0,167.26,-25},{176.0,164.99,-25},{178.0,162.58,-25},{180.0,160.0,-25},{182.0,157.24,-25},{184.0,154.26,-25},{186.0,151.03,-25},{188.0,147.5,-25},{190.0,143.59,-25},{192.0,139.19,-25},{194.0,134.12,-25},{196.0,128.0,-25},{198.0,119.9,-25},{200.0,100.0,-25},{200.0,100.0,-25},{198.0,80.1,-25},{196.0,72.0,-25},{194.0,65.88,-25},{192.0,60.81,-25},{190.0,56.41,-25},{188.0,52.5,-25},{186.0,48.97,-25},{184.0,45.74,-25},{182.0,42.76,-25},{180.0,40.0,-25},{178.0,37.42,-25},{176.0,35.01,-25},{174.0,32.74,-25},{172.0,30.6,-25},{170.0,28.59,-25},{168.0,26.68,-25},{166.0,24.87,-25},{164.0,23.16,-25},{162.0,21.54,-25},{160.0,20.0,-25},{158.0,18.54,-25},{156.0,17.15,-25},{154.0,15.83,-25},{152.0,14.58,-25},{150.0,13.4,-25},{148.0,12.27,-25},{146.0,11.21,-25},{144.0,10.2,-25},{142.0,9.25,-25},{140.0,8.35,-25},{138.0,7.5,-25},{136.0,6.7,-25},{134.0,5.96,-25},{132.0,5.26,-25},{130.0,4.61,-25},{128.0,4.0,-25},{126.0,3.44,-25},{124.0,2.92,-25},{122.0,2.45,-25},{120.0,2.02,-25},{118.0,1.63,-25},{116.0,1.29,-25},{114.0,0.98,-25},{112.0,0.72,-25},{110.0,0.5,-25},{108.0,0.32,-25},{106.0,0.18,-25},{104.0,0.08,-25},{102.0,0.02,-25},{100.0,0.0,-25},{98.0,0.02,-25},{96.0,0.08,-25},{94.0,0.18,-25},{92.0,0.32,-25},{90.0,0.5,-25},{88.0,0.72,-25},{86.0,0.98,-25},{84.0,1.29,-25},{82.0,1.63,-25},{80.0,2.02,-25},{78.0,2.45,-25},{76.0,2.92,-25},{74.0,3.44,-25},{72.0,4.0,-25},{70.0,4.61,-25},{68.0,5.26,-25},{66.0,5.96,-25},{64.0,6.7,-25},{62.0,7.5,-25},{60.0,8.35,-25},{58.0,9.25,-25},{56.0,10.2,-25},{54.0,11.21,-25},{52.0,12.27,-25},{50.0,13.4,-25},{48.0,14.58,-25},{46.0,15.83,-25},{44.0,17.15,-25},{42.0,18.54,-25},{40.0,20.0,-25},{38.0,21.54,-25},{36.0,23.16,-25},{34.0,24.87,-25},{32.0,26.68,-25},{30.0,28.59,-25},{28.0,30.6,-25},{26.0,32.74,-25},{24.0,35.01,-25},{22.0,37.42,-25},{20.0,40.0,-25},{18.0,42.76,-25},{16.0,45.74,-25},{14.0,48.97,-25},{12.0,52.5,-25},{10.0,56.41,-25},{8.0,60.81,-25},{6.0,65.88,-25},{4.0,72.0,-25},{2.0,80.1,-25},{0,100.0,-25},        
    },
    {
        //Circle 0
        {0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,7},{7,8},{8,9},{9,10},{10,11},{11,12},{12,13},{13,14},{14,15},{15,16},{16,17},{17,18},{18,19},{19,20},{20,21},{21,22},{22,23},{23,24},{24,25},{25,26},{26,27},{27,28},{28,29},{29,30},{30,31},{31,32},{32,33},{33,34},{34,35},{35,36},{36,37},{37,38},{38,39},{39,40},{40,41},{41,42},{42,43},{43,44},{44,45},{45,46},{46,47},{47,48},{48,49},{49,50},{50,51},{51,52},{52,53},{53,54},{54,55},{55,56},{56,57},{57,58},{58,59},{59,60},{60,61},{61,62},{62,63},{63,64},{64,65},{65,66},{66,67},{67,68},{68,69},{69,70},{70,71},{71,72},{72,73},{73,74},{74,75},{75,76},{76,77},{77,78},{78,79},{79,80},{80,81},{81,82},{82,83},{83,84},{84,85},{85,86},{86,87},{87,88},{88,89},{89,90},{90,91},{91,92},{92,93},{93,94},{94,95},{95,96},{96,97},{97,98},{98,99},{99,100},{100,101},{101,102},{102,103},{103,104},{104,105},{105,106},{106,107},{107,108},{108,109},{109,110},{110,111},{111,112},{112,113},{113,114},{114,115},{115,116},{116,117},{117,118},{118,119},{119,120},{120,121},{121,122},{122,123},{123,124},{124,125},{125,126},{126,127},{127,128},{128,129},{129,130},{130,131},{131,132},{132,133},{133,134},{134,135},{135,136},{136,137},{137,138},{138,139},{139,140},{140,141},{141,142},{142,143},{143,144},{144,145},{145,146},{146,147},{147,148},{148,149},{149,150},{150,151},{151,152},{152,153},{153,154},{154,155},{155,156},{156,157},{157,158},{158,159},{159,160},{160,161},{161,162},{162,163},{163,164},{164,165},{165,166},{166,167},{167,168},{168,169},{169,170},{170,171},{171,172},{172,173},{173,174},{174,175},{175,176},{176,177},{177,178},{178,179},{179,180},{180,181},{181,182},{182,183},{183,184},{184,185},{185,186},{186,187},{187,188},{188,189},{189,190},{190,191},{191,192},{192,193},{193,194},{194,195},{195,196},{196,197},{197,198},{198,199},{199,200},{200,201},{201,0},
        //Circle 1
        {202,203},{203,204},{204,205},{205,206},{206,207},{207,208},{208,209},{209,210},{210,211},{211,212},{212,213},{213,214},{214,215},{215,216},{216,217},{217,218},{218,219},{219,220},{220,221},{221,222},{222,223},{223,224},{224,225},{225,226},{226,227},{227,228},{228,229},{229,230},{230,231},{231,232},{232,233},{233,234},{234,235},{235,236},{236,237},{237,238},{238,239},{239,240},{240,241},{241,242},{242,243},{243,244},{244,245},{245,246},{246,247},{247,248},{248,249},{249,250},{250,251},{251,252},{252,253},{253,254},{254,255},{255,256},{256,257},{257,258},{258,259},{259,260},{260,261},{261,262},{262,263},{263,264},{264,265},{265,266},{266,267},{267,268},{268,269},{269,270},{270,271},{271,272},{272,273},{273,274},{274,275},{275,276},{276,277},{277,278},{278,279},{279,280},{280,281},{281,282},{282,283},{283,284},{284,285},{285,286},{286,287},{287,288},{288,289},{289,290},{290,291},{291,292},{292,293},{293,294},{294,295},{295,296},{296,297},{297,298},{298,299},{299,300},{300,301},{301,302},{302,303},{303,304},{304,305},{305,306},{306,307},{307,308},{308,309},{309,310},{310,311},{311,312},{312,313},{313,314},{314,315},{315,316},{316,317},{317,318},{318,319},{319,320},{320,321},{321,322},{322,323},{323,324},{324,325},{325,326},{326,327},{327,328},{328,329},{329,330},{330,331},{331,332},{332,333},{333,334},{334,335},{335,336},{336,337},{337,338},{338,339},{339,340},{340,341},{341,342},{342,343},{343,344},{344,345},{345,346},{346,347},{347,348},{348,349},{349,350},{350,351},{351,352},{352,353},{353,354},{354,355},{355,356},{356,357},{357,358},{358,359},{359,360},{360,361},{361,362},{362,363},{363,364},{364,365},{365,366},{366,367},{367,368},{368,369},{369,370},{370,371},{371,372},{372,373},{373,374},{374,375},{375,376},{376,377},{377,378},{378,379},{379,380},{380,381},{381,382},{382,383},{383,384},{384,385},{385,386},{386,387},{387,388},{388,389},{389,390},{390,391},{391,392},{392,393},{393,394},{394,395},{395,396},{396,397},{397,398},{398,399},{399,400},{400,401},{401,402},{402,403},{403,202},
        //Circle 2
        {404,405},{405,406},{406,407},{407,408},{408,409},{409,410},{410,411},{411,412},{412,413},{413,414},{414,415},{415,416},{416,417},{417,418},{418,419},{419,420},{420,421},{421,422},{422,423},{423,424},{424,425},{425,426},{426,427},{427,428},{428,429},{429,430},{430,431},{431,432},{432,433},{433,434},{434,435},{435,436},{436,437},{437,438},{438,439},{439,440},{440,441},{441,442},{442,443},{443,444},{444,445},{445,446},{446,447},{447,448},{448,449},{449,450},{450,451},{451,452},{452,453},{453,454},{454,455},{455,456},{456,457},{457,458},{458,459},{459,460},{460,461},{461,462},{462,463},{463,464},{464,465},{465,466},{466,467},{467,468},{468,469},{469,470},{470,471},{471,472},{472,473},{473,474},{474,475},{475,476},{476,477},{477,478},{478,479},{479,480},{480,481},{481,482},{482,483},{483,484},{484,485},{485,486},{486,487},{487,488},{488,489},{489,490},{490,491},{491,492},{492,493},{493,494},{494,495},{495,496},{496,497},{497,498},{498,499},{499,500},{500,501},{501,502},{502,503},{503,504},{504,505},{505,506},{506,507},{507,508},{508,509},{509,510},{510,511},{511,512},{512,513},{513,514},{514,515},{515,516},{516,517},{517,518},{518,519},{519,520},{520,521},{521,522},{522,523},{523,524},{524,525},{525,526},{526,527},{527,528},{528,529},{529,530},{530,531},{531,532},{532,533},{533,534},{534,535},{535,536},{536,537},{537,538},{538,539},{539,540},{540,541},{541,542},{542,543},{543,544},{544,545},{545,546},{546,547},{547,548},{548,549},{549,550},{550,551},{551,552},{552,553},{553,554},{554,555},{555,556},{556,557},{557,558},{558,559},{559,560},{560,561},{561,562},{562,563},{563,564},{564,565},{565,566},{566,567},{567,568},{568,569},{569,570},{570,571},{571,572},{572,573},{573,574},{574,575},{575,576},{576,577},{577,578},{578,579},{579,580},{580,581},{581,582},{582,583},{583,584},{584,585},{585,586},{586,587},{587,588},{588,589},{589,590},{590,591},{591,592},{592,593},{593,594},{594,595},{595,596},{596,597},{597,598},{598,599},{599,600},{600,601},{601,602},{602,603},{603,604},{604,605},{605,404},
        //Circle 3
        {606,607},{607,608},{608,609},{609,610},{610,611},{611,612},{612,613},{613,614},{614,615},{615,616},{616,617},{617,618},{618,619},{619,620},{620,621},{621,622},{622,623},{623,624},{624,625},{625,626},{626,627},{627,628},{628,629},{629,630},{630,631},{631,632},{632,633},{633,634},{634,635},{635,636},{636,637},{637,638},{638,639},{639,640},{640,641},{641,642},{642,643},{643,644},{644,645},{645,646},{646,647},{647,648},{648,649},{649,650},{650,651},{651,652},{652,653},{653,654},{654,655},{655,656},{656,657},{657,658},{658,659},{659,660},{660,661},{661,662},{662,663},{663,664},{664,665},{665,666},{666,667},{667,668},{668,669},{669,670},{670,671},{671,672},{672,673},{673,674},{674,675},{675,676},{676,677},{677,678},{678,679},{679,680},{680,681},{681,682},{682,683},{683,684},{684,685},{685,686},{686,687},{687,688},{688,689},{689,690},{690,691},{691,692},{692,693},{693,694},{694,695},{695,696},{696,697},{697,698},{698,699},{699,700},{700,701},{701,702},{702,703},{703,704},{704,705},{705,706},{706,707},{707,708},{708,709},{709,710},{710,711},{711,712},{712,713},{713,714},{714,715},{715,716},{716,717},{717,718},{718,719},{719,720},{720,721},{721,722},{722,723},{723,724},{724,725},{725,726},{726,727},{727,728},{728,729},{729,730},{730,731},{731,732},{732,733},{733,734},{734,735},{735,736},{736,737},{737,738},{738,739},{739,740},{740,741},{741,742},{742,743},{743,744},{744,745},{745,746},{746,747},{747,748},{748,749},{749,750},{750,751},{751,752},{752,753},{753,754},{754,755},{755,756},{756,757},{757,758},{758,759},{759,760},{760,761},{761,762},{762,763},{763,764},{764,765},{765,766},{766,767},{767,768},{768,769},{769,770},{770,771},{771,772},{772,773},{773,774},{774,775},{775,776},{776,777},{777,778},{778,779},{779,780},{780,781},{781,782},{782,783},{783,784},{784,785},{785,786},{786,787},{787,788},{788,789},{789,790},{790,791},{791,792},{792,793},{793,794},{794,795},{795,796},{796,797},{797,798},{798,799},{799,800},{800,801},{801,802},{802,803},{803,804},{804,805},{805,806},{806,807},{807,606},
        //Inter Circle Connections
        {0,404},{1,405},{2,406},{3,407},{4,408},{5,409},{6,410},{7,411},{8,412},{9,413},{10,414},{11,415},{12,416},{13,417},{14,418},{15,419},{16,420},{17,421},{18,422},{19,423},{20,424},{21,425},{22,426},{23,427},{24,428},{25,429},{26,430},{27,431},{28,432},{29,433},{30,434},{31,435},{32,436},{33,437},{34,438},{35,439},{36,440},{37,441},{38,442},{39,443},{40,444},{41,445},{42,446},{43,447},{44,448},{45,449},{46,450},{47,451},{48,452},{49,453},{50,454},{51,455},{52,456},{53,457},{54,458},{55,459},{56,460},{57,461},{58,462},{59,463},{60,464},{61,465},{62,466},{63,467},{64,468},{65,469},{66,470},{67,471},{68,472},{69,473},{70,474},{71,475},{72,476},{73,477},{74,478},{75,479},{76,480},{77,481},{78,482},{79,483},{80,484},{81,485},{82,486},{83,487},{84,488},{85,489},{86,490},{87,491},{88,492},{89,493},{90,494},{91,495},{92,496},{93,497},{94,498},{95,499},{96,500},{97,501},{98,502},{99,503},{100,504},{101,505},{102,506},{103,507},{104,508},{105,509},{106,510},{107,511},{108,512},{109,513},{110,514},{111,515},{112,516},{113,517},{114,518},{115,519},{116,520},{117,521},{118,522},{119,523},{120,524},{121,525},{122,526},{123,527},{124,528},{125,529},{126,530},{127,531},{128,532},{129,533},{130,534},{131,535},{132,536},{133,537},{134,538},{135,539},{136,540},{137,541},{138,542},{139,543},{140,544},{141,545},{142,546},{143,547},{144,548},{145,549},{146,550},{147,551},{148,552},{149,553},{150,554},{151,555},{152,556},{153,557},{154,558},{155,559},{156,560},{157,561},{158,562},{159,563},{160,564},{161,565},{162,566},{163,567},{164,568},{165,569},{166,570},{167,571},{168,572},{169,573},{170,574},{171,575},{172,576},{173,577},{174,578},{175,579},{176,580},{177,581},{178,582},{179,583},{180,584},{181,585},{182,586},{183,587},{184,588},{185,589},{186,590},{187,591},{188,592},{189,593},{190,594},{191,595},{192,596},{193,597},{194,598},{195,599},{196,600},{197,601},{198,602},{199,603},{200,604},{201,605},{0,606},{1,607},{2,608},{3,609},{4,610},{5,611},{6,612},{7,613},{8,614},{9,615},{10,616},{11,617},{12,618},{13,619},{14,620},{15,621},{16,622},{17,623},{18,624},{19,625},{20,626},{21,627},{22,628},{23,629},{24,630},{25,631},{26,632},{27,633},{28,634},{29,635},{30,636},{31,637},{32,638},{33,639},{34,640},{35,641},{36,642},{37,643},{38,644},{39,645},{40,646},{41,647},{42,648},{43,649},{44,650},{45,651},{46,652},{47,653},{48,654},{49,655},{50,656},{51,657},{52,658},{53,659},{54,660},{55,661},{56,662},{57,663},{58,664},{59,665},{60,666},{61,667},{62,668},{63,669},{64,670},{65,671},{66,672},{67,673},{68,674},{69,675},{70,676},{71,677},{72,678},{73,679},{74,680},{75,681},{76,682},{77,683},{78,684},{79,685},{80,686},{81,687},{82,688},{83,689},{84,690},{85,691},{86,692},{87,693},{88,694},{89,695},{90,696},{91,697},{92,698},{93,699},{94,700},{95,701},{96,702},{97,703},{98,704},{99,705},{100,706},{101,707},{102,708},{103,709},{104,710},{105,711},{106,712},{107,713},{108,714},{109,715},{110,716},{111,717},{112,718},{113,719},{114,720},{115,721},{116,722},{117,723},{118,724},{119,725},{120,726},{121,727},{122,728},{123,729},{124,730},{125,731},{126,732},{127,733},{128,734},{129,735},{130,736},{131,737},{132,738},{133,739},{134,740},{135,741},{136,742},{137,743},{138,744},{139,745},{140,746},{141,747},{142,748},{143,749},{144,750},{145,751},{146,752},{147,753},{148,754},{149,755},{150,756},{151,757},{152,758},{153,759},{154,760},{155,761},{156,762},{157,763},{158,764},{159,765},{160,766},{161,767},{162,768},{163,769},{164,770},{165,771},{166,772},{167,773},{168,774},{169,775},{170,776},{171,777},{172,778},{173,779},{174,780},{175,781},{176,782},{177,783},{178,784},{179,785},{180,786},{181,787},{182,788},{183,789},{184,790},{185,791},{186,792},{187,793},{188,794},{189,795},{190,796},{191,797},{192,798},{193,799},{194,800},{195,801},{196,802},{197,803},{198,804},{199,805},{200,806},{201,807},{202,404},{203,405},{204,406},{205,407},{206,408},{207,409},{208,410},{209,411},{210,412},{211,413},{212,414},{213,415},{214,416},{215,417},{216,418},{217,419},{218,420},{219,421},{220,422},{221,423},{222,424},{223,425},{224,426},{225,427},{226,428},{227,429},{228,430},{229,431},{230,432},{231,433},{232,434},{233,435},{234,436},{235,437},{236,438},{237,439},{238,440},{239,441},{240,442},{241,443},{242,444},{243,445},{244,446},{245,447},{246,448},{247,449},{248,450},{249,451},{250,452},{251,453},{252,454},{253,455},{254,456},{255,457},{256,458},{257,459},{258,460},{259,461},{260,462},{261,463},{262,464},{263,465},{264,466},{265,467},{266,468},{267,469},{268,470},{269,471},{270,472},{271,473},{272,474},{273,475},{274,476},{275,477},{276,478},{277,479},{278,480},{279,481},{280,482},{281,483},{282,484},{283,485},{284,486},{285,487},{286,488},{287,489},{288,490},{289,491},{290,492},{291,493},{292,494},{293,495},{294,496},{295,497},{296,498},{297,499},{298,500},{299,501},{300,502},{301,503},{302,504},{303,505},{304,506},{305,507},{306,508},{307,509},{308,510},{309,511},{310,512},{311,513},{312,514},{313,515},{314,516},{315,517},{316,518},{317,519},{318,520},{319,521},{320,522},{321,523},{322,524},{323,525},{324,526},{325,527},{326,528},{327,529},{328,530},{329,531},{330,532},{331,533},{332,534},{333,535},{334,536},{335,537},{336,538},{337,539},{338,540},{339,541},{340,542},{341,543},{342,544},{343,545},{344,546},{345,547},{346,548},{347,549},{348,550},{349,551},{350,552},{351,553},{352,554},{353,555},{354,556},{355,557},{356,558},{357,559},{358,560},{359,561},{360,562},{361,563},{362,564},{363,565},{364,566},{365,567},{366,568},{367,569},{368,570},{369,571},{370,572},{371,573},{372,574},{373,575},{374,576},{375,577},{376,578},{377,579},{378,580},{379,581},{380,582},{381,583},{382,584},{383,585},{384,586},{385,587},{386,588},{387,589},{388,590},{389,591},{390,592},{391,593},{392,594},{393,595},{394,596},{395,597},{396,598},{397,599},{398,600},{399,601},{400,602},{401,603},{402,604},{403,605},{202,606},{203,607},{204,608},{205,609},{206,610},{207,611},{208,612},{209,613},{210,614},{211,615},{212,616},{213,617},{214,618},{215,619},{216,620},{217,621},{218,622},{219,623},{220,624},{221,625},{222,626},{223,627},{224,628},{225,629},{226,630},{227,631},{228,632},{229,633},{230,634},{231,635},{232,636},{233,637},{234,638},{235,639},{236,640},{237,641},{238,642},{239,643},{240,644},{241,645},{242,646},{243,647},{244,648},{245,649},{246,650},{247,651},{248,652},{249,653},{250,654},{251,655},{252,656},{253,657},{254,658},{255,659},{256,660},{257,661},{258,662},{259,663},{260,664},{261,665},{262,666},{263,667},{264,668},{265,669},{266,670},{267,671},{268,672},{269,673},{270,674},{271,675},{272,676},{273,677},{274,678},{275,679},{276,680},{277,681},{278,682},{279,683},{280,684},{281,685},{282,686},{283,687},{284,688},{285,689},{286,690},{287,691},{288,692},{289,693},{290,694},{291,695},{292,696},{293,697},{294,698},{295,699},{296,700},{297,701},{298,702},{299,703},{300,704},{301,705},{302,706},{303,707},{304,708},{305,709},{306,710},{307,711},{308,712},{309,713},{310,714},{311,715},{312,716},{313,717},{314,718},{315,719},{316,720},{317,721},{318,722},{319,723},{320,724},{321,725},{322,726},{323,727},{324,728},{325,729},{326,730},{327,731},{328,732},{329,733},{330,734},{331,735},{332,736},{333,737},{334,738},{335,739},{336,740},{337,741},{338,742},{339,743},{340,744},{341,745},{342,746},{343,747},{344,748},{345,749},{346,750},{347,751},{348,752},{349,753},{350,754},{351,755},{352,756},{353,757},{354,758},{355,759},{356,760},{357,761},{358,762},{359,763},{360,764},{361,765},{362,766},{363,767},{364,768},{365,769},{366,770},{367,771},{368,772},{369,773},{370,774},{371,775},{372,776},{373,777},{374,778},{375,779},{376,780},{377,781},{378,782},{379,783},{380,784},{381,785},{382,786},{383,787},{384,788},{385,789},{386,790},{387,791},{388,792},{389,793},{390,794},{391,795},{392,796},{393,797},{394,798},{395,799},{396,800},{397,801},{398,802},{399,803},{400,804},{401,805},{402,806},{403,807}
    }
};
