// GAME1011_Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int numOfStudents;

int main()
{
    cout << "Hello! This is a survey simulator program. \n";
	cout << "Please enter the number of students that will participate between 1 and 500! \n";
	cin >> numOfStudents;
	cout << /*Here output the survey class ressults*/ endl;
}

class Person
{
public:
	string name;
	int age;
};

class Student : public Person
{
public:
	string collegeName;
	string courseEnrolled;
	int semester;
};

class NonGamingStudent : public Student
{
	string streamingServ;
	int hoursNum;
};

class GamingStudent : public Student
{
	string gamingDevice;
	int hoursNum;
};

class Survey
{
	
};

