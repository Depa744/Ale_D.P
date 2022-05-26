/*
	Generatore di Bit - C++
	- Ammirati Giovanni, Improta Michele, De Paulis Alessandro, Rossi Alessandro
*/

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generatoreSequenza(int a[],int &contatoreBit) {  
    int i=0, j;
    if (a[i] ==! 1) {
    	while (i<contatoreBit) {
   			j=i+1;
   			a[i]=a[j];
    		i=i+1;
   		}     
	}
	contatoreBit=contatoreBit-1;
	cout<<"\nSequenza: ";  
    for (int i=0; i<contatoreBit; i++) {
        cout<<a[i];
    }
}

int contatoreBit;

int main() {	
	cout<<"Inserisci il numero di bit da generare (8-32): ";
	cin>>contatoreBit;
	while (contatoreBit < 8 || contatoreBit > 32) {
		cout<<"Inserisci il numero di bit da generare (8-32): ";
		cin>>contatoreBit;	
	}
	int a[contatoreBit];
	srand (time(NULL));
	cout<<"Numero di bit: "<<contatoreBit<<endl;
	for (int i=0; i < contatoreBit; i++) {
		a[i]=rand() %2;
	}
	cout<<"\nSequenza: ";  
	for (int i=0; i<contatoreBit; i++) {
		cout<<a[i];
	}	
	cout<<"\n\nM(x): ";
	for (int i=0, j=contatoreBit; i<contatoreBit, j>=0; i++, j--) {
		if (a[i]==1) {
			cout<<"x^"<<j-1<<"+";
		}
	}
	contatoreBit=contatoreBit+3;
	a[contatoreBit];
	a[contatoreBit-1]=0;
	a[contatoreBit-2]=0;
	a[contatoreBit-3]=0;
	int scelta;
	cout<<"\n\nScegli un divisore:\n1) 1011\n2) 10011\n\nInserisci la tua scelta (1/2): ";
	cin>>scelta;
	int n, Gx[n];
	while (scelta < 1 || scelta > 2) {
		cout<<"\nInserisci la tua scelta (1/2): ";
		cin>>scelta;
	}
	if (scelta == 1) {
		n=4;
		Gx[n];
		Gx[0]=1;
		Gx[1]=1;
		Gx[2]=0;
		Gx[3]=1;
	} else if (scelta == 2) {	
		n=5;
		Gx[n];
		Gx[0]=1;
		Gx[1]=1;
		Gx[2]=0;
		Gx[3]=0;
		Gx[4]=1;
	}
	bool inf = true;
	for (int i=0, j=3 ; n=true ; i++, j--) {
		cout<<endl<<"Il risultato tra: "<<a[i]<<" e "<<Gx[j]<<" e' ";
		if (j==-1) {
			j=j+n;
		}
		a[i]=a[i]^Gx[j];
		cout<<a[i];
    	if (contatoreBit <= 4) {
    		generatoreSequenza(a, contatoreBit);
        	return 0;  
   		}
		generatoreSequenza(a, contatoreBit);
	}
} 
