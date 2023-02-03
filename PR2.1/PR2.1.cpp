#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	double num1, num2, result;
	int a;
	while (true)
	{
		cout <<"1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Возведение в степень\n6.Корень из числа\n7.Процент от числа\n0.Выход\n ";
		Sleep(5000);
		system("cls");
		cout << "Выберите действие:\n";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Введите любое число (При вводе 0 выйдите в меню) ";
			cin >> num1;
			if (num1 == 0)
			{
				system("cls");
				break;
			}
			else
			{
				cout << "Введите второе число ";
				cin >> num2;
				result = num1 + num2;
				cout << "Результат:" << result;
				Sleep(3000);
				system("cls");
				break;
			}
		case 2:
			cout << "Введите любое число (При вводе 0 выйдите в меню) ";
			cin >> num1;
			if (num1 == 0)
			{
				system("cls");
				break;
			}
			else
			{
				cout << "Введите второе число ";
				cin >> num2;
				result = num1 - num2;
				cout << "Результат:" << result;
				Sleep(3000);
				system("cls");
				break;
			}
		case 3:
			cout << "Введите любое число (При вводе 0 выйдите в меню) ";
			cin >> num1;
			if (num1 == 0)
			{
				system("cls");
				break;
			}
			else
			{
				cout << "Введите второе число ";
				cin >> num2;
				result = num1 * num2;
				cout << "Результат:" << result;
				Sleep(3000);
				system("cls");
				break;
			}
		case 4:
			cout << "Введите первое число (При вводе 0 выйдите в меню) ";
			cin >> num1;
			if (num1 == 0)
			{
				system("cls");
				break;
			}
			cout << "Введите второе число ";
			cin >> num2;
			if (num2 == 0)
			{
				cout << "На ноль делить нельзя";
				Sleep(3000);
				system("cls");
			}
			else
			{
				result = num1 / num2;
				cout << "Результат:" << result;
				Sleep(3000);
				system("cls");
			}
			break;
		case 5:
			cout << "Введите число которое будет возводиться в степень или 0 для выхода в меню ";
			cin >> num1;
			if (num1 == 0)
			{
				system("cls");
				break;
			}
			else
			{
				cout << "Введите степень ";
				cin >> num2;
				result = pow(num1, num2);
				cout << "Результат:" << result;
				Sleep(3000);
				system("cls");
			}
			break;
		case 6:
			cout << "Введите число из которого хотите извлечь корень (При вводе 0 выйдите в меню) ";
			cin >> num1;
			if (num1 < 0)
			{
				cout << "Нет корня из отрицательного числа, попробуйте снова ";
				Sleep(3000);
				system("cls");
				break;
			}
			else if (num1 == 0)
			{
				system("cls");
				break;
			}
			else
			{
				result = sqrt(num1);
				cout << "Результат:" << result;
				Sleep(3000);
				system("cls");
			}
			break;
		case 7:
			cout << "Введите число процент которого вы хотите найти (При вводе 0 выйдите в меню) ";
			cin >> num1;
			if (num1 == 0)
			{
				system("cls");
				break;
			}
			cout << "Введите число от которого вы будете искать процент ";
			cin >> num2;
			if (num2 == 0)
			{
				cout << "На ноль не делят, здесь так не принято";
				Sleep(5000);
				system("cls");
			}
			else
			{
				result = (num1 / num2) * 100;
				cout << "Результат:" << result << "%";
				Sleep(3000);
				system("cls");
			}
			break;
		case 0:
			cout << "HAPPY END!";
			return 0;
			break;
		}
	}
}