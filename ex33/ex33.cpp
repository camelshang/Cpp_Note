#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	typedef vector<string>::size_type vec_sz;
	vector<string> words;
	vector<int> cnt;

	cout << "Enter your words : ";
	string s;
	while (cin >> s)
	{
		bool found = false;
		for (vec_sz sz = 0;sz < words.size();sz++)
		{
			if (s == words[sz])
			{
				++cnt[sz];
				found = true;
			}
		}
		if (!found)
		{
			words.push_back(s);
			cnt.push_back(1);
		}
	}

	for (vec_sz i = 0;i < words.size();i++)
		cout << words[i] << " : " << cnt[i] << endl;

	return 0;
}