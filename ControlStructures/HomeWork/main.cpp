#include <iostream>
#include <string>
#include <map>
#include <list>
#include <conio.h>
#include <Windows.h>

#define _GAI_TYPE_ <const std::string, std::list<std::string>>
void add_protocol(std::map _GAI_TYPE_& base) {
	std::cout << "�������� ��������:" << std::endl;
	std::cout << "------------------" << std::endl;
	std::pair < std::string, std::list<std::string>> temp;
	std::cout << "������� ����� ��:" << std::endl; std::getline(std::cin, temp.first);
	for (std::pair _GAI_TYPE_& i : base)
	{
		if (!(i.first == temp.first))
		{
			std::cout << "����� �� ��� � ���� � ��� ����� ���������" << std::endl;
			std::string tag; std::cout << "��������  ���������:" << std::endl;
			std::getline(std::cin, tag);
			temp.second.push_back(tag);
			base.insert(temp);
			break;
		}
		else
		{
			std::cout << "������ �� ���� � ����. ��������: ";
			for (std::string j : i.second)
			{
				std::cout << j << " | ";
			}
			std::cout << "\n�������� ���������:";
			std::string tag; std::getline(std::cin, tag);
			i.second.push_back(tag);
			break;
		}
	}
}


void print(std::map _GAI_TYPE_ base)
{
	std::cout << "-----------------------------------------------------------------------------" << std::endl
		<< "|    ����� ��    |                   ���������                              |" << std::endl
		<< "-----------------------------------------------------------------------------" << std::endl;
	for (std::pair<std::string, std::list<std::string>> i : base)
	{

		std::cout << "| " << i.first << " | ";
		for (std::string j : i.second)
		{
			std::cout << j << " | ";
		}
		std::cout << std::endl;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	system("pause");
}
void menu()
{
	system("CLS");
	std::cout << "0 - �����" << std::endl
		<< "1 - �������" << std::endl
		<< "2 - �������" << std::endl;

}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::map _GAI_TYPE_ gai{ {"123",{"������� �� �������","����� �� ���� �����","�� ��������� ��������"}} };

	char key;
	do
	{
		system("CLS");
		menu();
		key = _getch();
		switch (key)

		{
		case'1':add_protocol(gai); break;
		case '2':print(gai); break;

		default:
			break;
		}
	} while (key != '0');
}