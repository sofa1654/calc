#include <iostream> 

int main()
{
	float a;
	float b;
	char sign;
	std::cin >> a;
	std::cin >> sign;
	std::cin >> b;
	if (sign == '+') {
		std::cout << a + b;
	}
	else if (sign == '-') {
		std::cout << a - b;
	}
	else if (sign == '*') {
		std::cout << a * b;
	}
	else if (sign == '/' || sign == ':') {
		std::cout << a / b;
	}
}
