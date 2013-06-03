// Balance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "join.h"
#include "Saver.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, "Russian");
	Balance myBalance;
	int t,m,b,v,c;
	const double n=0.03;
	
	cout<<"Введите свой баланс: ";
	cin>>t;
	m=t;
	
	cout<<endl<<"Введите количество месяцев, через которое вы хотите узнать баланс: ";
	cin>>v;

	myBalance.setBallance(t);/*-------Начальный Баланс---------*/
	myBalance.setSaver1(m);/*-------Начальный Баланс---------*/
	myBalance.setProcent(n);/*-------Процент---------*/
	myBalance.setPrirost(t*n);/*--------Прирост--------*/
	myBalance.setSaver2(m+(t*n)*(v/12));/*-------Общая сумма за месячный Прирост-------*/
	myBalance.displayMessage();/*-------Вывод---------*/
	
	_getch();
	return 0;
}
