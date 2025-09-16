#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string word;
	std::cout << "Пожалуйста, введите слово: \n";
	std::cin >> word;
	std::cout << " " << '\n';
	std::cout << "Вы ввели слово: \n" << word;
	return 0;
}
