#include "stdafx.h"
#include "join.h"

class Balance
{
public:
  Balance();

	Balance(int, int, int);
	void setBallance(static int);
	int getBallance();
	void setPrirost(int);
	int getPrirost();
	void setSaver1(int);
	int getSaver1();
	void setSaver2(int);
	int getSaver2();
	void setVuvod(int);
	int getVuvod();
	void setProcent(const int);
	const int getProcent(); 

	void displayMessage();





private:
	int Ballance;
	int Prirost;
	int Saver1;
	int Saver2;
	int Vuvod;
	const int Procent;
};
