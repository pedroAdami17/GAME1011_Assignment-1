#include <iostream>
using namespace std;

int numOfStudents;

class Person
{
private:
	const char *name[32] = { "Joseph", "Daniel", "Mark", "Lucas", "Pedro", "John", "Jason", "Justin", "Kevin", "Isaac", "Erik",
		"Andy", "Paul", "Ricardo", "Nick", "Blake", "Fred", "Bruce", "Susan","Anna","Barbara","Nancy","Donna","Cindy","Lisa",
		"Maggie","Molly","Vera","Tina","Brenda","Lucy","Janet"};
	const char *age[33] = { "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33",
		"34", "35", "36","37","38","39","40","41","42","43","44","45","46","47","48","49","50"};
public:
	
	
};

class Student : public Person
{
public:
	const char *collegeName[10]{"Centennial College","Georgian College", "Humber College", "St. Lawrence College",
		"George Brown College", "Niagara College", "Seneca College"};
	const char *courseEnrolled[15]{"Game Programming","Graphic Design","Fashion Management","Business","Marketing",
		"Mechanical Engineering","Culinary Arts","3D Animation"};
	const char *semester[8]{"1","2","3","4","5","6","7","8",};
};

class NonGamingStudent : public Student
{
	const char *streamingServ[6]{"Netflix","Youtube","Amazon Prime","Disney+","Hulu","HBO Max"};
	const char *hoursNum[5]{ "1", "2", "3", "4", "5" };
};

class GamingStudent : public Student
{
	const char *gamingDevice[6]{ "PS4", "PS5", "PC", "Xbox One", "Xbox Series X", "Mobile"};
	const char *hoursNum[5]{"1", "2", "3", "4", "5"};
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

class Survey
{
	/*Create an array using the numOfStudents as the size.
	 *Make all the calculations that we need
	 *Return the final  output.
	 */
	//if(surveyReady == 'y')
		//do stuff
	void cx (int xss)
	{
		;;
	}
};

/*To randomize the number of gaming/non gaming students, create a random number between 1 and the max value...
 * and assign it for gaming students. Subtract this number from total and assign it to the non gaming students.
 */