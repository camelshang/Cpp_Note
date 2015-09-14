#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::sort;

int main()
{
	cout << "Please enter you name : ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl;

	cout << "Please input you midterm and final exam grades : ";
	double midterm, final;
	cin >> midterm >> final;
	cout << "Enter your all homework grades, ending with end-of-file : ";

	vector<double> homework;
	double each;
	while (cin >> each)
		homework.push_back(each);

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0)
	{
		cout << "You must enter your homework grades."
			<< "Please try again." << endl;
		return 1;
	}
	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;
	double median = 0.0;
	median = (size % 2 == 0) ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

	//�����������Ϊ�޸�ǰ�ľ��� 
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2*midterm + 0.4*final + 0.4*median
		<< setprecision(prec) << endl;
	return 0;

}