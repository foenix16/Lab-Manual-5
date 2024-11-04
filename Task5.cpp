#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    double a, b, c, discriminant, realPart, imaginaryPart;
    
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    
    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) 
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The equation has two real and distinct roots: " << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0) 
    {
        double root = -b / (2 * a);
        cout << "The equation has one real root (repeated): " << root << endl;
    }
    else 
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The equation has two complex roots: " << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
