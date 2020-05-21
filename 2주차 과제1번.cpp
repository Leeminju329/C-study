#include<iostream>
using namespace std;

int main()
{
	int number[5];
	int a;
	int b=0, c = 0;
	int even[10];//짝
	int odd[10];//홀

	for (a = 0; a < 5; a++)
	{
		cout << "숫자를 입력해주세요: ";
		cin >> number[a];
	}

	for (a = 0; a < 5; a++)
	{
		if (number[a] % 2 == 1) //홀수인 경우
		{
			odd[b] = number[a];
			b++;

		}
		else if (number[a]%2 == 0) //짝수인 경우
		{
			even[c] = number[a];
			c++;
		}
	}



	cout << "\n--------결과---------" << "\n";
	cout << "홀수: ";
	for (a = 0; a < b; a++)
	{
		cout << odd[a] << " ";
	}
	cout << "\n홀수는 총" << b << "개 입니다."<<"\n\n";

	cout << "짝수: ";
	for (a = 0; a < c; a++)
	{
		cout << even[a] << " ";
	}
	cout << "\n짝수는 총" << c << "개 입니다.";


}
