#include<iostream>
using namespace std;
void add(int num1, int num2)
{
	cout<< "Sum is :" << num1 + num2;
}
main()
{
	int num1,num2;
	cout << " Enter first number : ";
	cin >> num1;
	cout << " Enter second number : ";
	cin >> num2;
	add(num1,num2);
	
	reurn 0;
}