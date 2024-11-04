#include <iostream>
#include <cmath> 
using namespace std;

string calculatePoolState(int V, int P1, int P2, float H) 
{
    float waterFromPipe1 = P1 * H;
    float waterFromPipe2 = P2 * H;
    float totalWater = waterFromPipe1 + waterFromPipe2;

    if (totalWater > V) 
    {
        float overflow = totalWater - V;
        return "For " + to_string(H) + " hours the pool overflows with " + to_string(overflow) + " liters.";
    } 
     else 
    {
        int percentageFull = floor((totalWater / V) * 100);
        int percentPipe1 = floor((waterFromPipe1 / totalWater) * 100);
        int percentPipe2 = floor((waterFromPipe2 / totalWater) * 100);
        
        return "The pool is " + to_string(percentageFull) + "% full. Pipe 1: " + to_string(percentPipe1) + "%. Pipe 2: " + to_string(percentPipe2) + "%.";
    }
}

int main() 
{
    int V, P1, P2;
    float H;
    cout << "Enter pool volume (V): ";
    cin >> V;
    cout << "Enter flow rate of Pipe 1 (P1): ";
    cin >> P1;
    cout << "Enter flow rate of Pipe 2 (P2): ";
    cin >> P2;
    cout << "Enter hours worker is absent (H): ";
    cin >> H;
    string result = calculatePoolState(V, P1, P2, H);
    cout << result << endl;

    return 0;
}
