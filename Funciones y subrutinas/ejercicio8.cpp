#include<iostream>
#include<conio.h>
using namespace std;

int invertir(int n);

int main(){
	int numero;
	int rest;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	 rest=invertir(numero);
	
	cout<<"\nEl numero Invertido es: "<<rest;
	
	
	getch();
	return 0;
}

int invertir(int n){
	int resto,nV=0;
	
	
	while(n>0){
		
		resto=n%10;
		n=n/10;
		nV=nV*10+resto;
		
    }

    return nV;
	
}
