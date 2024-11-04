#include <iostream>
using namespace std;

string convertToText(int number) 
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                     "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
                     
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (number < 20) 
    {
        return ones[number];
    } else 
    {
        return tens[number / 10] + ones[number % 10];
    }
}

int main() 
{
    int num;
    cin >> num;

    cout << convertToText(num) << endl;
    return 0;
}
