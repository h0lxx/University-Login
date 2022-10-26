#include "Menu.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <assert.h>


Student student;


void Menu::MainMenu()
{
	
	
	while (Menu::isInputTrue == true)
	{
		std::string UserInput;
		int UserInput2 ;

		std::cout << "***********************" << std::endl;
		std::cout << "Please procced with your registration" << std::endl;
		std::cout << "Enter name" << std::endl;

		std::getline(std::cin, UserInput);
		student.SetName(UserInput);
		std::cout << "Your name is now stored. " << std::endl;

		std::cout << "Enter your Address please." << std::endl;
		std::getline(std::cin, UserInput);
		student.SetAddress(UserInput);

		std::cout << "Would you like to procced with Age, ID and Number details?" << std::endl;

		std::getline(std::cin, UserInput);

		if (UserInput == "yes")
		{
			std::cout << "Great input your Age please." << std::endl;
			std::cin >> UserInput2;
			if (UserInput2 >= 18 && UserInput2 <= 75)
			{
				student.SetAge(UserInput2);
				std::cout << "Your age has been set." << std::endl;
			}
			Menu::isInputTrue = true;

		}

		else
		{
			std::cout << " Please start over..." << std::endl;
			Menu::isInputTrue = false;
			break;
		}

		std::cout << "Enter your phone number now please." << std::endl;
		std::cin >> UserInput2;

		if (UserInput2 > 0 )
		{
			student.SetNumber(UserInput2);
			std::cout << "Great your phone number has been set.  " << std::endl;
			std::cout << "You will be given a new ID from the system. " << std::endl;
			std::cout << "Great, All of your details are stored, would you like to see them or procceed to see your lectures " << std::endl;
			std::cout << "Use 1-myinfo, 2-lectures, 3-brochure or 4-university " << std::endl;


			Menu::isInputTrue = true;
		}

		else
		{
			std::cout << " Please start over..." << std::endl;
			Menu::isInputTrue = false;
		}
		std::cout << "Now please choose." << std::endl;
		
		std::cin >> UserInput2;
		if (UserInput2 == 1)
		{
			student.DisplayStudentInfo();
			Menu::isInputTrue = true;

		}


		 if (UserInput2 == 2)
		 {
			student.HoldLecture();
			Menu::isInputTrue = true;


			

			


		 }


		
		else
		{
			
			 break;
		}


	}
	
}


