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
	std::cout << "������� ����� ������: ";
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

	std::cout << "������� ����� �����: ";
	std::cin >> Num;
	std::cout << "������� ��� ���������: ";
	std::cin >> F_name;
	std::cout << "������� ������: ";
	std::cin >> Sum;
	Account Client = {.Name = F_name, .Number = Num, .Summa = Sum };
	
	change_summa(&Client);
	
	std::cout << "��� ����: " << Client.Name << ", " << Client.Number << ", " << Client.Summa << " " << std::endl;
	std::cout << std::endl;

	return EXIT_SUCCESS;
}