#include "stdafx.h"
#include "join.h"

class Balance
{
public:
	Balance();

	Balance(int, int, int);
	void setBallance(int);
	int getBallance();
	void setPrirost(int);
	int getPrirost();
	void setVuvod(int);
	int getVuvod();
	Balance(int, int, double);
	void setSaver1(int);
	int getSaver1();
	void setSaver2(int);
	int getSaver2();
	
	void setProcent(double);
	double getProcent(); 

	void displayMessage();





private:
	int Ballance;
	int Prirost;
	int Saver1;
	int Saver2;
	int Vuvod;
	double Procent;
};
