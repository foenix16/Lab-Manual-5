#include<iostream>
using namespace std;
void EvenishorOddish(int sum)
{
if(sum%2==0)
{
cout << "Evenish";
}

else
{
cout << "Oddish" ;
}

}
int main()
{
int num,d1,d2,d3,d4,d5;
cout << " Enter a 5-digit number : " ;
cin >> num;
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
num=num/10;
d4=num%10;
num=num/10;
d5=num%10;
num=num/10;

int sum = d1+d2+d3+d4+d5;
EvenishorOddish(sum);
return 0;

}