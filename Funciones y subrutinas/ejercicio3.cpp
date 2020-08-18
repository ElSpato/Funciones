#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct{
	
	string etapas[8]={"Etapa de la persona es:","Bebe","Niño","Pubertad","Adolescente","Joven","Adulto","Anciano"};
	
}Etapas;


struct{
	
	int edad;
	
}Edades;

void menu();
void etapa();

int main(){
	
	fflush(stdin);
	
	menu();
	etapa();
	
	getch();
	return 0;
}

void menu(){
	
	do {
		
		cout<<"Digite su Edad: ";
	    cin>>Edades.edad;
		
    } while(Edades.edad < 0);

	system("pause");
}

void etapa(){
	
	do {
		if(Edades.edad >= 0 && Edades.edad <= 2){
		
		   for(int i=0;i<1;i++) {
			
			   cout<<Etapas.etapas[i]<<" ";
			   if(i==0){
				
				  for(int j=1;j<=1;j++) {
					
					 cout<<Etapas.etapas[j]<<" ";
					
                  }	
			   }  	
           }		
	    }
	    else{
		   if(Edades.edad > 3 && Edades.edad <= 5){
			
			    for(int i=0;i<1;i++) {
                   cout<<Etapas.etapas[i]<<" ";
				    if(i == 0){
                      for(int j=2;j<=2;j++) {
						
						cout<<Etapas.etapas[j]<<" ";	
                      }	
				    }
                }	
		   }
		   else{
			   if(Edades.edad > 6 && Edades.edad <= 12){
				
				   for(int i=0;i<1;i++) {
					  cout<<Etapas.etapas[i]<<" ";
					  if(i == 0){
					     for(int j=3;j<=3;j++) {
						    cout<<Etapas.etapas[j]<<" ";	
                         }
				      }
                   }
			   }
			   else{
				
				   if(Edades.edad > 13 && Edades.edad <= 19){
					
		 			  for(int i=0;i<1;i++) {
					    cout<<Etapas.etapas[i]<<" ";
					    if(i == 0){
					       for(int j=4;j<=4;j++) {
						      cout<<Etapas.etapas[j]<<" ";	
                           }
				        }
                      }
					
				   }
				   else{
					   if(Edades.edad > 19 && Edades.edad <= 25){
						
						  for(int i=0;i<1;i++) {
					          cout<<Etapas.etapas[i]<<" ";
					          if(i == 0){
					             for(int j=5;j<=5;j++) {
						         cout<<Etapas.etapas[j]<<" ";	
                                 }
				              }
                          }
						
				       }
					   else{
						
						  if(Edades.edad >26 && Edades.edad <= 60){
							
							  for(int i=0;i<1;i++) {
					            cout<<Etapas.etapas[i]<<" ";
					            if(i == 0){
					               for(int j=6;j<=6;j++) {
						              cout<<Etapas.etapas[j]<<" ";	
                                   }
				                }
                              }
						  }
						  else{
							
							if(Edades.edad > 60){
								for(int i=0;i<1;i++) {
					               cout<<Etapas.etapas[i]<<" ";
					               if(i == 0){
					                  for(int j=7;j<=7;j++) {
						                 cout<<Etapas.etapas[j]<<" ";	
                                      }
				                   }
                                }	
							}	
						  }	
					   }	
				   }	
			   }		
	   	   }
	    }
		
		cout<<"\n\tDesea Digitar su Edad Denuevo: 1.-Si O 2.-No: ";
		cin>>Edades.edad;
		if(Edades.edad == 1){
			system("cls");
			fflush(stdin);
			menu();
			etapa();
		}
    } while(Edades.edad == 1);

	
}
