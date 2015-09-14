#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int sum = 1;
	for (int i = 1;i < 10;i++)
	{
		sum *= i;
	}
	cout << sum << endl;
	return 0;
}