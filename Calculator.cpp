#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
using namespace std;
float addition(float& a, float& b)
{
	return a + b;
}
float subtraction(float& a, float& b)
{
	return a - b;
}
float multiplication(float& a, float& b)
{
	return a * b;
}
float division(float& a, float& b)
{
	return a / b;
}
int remnant(int a, int b)
{
	return a % b;
}
long long int power(int a, int b)
{
	int sum = 1;
	for(int i = 1; i<=b; i++)
	{
		sum *= a;
	}
	return sum;
}
long long int factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);	
}
long long sumOf(int& start , int& end)
{
	int sum = 0; 
	for(int i = start; i<=end; i++)
	{
		sum += i;
	}
	return sum;
}
int gcdLcd(float& a, float& b)
{
	int gcd = 1;
	for(int i = 1; i<=a;i++)
	{
		if((int)a % i==0 && (int)b % i==0)
		{
			gcd = i;
		}
	}
	return gcd;	
}
int pNumber(int n,int& count)
{
	for(int i = 1; i<n; i++)
	{
		if(n % i==0)
		{
			count++;
			cout<<i<<"\t";
		}
	}
	return n;
	return count;
}
long long int fibonacci(int n)
{
	if(n==1 || n==2)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2);		
}
int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float a, b, n;
	char op;
	start:
	cout<<"Select the oparator[+,-,*,/,%,!,^,#,@[Sum of start...end],&[GCD,LCM],$[Prime number],f[Fibonachi]]: ";
	cin>>op;	
	SetConsoleTextAttribute(hConsole, 7);
	if(op=='+')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<addition(a,b);
	}
	else if(op=='-')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<subtraction(a,b);
	}
	else if(op=='*')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<multiplication(a,b);
	}
	else if(op=='/')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<division(a,b);
	}
	else if(op=='%')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<remnant(a,b);
	}
	else if(op=='!')
	{
		int sum = 1;
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"n: ";
		cin>>n;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<factorial(n);
	}
	else if(op=='^')
	{
		SetConsoleTextAttribute(hConsole, 4);
		int sum = 1;
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<power(a,b);
	}
	else if(op=='#')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"Number: ";
		cin>>a;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<sqrt(a);
	}
	else if(op=='@')
	{
		int start, end;
		int sum = 0;
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"Start of the range: ";
		cin>>start;
		cout<<"End of the range: ";
		cin>>end;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<sumOf(start,end);
	}
	else if(op=='&')
	{
		SetConsoleTextAttribute(hConsole, 4);
		int gcd = 1;
		cout<<"A: ";
		cin>>a;
		cout<<"B: ";
		cin>>b;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"GCD: "<<gcdLcd(a,b)<<endl;
		cout<<"LCM: "<<a*b/gcdLcd(a,b)<<endl;
	}
	else if(op=='$')
	{
		int count = 0;
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"Number: ";
		cin>>n;
		cout<<pNumber(n,count);
		cout<<"\n";
		if(count>=2)
		{
			SetConsoleTextAttribute(hConsole, 4);
			cout<<"Not prime";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 2);
			cout<<"Prime";
		}
	}
	else if(op=='f')
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout<<"fib(?): ";
		cin>>n;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"Resualt: "<<fibonacci(n);
	}	
	SetConsoleTextAttribute(hConsole, 7);	
	lable:
	cout<<"\n\nPress r to return to main menu";
	char ch = getch();
	if(ch=='r')
	{
		system("cls");
		goto start;
	}
	else 
	{
		cout<<"\nInvalid !";
		goto lable;	
	}	
} 
