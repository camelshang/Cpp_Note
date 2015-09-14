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
	const int pad = 1;
	const int row = 2 * pad + 3;
	const string::size_type col = greeting.size() + 2 * pad + 2;
	cout << endl;

	for (int r = 0;r != row;++r)
	{
		string::size_type c = 0;
		while (c != col)
		{
			if (r == pad + 1 && c == pad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				if ( r == 0 || r == row - 1 || c == 0 || c == col - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				++c;
			}
		}
		cout << endl;
	}
	return 0;
}