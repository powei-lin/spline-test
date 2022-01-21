#include <iostream>
#include <basalt/spline/se3_spline.h>

int main(int, char**) {
    std::cout << "Hello, world!\n";
    basalt::Se3Spline<5> spline6(100);
    spline6.genRandomTrajectory(10);
    
}
