#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::endl;

int main()
{
	cout << "Please enter some integers : ";
	vector<int> ints;
	int x;
	while (cin >> x)
		ints.push_back(x);

	typedef vector<int>::size_type vec_sz;
	vec_sz sz = ints.size();
	if (sz == 0)
	{
		cout << "No integers.Please try again.";
		return 1;
	}

	sort(ints.begin(), ints.end());

	cout << endl;
	cout << "1st quartile :" ;
	for (vec_sz i = 0;i < ints.size() / 4;i++)
		cout << ints[i] << " ";

	cout << endl;
	cout << "2nd quartile :";
	for (vec_sz i = ints.size() / 4;i < ints.size() / 2;i++)
		cout << ints[i] << " ";

	cout << endl;
	cout << "3rd quartile :";
	for (vec_sz i = ints.size() / 2;i < ints.size()*3/4;i++)
		cout << ints[i] << " ";

	cout << endl;
	cout << "4th quartile :";
	for (vec_sz i = ints.size() * 3 / 4;i < ints.size();i++)
		cout << ints[i] << " ";

	return 0;
}