#include "stdafx.h"
#include "join.h"
#include "Saver.h"

Balance::Balance()
{
}
void Balance::displayMessage()
{
	cout<<"Текущий баланс: "<<getSaver1()<<endl;
	cout<<"Общая сумма: "<<getSaver2()<<endl;
}
Balance::Balance(int bal, int pri, int vuv)
{
	setBallance(bal);
	setPrirost(pri);
	setVuvod(vuv);
}
void Balance::setBallance(int bal)
{
	Ballance=bal;
}
int Balance::getBallance()
{
	return Ballance;
}
void Balance::setVuvod(int vuv)
{
	Vuvod=vuv;
}
int Balance::getVuvod()
{
	return Vuvod;
}
void Balance::setPrirost(int pri)
{
	Prirost=pri;
}
int Balance::getPrirost()
{
	return Prirost;
}
Balance::Balance(int sav1, int sav2, const double proc)
{
	setSaver1(sav1);
	setSaver2(sav2);
	setProcent(proc);
}
void Balance::setSaver1(int sav1)
{
	Saver1=sav1;
}
int Balance::getSaver1()
{
	return Saver1;
}
void Balance::setSaver2(int sav2)
{
	Saver2=sav2;
}
int Balance::getSaver2()
{
	return Saver2;
}
void Balance::setProcent(const double proc=0.03)
{
	Procent=proc;
}
double Balance::getProcent()
{
	return Procent;
}
