//add include statements
#include <iostream>
#include "dna.h"
//add function(s) code here
int factorial(int num){
    int result =1;
    while (num>0){
        result*=num;
        num--;
    }
    return result;
}

int gcd(int num1, int num2){
    while (num2 !=0){
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}