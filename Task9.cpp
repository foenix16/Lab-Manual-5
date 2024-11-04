#include <iostream>
using namespace std;

string timeTravel(int hours, int minutes) 
{

    minutes += 15;
    
    if (minutes >= 60) 
    {
        minutes -= 60;
        hours += 1;
    }

    if (hours >= 24) 
    {
        hours -= 24;
    }

string result = "";
    
    if (hours < 10) 
    {
        result += "0";
    }
    result += (hours + '0');  

    result += ":";  

    if (minutes < 10) 
    {
        result += "0"; 
    }
    result += (minutes + '0');  
    
    return result;

}

int main() 
{
    int hours, minutes;
    cout << " Enter hours and minutes : " << endl;
    cin >> hours >> minutes;
    cout << timeTravel(hours, minutes) << endl;   

    return 0;
}
