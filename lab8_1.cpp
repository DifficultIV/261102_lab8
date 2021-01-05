#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int year = 1;
	double interate,interest,total,newbalance,loan,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	cout << fixed << setprecision(2);
	for(double Balance = loan;Balance > 0;Balance = newbalance){
		cout << setw(13) << left << year;
		year++; 
		cout << setw(13) << left << Balance;
		interest = Balance*(interate/100.0);
		cout << setw(13) << left << interest;
		total = Balance + interest;
		cout << setw(13) << left << total;
		if(pay > total) pay = total;
		cout << setw(13) << left << pay;
		newbalance = total - pay;
		cout << setw(13) << left << newbalance;
		cout << endl;

	}
	return 0;
}
