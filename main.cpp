#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void generatoreBit(int Mx[], int n) { 
	int a=0;
	srand(time(NULL));
	for(int i=0;i<n;i++) { 	
		a=rand()%2;
   		Mx[i]=a;  
   	}
}

void generatoreDx(int n, int Dx[], int &Gx, int s) {
	Gx=3;
	cout<<"Generatore G(x) = x^3 + x + 1"<<endl;
	for (int i=n; i<n+3; i++) {
		Dx[i]=0;		
	}
}

int main() {
	int n, s=1, Gx;
	cout<<"Inserisci un numero di bit compreso tra 8 e 32: ";
	cin>>n;
	while(n<8 || n>32) {
		cout<<"Inserisci un numero di bit compreso tra 8 e 32: ";
		cin>>n;
	}
	int Mx[n];
	generatoreBit(Mx, n);
	cout<<"Sequenza di numeri: ";
	for (int i=0; i<n; i++) {
		cout<<Mx[i];
	}
	cout<<endl;
	int Dx[n+Gx];
	for(int i=0; i<n; i++) {
		Dx[i]=Mx[i]; // mx in dx
	}
	generatoreDx(n, Dx, Gx, s);
	cout<<"Polinomio D(x): ";
	for (int i=0; i<n+Gx; i++) {
		cout<<Dx[i];
	}
	return 0;
}
