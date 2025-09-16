#include<iostream>
#include<windows.h>
#include<string>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string sentence;
	std::cout << "Пожалуйста, введите предложение: \n";
	std::getline(std::cin >> std::ws, sentence);
	std::cout << " " << '\n';
	std::cout << "Вы ввели предложение: \n" << sentence;
	return EXIT_SUCCESS;
}
