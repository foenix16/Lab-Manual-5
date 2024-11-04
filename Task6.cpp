#include <iostream>
using namespace std;
string checkAlphabetCase(char ch) 
{
    if (ch == 'A')
    {
        return "You have entered Capital A";
    } 
    else if (ch == 'a') 
    {
        return "You have entered small a";
    } 
    else 
    {
        return "Invalid input. Please enter 'A' or 'a'.";
    }
}

int main() 
{
    char input;
    cout << "Enter a character ('A' or 'a'): ";
    cin >> input;
    cout << checkAlphabetCase(input);

    return 0;
}
