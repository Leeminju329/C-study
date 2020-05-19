#include<iostream>
using namespace std;

int main()
{
	int number[5];
	int a;
	int b=0, c = 0;
	int even[10];//Â¦
	int odd[10];//È¦

	for (a = 0; a < 5; a++)
	{
		cout << "¼ıÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä: ";
		cin >> number[a];
	}

	for (a = 0; a < 5; a++)
	{
		if (number[a] % 2 == 1) //È¦¼öÀÎ °æ¿ì
		{
			odd[b] = number[a];
			b++;

		}
		else if (number[a]%2 == 0) //Â¦¼öÀÎ °æ¿ì
		{
			even[c] = number[a];
			c++;
		}
	}



	cout << "\n--------°á°ú---------" << "\n";
	cout << "È¦¼ö: ";
	for (a = 0; a < b; a++)
	{
		cout << odd[a] << " ";
	}
	cout << "\nÈ¦¼ö´Â ÃÑ" << b << "°³ ÀÔ´Ï´Ù."<<"\n\n";

	cout << "Â¦¼ö: ";
	for (a = 0; a < c; a++)
	{
		cout << even[a] << " ";
	}
	cout << "\nÂ¦¼ö´Â ÃÑ" << c << "°³ ÀÔ´Ï´Ù.";


}