#include<iostream>
#include<conio.h>
using namespace std;

int Area(int lado);
int Perimetro(int lado);

int main(){
	
	int l,AreaC,PerimetroC;
	
	cout<<"Digite el Lado del Cuadrado: ";
	cin>>l;
	
	AreaC=Area(l);
	PerimetroC=Perimetro(l);
	
	
	cout<<"\nEl area es: "<<AreaC<<endl;
	cout<<"\nEl Perimetro es: "<<PerimetroC<<endl;
	
	getch();
	return 0;
}

int Area(int lado){
	int area;
	
	area=(lado*lado);
	
	return area;
	
}

int Perimetro(int lado){
	
	
	int perimetro;
	
	perimetro=(lado+lado+lado+lado);
	
	return perimetro;
	
}
