#include <iostream>
#include <string>

using namespace std;


int add(int x, int y) {
	return x + y;
}

void greet(string name)
{
	string greet = "Hello ";

	cout << greet + name << std::endl;
	cin.get();

}


int main()
{
	int c = add(10, 20);

	greet("Andrei");

	std::cout << c << std::endl;
	std::cout << "Hello World !" << std::endl;
	std::cin.get();
}

