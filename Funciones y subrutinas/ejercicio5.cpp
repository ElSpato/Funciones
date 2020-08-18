#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

void proceso();
//Estoy usando estructura de datos por que asi es mas facil poder usar mis 
//variables a gusto 

struct{
	
	char x;
	
}variable;


int main(){
	
	
	cout<<"Digite su Caracter: ";
	cin>>variable.x;
	system("pause");
	proceso();


	getch();
	return 0;
}

void proceso(){
	
	switch(variable.x) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal Minuscula";
		break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal Mayuscula";
		break;
	   default:
	   	cout<<"Es un caracter";
	   	break;
    }
		
}

