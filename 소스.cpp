#include <iostream>

int main()
{
	char name[100];
	char birthday[100];
	char age[100];
	char department[100];
	char food[100];

	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;
	std::cout << "������ �Է��ϼ���: ";
	std::cin >> birthday;
	std::cout << "���̸� �Է��ϼ���: ";
	std::cin >> age;
	std::cout << "�Ҽ� �а��� �Է��ϼ���: ";
	std::cin >> department;
	std::cout << "�����ϴ� ������?: ";
	std:: cin >> food;

	std::cout << "=============================================="<<'\n';
	std::cout << "<ȸ������>" << '\n';
	std::cout << "�̸�: " << name << '\n';
	std::cout << "����:  " << birthday << '\n';
	std::cout << "����: " << age << '\n';
	std::cout << "�Ҽ� �а�: " << department << '\n';
	std::cout << "�����ϴ� ����: " << food << '\n';

}