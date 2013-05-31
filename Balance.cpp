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
	int t,m,n;

	cout<<"Введите свой баланс: ";
	cin>>t;

	myBalance.setBallance(t);
	myBalance.displayMessage();
	
	_getch();
	return 0;
}
