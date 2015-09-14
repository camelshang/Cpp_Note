#include <iostream>
#include <string>
int main()
{
	std::cout << "Please enter you name : ";
	std::string name;
	std::cin >> name;

	{ const std::string greeting = "Hello, " + name + "!";
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	const std::string first(second.size(), '*');

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl; }

	// ex 11
	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";
	std::cout << message << std::endl;

	// ex 12 两个字符串不能直接相加
	const std::string exclam = "!";
	// const std::string msg = "hello" + ", world" + exclam;

	return 0;
}