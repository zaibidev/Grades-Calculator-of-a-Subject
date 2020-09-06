#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num = NULL;
	string course_name;
	cout << "Enter course name: " << endl;
	getline(cin, course_name);
	cout << "Enter the marks: ";
	cin >> num;
	if (num <= 100 && num > 0)
	{
		cout << "Your grade in " << course_name << " is : ";
		if (num == 100)
		{
			cout << "A+";
		}
		else if (num >= 90 && num < 100)
		{
			cout << "A";
		}
		else if (num >= 80 && num < 90)
		{
			cout << "B";
		}
		else if (num >= 70 && num < 80)
		{
			cout << "C";
		}
		else if (num >= 60 && num < 70)
		{
			cout << "D";
		}
		else if (num <= 59 && num > 0)
		{
			cout << "F";
		}
	}
	else
	{
		cout << "Invalid Format! " << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}