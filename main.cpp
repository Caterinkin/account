#include <iostream>
#include <string>
#include <windows.h>

 
struct Account
{
	std::string Name;
	int Number;
	float Summa;
};

Account change_summa(Account Client, float Summa)
{
	Client.Summa = Summa;
	return Client;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float Summa;
	Account Client;

	std::cout << "Введите номер счёта: ";
	std::cin >> Client.Number;
	std::cout << "Введите имя владельца: ";
	std::cin >> Client.Name;
	std::cout << "Введите баланс: ";
	std::cin >> Client.Summa;
	std::cout << "Введите новый баланс: ";
	std::cin >> Summa;
	std::cout << std::endl;
	
    Client = change_summa (Client, Summa);
	
	std::cout << "Ваш счёт: " << Client.Name << ", " << Client.Number << ", " << Client.Summa << " " << std::endl;
	
	return EXIT_SUCCESS;
}
