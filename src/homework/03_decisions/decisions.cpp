//write include statement for decisions header

using namespace std;
//Write code for function(s) code here
string get_letter_grade_using_if (int grade){ 
    string gradeInLetter = "";
  
  if (grade > 100 || grade < 0)
  {
  	return "Invalid value";
  }
  else{
  	if (grade >= 90 && grade <= 100) {
    gradeInLetter = "A";
  } 
  else if (grade >= 80 && grade <= 89){
  	gradeInLetter = "B";
  }
    else if (grade >= 70 && grade <= 79){
  	gradeInLetter = "C";
  }
    else if (grade >= 60 && grade <= 69){
  	gradeInLetter = "D";
  }
    else {
  	gradeInLetter = "F";
  }
  
  return gradeInLetter;
  }

  
}



string get_letter_grade_using_switch (int grade){
    string gradeInLetter = "";
  
  switch (grade) {
  case 90 ...100:
    gradeInLetter = "A";
    break;
  case 80 ...89:
    gradeInLetter = "B";
    break;
  case 70 ...79:
    gradeInLetter = "C";
    break;
  case 60 ... 69:
    gradeInLetter = "D";
    break;
  default:
  	gradeInLetter = "F";
  }
  return gradeInLetter;
}