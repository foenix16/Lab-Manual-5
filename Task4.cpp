#include <iostream>
#include <cmath> 
using namespace std;
int main() 
{
    double distance, angleDegrees, angleRadians, height;

    cout << "Enter the horizontal distance from your position to the base of the tree (in feet): ";
    cin >> distance;
    cout << "Enter the angle of elevation from your position to the top of the tree (in degrees): ";
    cin >> angleDegrees;

    angleRadians = angleDegrees / 57.2958;
    height = distance * tan(angleRadians);

    cout << "The height of the tree is approximately: " << height << " feet" << endl;

    return 0;
}
