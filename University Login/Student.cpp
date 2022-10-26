#include "Student.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <assert.h>


Menu Smenu;


void Student::HoldLecture()
{
	std::string UserInput;
	std::cout << "Displaying your current lectures." << std::endl;
	std::cout << "You have one lecture this week would you like to see more info about it? " << std::endl;
	std::cout << " User 1-Yes, 2-No" << std::endl;
	
	std::cin.ignore();
	std::cin.clear();
	
	std::getline(std::cin, UserInput);
	
	if (UserInput == "yes")
	{
		std::cout << "Your Lecturer is " << Student::GetLecturer() << std::endl;
		std::cout << "Room Number: " << Student::GetLectureRoom() << std::endl;
		std::cout << "Lecture Time " << Student::GetLectureTime() << std::endl;
		


	}

	else
	{

		Smenu.isInputTrue = false;
	}

}

void Student::DisplayBrochure()
{
}

void Student::DisplayStudentInfo()
{
	std::cout << "" << GetName() << std::endl;
	std::cout << "" << GetAddress() << std::endl;
	std::cout << "" << GetAge() << std::endl;
	std::cout << "" << GetID() << std::endl;
	std::cout << "" << GetNumber() << std::endl;
	std::cout << "Use 1-myinfo, 2-lectures, 3-brochure or 4-university " << std::endl;

}

int Student::GetLectureRoom() const
{

	return LectureRoom;

}


int Student::GetLectureTime() const
{


	return LectureTime;
}

const std::string& Student::GetLecturer() const
{

	return Lecturer;


}




	int Student::GetID() const
	{
		return 0;
	}

	int Student::GetAge() const
	{

		return age;


	}

	int Student::GetNumber() const
	{
		return number;
	}

	const std::string& Student::GetName() const
	{
		return name;
	}


	const std::string& Student::GetAddress() const
	{
		return address;
	}

	void Student::SetID(int ID)
	{
	}

	void Student::SetAge(int age)
	{
		this->age = age;
	}

	void Student::SetName(const std::string& name)
	{
		this->name = name;
	}

	void Student::SetNumber(int number)
	{
		this->number = number;
	}

	void Student::SetAddress(const std::string& address)
	{
		this->address = address;
	}

	void Student::Learn()
	{
		
	}

	
