#include<format>
#include<iostream>
#include <locale>

int main()
{
	using namespace std;

	locale::global(locale{ "turkish" }); // locale changed
	std::cout << 123.96585 << '\n'; // 123.96585
	std::cout << format("{:L}\n", 4.56) << '\n';  // 4,45
}
