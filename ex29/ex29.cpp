#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Please enter two numbers : ";
	int n1, n2;
	cin >> n1 >> n2;
	cout << n1 << (n1>n2 ? ">":"<") << n2 << endl;
	return 0;
}