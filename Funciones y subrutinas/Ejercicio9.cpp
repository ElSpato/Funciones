#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

/*
El resultado era facil de encontrar solo era necesario 
que supieras todos los comando de string.h
*/
struct{
	
	char nombre[100];
	char aux[100];
	
}variable;

void menu();
void proceso();

int main(){
	
	
	menu();
	
	proceso();

	
	
	return 0;
}

void menu(){
	
	cout<<"ingrese su nombre :"<<endl;
    gets(variable.nombre);
	
	strcpy(variable.aux,variable.nombre);
	
	strrev(variable.aux);
	
}

void proceso(){
	
	if(strcmp(variable.nombre,variable.aux)==0){
		
		cout<<"La palabra es palindroma";
		
	}
	else{
			
		cout<<"La palabra no palindroma";
			
	}
	
	
}



