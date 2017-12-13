#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

string str;
int i;

char Read();
bool S0();
bool S1();
bool S2();
bool S3();
bool S4();
bool Odd(char);
bool Even(char);
bool EvenWithout0(char);

int main()
{
	setlocale(LC_ALL,"Russian");
	
	do
	{
		system("cls");
		
		cout << "Êðàòíî 10 è íå êðàòíî 4" << endl
		<< "Ââåäèòå ÷èñëî: ";
		
		getline(cin, str);
		i = 0;
		
		if (S0())
			cout << "-принадлежит грамматике" << endl;
		else
			cout << "-не принадлежит грамматике" << endl;
			
		cout << endl << "Для того, чтобы закончить работу, нажмите 1" << endl
		<< "Чтобы продолжить, нажмите любую клавишу" << endl;
			
	} while (getch() != '1');
	
	return 0;
}

bool S0()
{
	char ch = Read();
	
	if (ch == '-')
		return S1();
	else if (Odd(ch))
		return S2();
	else if (EvenWithout0(ch))
		return S3();
	else
		return false;
}

bool S1()
{
	char ch = Read();
	
	if (Odd(ch))
		return S2();
	else if (EvenWithout0(ch))
		return S3();
	else
		return false;	
}

bool S2()
{
	char ch = Read();
	
	if (ch == '0')
		return S4();
	else if (EvenWithout0(ch))
		return S3();
	else if (Odd(ch))
		return S2();
	else
		return false;
}

bool S3()
{
	char ch = Read();
	
	if (Even(ch))
		return S3();
	else if (Odd(ch))
		return S2();
	else
		return false;
}

bool S4()
{
	char ch = Read();
	
	if (ch == '\0')
		return true;
	else if (Even(ch))
		return S3();
	else if (Odd(ch))
		return S2();
	else
		return false;
}

bool Odd(char ch)
{
	string odd = "13579";
	
	if (odd.find(ch) != -1)
		return true;
	else
		return false;
}

bool Even(char ch)
{
	string even = "02468";
	
	if (even.find(ch) != -1)
		return true;
	else
		return false;
}

bool EvenWithout0(char ch)
{
	string evenWithout0 = "02468";
	
	if (evenWithout0.find(ch) != -1)
		return true;
	else
		return false;
}

char Read() { return str[i++]; }




