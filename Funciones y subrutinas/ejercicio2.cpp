#include<iostream>
#include<conio.h>
using namespace std;

int promedio(int n1,int n2,int n3);

int main(){
	int num1,num2,num3,promed=0;
	
	cout<<"Digite su primera nota: ";
	cin>>num1;
	cout<<"\nDigite su primera nota: ";
	cin>>num2;
	cout<<"\nDigite su primera nota: ";
	cin>>num3;
	
	promed=promedio(num1,num2,num3);
	cout<<"\nEl promedio es: "<<promed;
	
	getch();
	return 0;
}

int promedio(int n1,int n2,int n3){
	int prom=0;
	
	prom=(n1+n2+n3)/3;
	
	return prom;
}


