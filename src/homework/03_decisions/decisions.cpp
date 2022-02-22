#include "decisions.h"
//write include statement for decisions header

std::string get_letter_grade_using_if(int grade)
{
	std::string return_letter_grade;

	if (grade >= 90 && grade <= 100) 
	{
		return_letter_grade = "A";
	}
	else if(grade >= 80 && grade <= 89) 
	{
		return_letter_grade = "B";
	}
	else if (grade >= 70 && grade <= 79)
	{
		return_letter_grade = "C";
	}
	else if (grade >= 60 && grade <= 69)
	{
		return_letter_grade = "D";
	}
	else if (grade >= 00 && grade <= 59)
	{
		return_letter_grade = "F";
	}
	else 
	{
		return_letter_grade= "Invalid grade";
	}

}

std::string get_letter_grade_using_switch(int grade)
{
    std::string return_letter_grade;

    switch(grade)
    {
    case 1:
        return_letter_grade = "grade 1";
        break;
    case 2:
        return_letter_grade = "grade 2";
        break;
    case 3:
        return_letter_grade = "grade 3";
        break;
    case 4:
        return_letter_grade = "grade 4";
        break;
	case 5:
		return_letter_grade = "grade 5";
		break;
    default:
        return_letter_grade = "Invalid grade";

    }

}


