#include <iostream>

int main()
{
	int pin, tries;

	std::cout << "Swiss Bank\n";
  std::cout << "Enter your PIN: \n";
	std::cin >> pin;
  tries++;

	while (pin != 1234 && tries < 3)
	{

		std::cout << "Enter your PIN: \n";
		std::cin >> pin;
		tries++;
	}

	if (pin == 1234)
	{
		std::cout << "PIN accepted!\nYou now have access.\n";
	}
} 
