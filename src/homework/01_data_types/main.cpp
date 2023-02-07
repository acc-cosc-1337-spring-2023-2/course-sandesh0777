#include <iostream>
#include "data_types.h"
#include "data_types.cpp"






//write namespace using statement for cout

using std: : count;

using std: : cin;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
int num;
cout << "Enter a number!\n" ;
cin >> num;


int result = multiply_numbers(num);
cout<< "Result ="<<result <<endl;


int num1 = 4;


result = multiply_numbers(num1);
cout << "Result =" + result<<endl;

	return 0;
}
