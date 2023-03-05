//write include statements
#include <iostream>
#include "decisions.h"
using namespace std;

int main() 
{
	int user_input;
    cout <<"\t MAIN MENU  \n1-Letter grade using if \n2-Letter grade using switch \n3-Exit\n";
    cin >> user_input;
    
    if (user_input < 1 || user_input > 3){
        cout <<"Invalid Choice!";
    }
    else{
       if(user_input == 1){
           int grade = 0;
           cout <<"Please insert the grade as a number";
           cin >> grade;
           cout << get_letter_grade_using_if(grade);
       }
       else if(user_input == 2){
          int grade =0;
		  cout <<"please insert the grade as a number";
		  cin >> grade;
		  cout << get_letter_grade_using_switch(grade); 
       }
       else
       {
           cout<<"bye";
       }

	return 0;
}
}