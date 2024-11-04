#include<iostream>
using namespace std;
Symmetrical(int num)
{
int firstDigit = (num/100);
int lastDigit = (num%10);
return firstDigit==lastDigit;
}
main()
{
int num;
cout << " Enter a 3 digit num :";
cin >> num;

if(Symmetrical(num)) 
{
   cout << "True" << endl;
}
else 
{
    cout << "False" << endl;
}

    return 0;
}
