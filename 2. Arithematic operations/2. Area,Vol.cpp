#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    
    volCube = pow(cubeSide,3);
    volSphere = (4.0/3.0)* M_PI * (pow(sphereRadius,3));
    volCone = M_PI * (pow(coneRadius,2)) * (coneHeight/3);

    cout << "volume of cube is " << volCube << endl;
    cout << "volume of sphere is " << volSphere << endl;
    cout << "volume of cone is " << volCone << endl ;
    
    return 0;
