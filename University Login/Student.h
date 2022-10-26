#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <assert.h>
#include "Menu.h"


class Student
{



private:




	int ID = { 0 };
	int age = { 0 };
	int number = { 0 };
	int LectureTime{ 10 };
	int LectureRoom{ 4 };

	std::string name;
	std::string address;


	std::string Lecturer = "Karsten";


	//std::string userPass;
	//std::array<Student, maxStudents> students;


public:


	//void GetLoginPassword(std::string& password, std::string userPass);
	//void GetLoginName(std::string& user, std::string& userInput);

	void HoldLecture();

	//void EnrolStudent(const Student& student);

	void DisplayBrochure();
	void DisplayStudentInfo();

	int GetID() const;
	int GetAge() const;
	int GetNumber() const;
	int GetLectureRoom() const;
	int GetLectureTime() const;

	const std::string& GetName() const;
	const std::string& GetAddress() const;
	const std::string& GetLecturer() const;

	void SetID(int ID);
	void SetAge(int age);
	void SetNumber(int number);
	//void SetLectureRoom(int LectureRoom);

	void SetName(const std::string& name);
	void SetAddress(const std::string& address);

	void Learn();


	


};