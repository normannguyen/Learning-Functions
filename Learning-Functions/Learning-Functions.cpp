//Norman Nguyen
//Program: Learning Functions with Interactive Fiction

#include <iostream>
#include <string>

using namespace std;

//Get Text from the user input
void WelcomeUser()
{
	cout << "Welcome to the new version of The (Unaccurate) Storytelling!\n\n";
	cout << "Much like the first game, you will be entering text from your choosing and it will print out the story." << endl;
}
//Get Text from the user input
string GetUserText()
{

	string userText;
	cin >> userText;
	return userText;
}
//Get Number from the user input
int GetUserNumber()
{
	int usersNumber;
	cin >> usersNumber;
	return usersNumber;
}
//Get Name from the user input
string GetUserName()
{
	string userName;
	cin >> userName;
	return userName;
}
void LineFormat()
{
	cout << "\n";
	cout << "________________________________________________\n\n";
	cout << "________________________________________________\n\n";
	cout << "\n";
}
//Main Function
int main()
{
	WelcomeUser();
	LineFormat();
	system("pause");

	GetUserName();
	LineFormat();
	system("pause");

	GetUserNumber();
	LineFormat();
	system("pause");

	GetUserText();
	LineFormat();
	system("pause");


	system("pause");
	return 0;
}