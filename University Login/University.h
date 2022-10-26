#pragma once
#include <string>
class University
{


public:

	enum class Months
	{
		January = 1,
		February = 2
	};

	int day{ 10 };
	Months month{ Months::February };
	int year{ 2023 };

	
	std::string celebrationAddress = "12th Avenue";







private:












};

