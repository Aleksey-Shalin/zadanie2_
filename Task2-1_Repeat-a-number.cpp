#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "");
	double number;
	std::cout << "Пожалуйста, введите любое число: \n";
	std::cin >> number;
	std::cout << " " << '\n'; // Здесь пробел между строками. Вероятно, есть другой способ реализации, но меня посетил только этот
	std::cout << "Вы ввели число: \n" << number;
	return 0;
}
