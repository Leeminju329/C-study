#include <iostream>

int main()
{
	char name[100];
	char birthday[100];
	char age[100];
	char department[100];
	char food[100];

	std::cout << "이름을 입력하세요: ";
	std::cin >> name;
	std::cout << "생일을 입력하세요: ";
	std::cin >> birthday;
	std::cout << "나이를 입력하세요: ";
	std::cin >> age;
	std::cout << "소속 학과를 입력하세요: ";
	std::cin >> department;
	std::cout << "좋아하는 음식은?: ";
	std:: cin >> food;

	std::cout << "=============================================="<<'\n';
	std::cout << "<회원정보>" << '\n';
	std::cout << "이름: " << name << '\n';
	std::cout << "생일:  " << birthday << '\n';
	std::cout << "나이: " << age << '\n';
	std::cout << "소속 학과: " << department << '\n';
	std::cout << "좋아하는 음식: " << food << '\n';

}