#include<iostream>
#include<conio.h>
using namespace std;
int areaT(int base, int altura);

int main(){
	int b,a,area;
	
	cout<<"Digite la base: ";
	cin>>b;
	cout<<"Digite La Altura: ";
	cin>>a;
	
	area=areaT(b,a);
	
	cout<<"El area es: "<<area<<" m^2";
	
	getch();
	return 0;
}
int areaT(int base, int altura){
	int A;
	
	A=(base*altura);
	
	return A;
}
