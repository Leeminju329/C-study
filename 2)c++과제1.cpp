#include<iostream>
using namespace std;

int main()
{
	int number[5];
	int a;
	int b=0, c = 0;
	int even[10];//¦
	int odd[10];//Ȧ

	for (a = 0; a < 5; a++)
	{
		cout << "���ڸ� �Է����ּ���: ";
		cin >> number[a];
	}

	for (a = 0; a < 5; a++)
	{
		if (number[a] % 2 == 1) //Ȧ���� ���
		{
			odd[b] = number[a];
			b++;

		}
		else if (number[a]%2 == 0) //¦���� ���
		{
			even[c] = number[a];
			c++;
		}
	}



	cout << "\n--------���---------" << "\n";
	cout << "Ȧ��: ";
	for (a = 0; a < b; a++)
	{
		cout << odd[a] << " ";
	}
	cout << "\nȦ���� ��" << b << "�� �Դϴ�."<<"\n\n";

	cout << "¦��: ";
	for (a = 0; a < c; a++)
	{
		cout << even[a] << " ";
	}
	cout << "\n¦���� ��" << c << "�� �Դϴ�.";


}