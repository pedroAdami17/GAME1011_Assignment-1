#include <iostream>
using namespace std;

int numOfStudents;

class Person
{
	/*What I think I need here and for all the other classes:
	 *Declare all the necessary ints and strings.
	 */
public:
	string name;
	int age;
};

class Student : public Person
{
public:
	string collegeName, courseEnrolled;
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
	/*Create an array using the numOfStudents as the size.
	 *Make all the calculations that we need
	 *Return the final  output.
	 */
};

int main()
{
	char surveyReady = 0;

	cout << "Hello! This is a survey simulator program. \n";
	cout << "Please enter the number of students that will participate between 1 and 500! \n";
	cin >> numOfStudents;
	
	while(surveyReady != 'y')
	{
		cout << "Are you ready to process the survey?(y/n)." << endl;
		cin >> surveyReady;
	}

	if (surveyReady == 'y')
		cout << "hey" << endl;

	return 0;
}

