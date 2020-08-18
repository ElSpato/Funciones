#include<iostream>
#include<conio.h>
using namespace std;

int sumaP(int num);
int sumaI(int num);

int main(){
	int a,b,c,d,n,e;
	int SP,SI;
	
	cout<<"Didite un numero: ";
	cin>>b;
	
	SP=sumaP(b);
    
    cout<<"La suma de los numeros impares es: "<<SP+1<<endl;

	SI=sumaI(b);

	cout<<"La suma de los numeros pares es: "<<SI<<endl;
	
	getch();
	return 0;
	
}

int sumaP(int num){
	int a,c,n;
	
	n=0;
	a=0;
	c=0;
	
	while(n<num) {
		
		a=a+n;
		c=c+1;
		n=2*c+1;
		
    }
    return a;
}

int sumaI(int num){
	
	int n,c,a;
	
	n=0;
	c=0;
	a=0;
	
	while(n<num) {
		
		a=a+n;
		c=c+1;
		n=2*c;
		
    }
	
	return a;
}
