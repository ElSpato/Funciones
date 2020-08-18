#include<iostream>
#include<conio.h>
using namespace std;
void Pago();
void menu();

/*
era necesario que usara Estructura de datos para poder facilitales
los datos a la funcion void
*/
struct{
	
	int opc;
	
}variables;


int main(){
	
    menu();
    Pago();
	
	getch();
	return 0;
}

void menu(){
	
	cout<<"Digite El Tipo de cliente que es:."<<endl;
    cout<<"1. Publico General(G)"<<endl;
    cout<<"2. Cliente Afiliado(A)"<<endl;
    cin>>variables.opc;
}

void Pago(){
	int opc2;
	int monto,descuento=0,montototal,recargo=0;
	switch(variables.opc) {
		case 1:
			cout<<"Digite Su forma de pago"<<endl;
            cout<<"1. Al Contado (C) "<<endl;
            cout<<"2. Plazos (P)"<<endl;
            cin>>opc2;
            switch(opc2) {
            	case 1:
            		cout<<"Por favor"<<endl;
            		cout<<"Digite su monto a pagar: ";
            		cin>>monto;
            		descuento=monto*15/100;
            		montototal=monto-descuento;
            		cout<<"\Descuento: "<<descuento<<endl;
            		cout<<"Pago Total: "<<montototal<<endl;
            	 break;
            	case 2:
            		cout<<"Por favor"<<endl;
            		cout<<"Digite su monto a pagar: ";
            		cin>>monto;
            		recargo=monto*10/100;
            		montototal=monto+recargo;
            		cout<<"\Recargo: "<<recargo<<endl;
            		cout<<"Pago Total: "<<montototal<<endl;
            	 break;
	          default:
	          	cout<<"Error";
	          	 break;
            }
         break;
         
        case 2:
        	cout<<"Digite Su forma de pago"<<endl;
            cout<<"1. Al Contado (C) "<<endl;
            cout<<"2. Plazos (P)"<<endl;
            cin>>opc2;
            switch(opc2) {
            	case 1:
            		cout<<"Por favor"<<endl;
            		cout<<"Digite su monto a pagar: ";
            		cin>>monto;
            		descuento=monto*20/100;
            		montototal=monto-descuento;
            		cout<<"\Descuento: "<<descuento<<endl;
            		cout<<"Pago Total: "<<montototal<<endl;
            	 break;
            	case 2:
            		cout<<"Por favor"<<endl;
            		cout<<"Digite su monto a pagar: ";
            		cin>>monto;
            		recargo=monto*5/100;
            		montototal=monto+recargo;
            		cout<<"\Recargo: "<<recargo<<endl;
            		cout<<"Pago Total: "<<montototal<<endl;
            	 break;
	          default:
	          	cout<<"Error";
	          	 break;
            }
            break;
	   default:
	   	cout<<"Error";
	   	 break;
    }	
}
