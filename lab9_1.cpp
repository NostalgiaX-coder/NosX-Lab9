#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan ; double rate ; double pay ;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
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
	
	
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	double prevbalance = loan;
	double interest = prevbalance * (rate/100);
	double total = prevbalance + interest;
	double payment = pay;
	double newbalance = total - payment;
	int endofyear = 1;
	while(true){
	    
	    cout << setw(13) << left << endofyear;
	    endofyear ++;
	    cout << setw(13) << left << prevbalance;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    if(total < payment){break;}
	    cout << setw(13) << left << payment;
	    cout << setw(13) << left << newbalance;
	    
	    prevbalance = newbalance;
	    interest = prevbalance * (rate/100);
	    total = prevbalance + interest;
	    newbalance = total - payment;
	    cout <<endl;
	}
	
	cout << setw(13) << left << total;
	cout << setw(13) << left << 0.00;
	
	
	return 0;
}