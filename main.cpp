#include <iostream>
#include <string>
#include <windows.h>


struct Account
{
	std::string Name;
	int Number;
	float Summa;

};
static void change_summa( Account *a)
{
	float Sum_new;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> Sum_new;
	a->Summa = Sum_new;
}

int main()
{

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string F_name;
	int Num;
	float Sum;

	std::cout << "¬ведите номер счЄта: ";
	std::cin >> Num;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> F_name;
	std::cout << "¬ведите баланс: ";
	std::cin >> Sum;
	Account Client = {.Name = F_name, .Number = Num, .Summa = Sum };
	
	change_summa(&Client);
	
	std::cout << "¬аш счЄт: " << Client.Name << ", " << Client.Number << ", " << Client.Summa << " " << std::endl;
	std::cout << std::endl;

	return EXIT_SUCCESS;
}