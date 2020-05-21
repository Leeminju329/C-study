#include<iostream>


int main()
{
	using namespace std;
	int num, hang; //hang은 행의 수와 홀수 입력값
	int a, b, c;
	

	while (1)
	{
		cout << "------- 별 찍기 시스템 -------" << "\n" << "만들고 싶은 모양을 선택해주세요." << "\n" << "1. 직각삼각형\n2. 정삼각형\n3. 나비\n4. 나가기" << "\n";
		cin >> num;
		cout << "\n\n";

		switch (num) // switch case문 : 여러 case 중 하나를 선택하기 위함.
		{
		case 1:
			cout << "직각삼각형을 선택하셨습니다." << "\n" << "행의 개수를 선택해주세요" << "\n";
			cin >> hang;

			//1번째 직각삼각형
			for (a = 1; a <= hang; a++)
			{


				for (b = 0; b <= hang-a;b++ )
				{
					cout << "";

				}
				for (c = 1; c<=a ; c++)
				{
					cout << "*";
				
				}cout << "\n";
			}
			cout << "\n";
			// hang이 4이고 a가 2라고 가정하면, a=2인 경우 b=0,1,2로 공백이 3칸 생길것이고 c=1,2로 *이 두 개 찍히게 된다. 
			// 이와 같은 형태로 변형하여 반복하다 보면 아래 모양들을 만들어낼 수 있다.
			

			//2번째 직각삼각형
			for (a = 0; a < hang; a++)
			{
				for (b = hang; b > a; b--)
				{
					cout << "*";
				}
				cout << "\n";
			}
			cout << "\n";
			


			//3번째 직각삼각형
			for (a = 0; a < hang; a++)
			{
				for (b = 0; b < a; b++)
				{
					cout << "";
				}

				for (c = hang; c > a; c--)
				{
					cout << "*";
				}

				cout << "\n";
			}
			// 첫번째 줄은 공백이 필요없이 *이 찍혀야 하는 삼각형이다. 
			//따라서 hang이 4라고 가정하고 a=0일 때, b(공백)이 출력되지 않도록 설정하였으며, c=4(*모양 출력)이 되도록 설정하였다. 
			break;





		case 2:
			cout << "정삼각형을 선택하셨습니다." << "\n" << "행의 개수를 선택해주세요" << "\n";
			cin >> hang;

			for (a = 0; a < hang; a++)
			{
				for (b = 0; b < hang - a - 1; b++)
				{
					cout << "";
				
				}
				for (c = 0; c < (a *2)+1; c++) // 홀수개를 출력해야하기 때문에 a*2에 +1을 해줬다.
				{
					cout << "*";

				}cout << "\n";
			}
			
			break;
			


		case 3:
			
				cout << "나비를 선택하셨습니다."<<"\n";

				do
				{
					cout << "홀수를 입력해주세요 : ";
					cin >> hang;
					
				} while (hang % 2 == 0);
				//hang에 홀수가 입력될때까지 반복한다.


				// 많이 시도해봤는데 실력이 부족해서 나비 모양은 만들지 못했습니다. 저에겐 아직 너무 어려운것 같습니다..




				
		default:
			cout << "나가기를 선택하셨습니다." << "\n" << "감사합니다.";
		
		}break;
	}
}
