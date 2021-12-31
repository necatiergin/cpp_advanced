#include<iostream>
#include<variant>

class Data {
public:
	Data(int x) : mx{ x } {}
private:
	int mx;
};

int main()
{
	using namespace std;

	variant<monostate, int, double, Data> vx; // valid
	std::cout << "index = " << vx.index() << '\n'; // 0

	variant<Data, int> va; //Error
	
	variant<monostate, Data, int, double> vy; // valid
	std::cout << "index = " << vy.index() << '\n'; // 0
	
	if (holds_alternative<monostate>(vy)) 
	{
		std::cout << "Variant bos\n";
	}
}
