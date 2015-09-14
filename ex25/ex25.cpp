#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// square 
	const int length = 4;
	for (int r = 0;r != length;++r)
	{
		string::size_type c = 0;
		while (c != length)
		{
			if (r == 0 || r == length - 1 || c == 0 || c == length - 1)
				cout << "* ";
			else
				cout << "  ";
			++c;
		}
		cout << endl;
	}
	cout << endl;

	//triangle

	return 0;
}    