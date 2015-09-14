#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	cout << "Please enter your name : ";
	string name;
	cin >> name;
	const string greeting = "hello, " + name + "!";
	const string outgreeting = "* "  + greeting + " *";
	const string decorate(outgreeting.size(), '*');
	cout << decorate << endl
		<< outgreeting << endl
		<< decorate << endl;
	return 0;
}