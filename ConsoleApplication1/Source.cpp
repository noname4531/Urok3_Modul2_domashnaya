#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale.h>	
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
start:
	cout << " Ââåäèòå íîìåð çàäàíèÿ: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		int A;
		cout << " Ââåäèòå ÷èñëî: ";
		cin >> A;
		if (A % 2==0)
		{
		cout << " Èñòèíà: ";
		}
		else
		{
		cout << " Ëîæü: ";
		}
	}
	if (x == 2)
	{
		int A;
		cout << " Ââåäèòå ÷èñëî A: ";
		cin >> A;
		if ((A % 2 ==0) || (A % 3 ==0)) //êðàòíî äâóì èëè òðåì
		{
		cout << " Èñòèíà: ";
		}
		else
		{
		cout << " Ëîæü: ";
		}
	}
	if (x == 3)
	{
		int A, B;
		cout << " Ââåäèòè ÷èñëî À: ";
		cin >> A;
		cout << " Ââåäèòå ÷èñëî Â: ";
		cin >> B;
		if ((A % 2) && (B % 2))
		{
		cout << " Èñòèíà: ";
		}
		else
		{
		cout << " Ëîæü: ";
		}
	}
	if (x == 4)
	{
		int X, Y, Z;
		X = 0;
		Y = 0;
		Z = 1;
		bool d;
		d = (X < Y) && (Y > Z);
		cout << d << endl;
		d = (X > Y);
		cout << d << endl;
		d = (X > Z) < Y;
		cout << d << endl;
	}
	if (x == 51)
	{
		int y, tg, x;
		cout << " Ââåäèòå õ:";
		cin >> x;
		cout << " Ââåäèòå çíà÷åíèå òàíãåíñà: ";
		cin >> tg;
		y = 2*tg*x;
		cout << " Îòâåò: " << y << "\n";

	}
	if (x == 52)
	{
		float y, x;
		cout << " Ââåäèòå õ: ";
		cin >> x;
		y = 3 / (x - 1);
		cout << " Îòâåò: " << y << endl;
	}
	if (x == 6)
	{
	int A, B, C;
		A = 1;
		B = 0;
		C = 1;
		bool d;
		d = A < (A > B) < C;
		cout << d << endl;
		d = A < C > (B < C);
		cout << d << endl;
		d = (A < B > C) < A;
		cout << d << endl;
	}
	if (x == 7)
	{
		int A;
		cout << " Ââåäèòå ÷èñëî À: ";
		cin >> A;
		if ((A > 9) && (A < 100))
		{
		cout << " Èñòèíà: ";
		}
		else
		{
		cout << " Ëîæü: ";
		}
	}
	if (x == 8)
	{
		int A, B, C;
		cout << " Ââåäèòå ÷èñëî A: ";
		cin >> A;
		cout << " Ââåäèòå ÷èñëî B: ";
		cin >> B;
		cout << " Ââåäèòå ÷èñëî Ñ: ";
		cin >> C;
		if ((A < 45) || (B < 45) || (C < 45))
		{
		cout << " Èñòèíà: ";
		}
		else
		{
		cout << " Ëîæü: ";
		}
	}
	if (x == 9)
	{
		int A;
		cout << " Ââåäèòå ÷èñëî À: ";
		cin >> A;
		if ((A % 3) && (A != 0))
		{
		cout << " Èñòèíà: ";
		}
		else
		{
		cout << " Ëîæü: ";
		}
	}
	if (x == 10)
	{
		int A;
		cout << " Ââåäèòå ÷èñëî À: ";
		cin >> A;
		if ((A > -123) && (A < -51))
		{
			cout << " Èñòèíà: ";
		}
		if ((A > 55) && (A < 123))
		{
			cout << " Èñòèíà: ";
		}
		else
		{
			cout << " Ëîæü: ";
		}
	}
}