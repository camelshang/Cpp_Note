#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

int main()
{
	vector<string> str;
	vector<int> len;
	string s;
	typedef vector<string>::size_type vec_sz;
	cout << "Enter some strings : ";
	while (cin >> s)
	{
		str.push_back(s);
		len.push_back(s.size());
	}
	cout << *max_element(len.begin(), len.end()) << endl;
	cout << *min_element(len.begin(), len.end()) << endl;
	/* cout << *minmax_element(len.begin(), len.end()).first << endl;
	 cout << *minmax_element(len.begin(), len.end()).second; */
	return 0;
}