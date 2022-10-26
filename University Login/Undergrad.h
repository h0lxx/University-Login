#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <assert.h>
#include "Student.h"
#include <vector>
#include <array>

class Undergrad : public Student
{


protected:



public:

	std::string undergradNames[20];
	int* GetGrades();
	int SumAllGrades();
	int SetGrade( int studentGrade);
private:


	/*std::vector<int>UNDERGRAD_Y1 = { 56, 76,89 };
	std::vector<int>UNDERGRAD_Y2 = { 68, 54, 99 };
	std::vector<int>UNDERGRAD_Y3 = { 88, 97, 77 };
	std::vector<int>UNDERGRAD_Y4 = { 56, 86, 64 };*/


	struct Module
	{
		int firstyear;
		int secondyear;
		int thirdyear;
		int forthyear;

	};

	int studentGrade;
	int yearlygrades[4];
	

	//int studentGrades[UNDERGRAD_Y1][UNDERGRAD_Y2][UNDERGRAD_Y3] = { { 65, 66,78 }, { 47,77,89 }, { 89,98,55 } };

	 



};

