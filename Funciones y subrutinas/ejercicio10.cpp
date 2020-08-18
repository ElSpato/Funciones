#include<iostream>
#include<conio.h>
using namespace std;

void matrizA();

int main(){
	
	matrizA();
	
	getch();
	return 0;
}

void matrizA(){
	
	int a[20][20],b[20][20],c[20][20];
	int k,m,n;
	
	cout<<"\t.:Matriz A:."<<endl;
	
	do {
	
		cout<<"Filas de A: ";
	    cin>>k;
	    cout<<"Columnas de A: ";
	    cin>>m;
	    
	    if(k < 0 || m <0){
	    	
	    	cout<<"\nError"<<endl;
	    	
	    }
	    
	    cout<<"\n";
	
    } while(k<0 || m<0);

	
	for(int i=0;i<k;i++) {
		for(int j=0;j<m;j++) {
			cout<<"Digite el valor para A["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];	
        }	
    }
	
	cout<<"\n";
	
	
	cout<<"\t.:Matriz B:."<<endl;
	do {
	
		cout<<"Filas de B: ";
	    cin>>m;
	    cout<<"Columnas de B: ";
	    cin>>n;
	    
	    if(m < 0 || n <0){
	    	
	    	cout<<"\nError"<<endl;
	    	
	    }
	    
	    cout<<"\n";
	
    } while(m<0 || n<0);
	
	
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			
			cout<<"Digite el valor para B["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
			
        }	
    }
    
    for(int i=0;i<k;i++) {
    	for(int j=0;j<n;j++) {
    		
    		c[i][j]=0;
    		
        }

    }

    
    
    for(int i=0;i<k;i++) {
    	for(int j=0;j<n;j++) {
    		for(int z=0;z<m;z++) {
    			
    			c[i][j] += a[i][z] * b[z][j];
    			
            }
        }	
    }
    
    cout<<"\n\t.:La Matriz A:."<<endl;


	for(int i=0;i<k;i++) {
		for(int j=0;j<m;j++) {
			
			cout<<a[i][j]<<" ";
			
        }
        cout<<"\n";

    }

	cout<<"\n\t.:La Matriz B:."<<endl;


	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			
			cout<<b[i][j]<<" ";
			
        }
        cout<<"\n";

    }
	
	cout<<"\n\t.:La Matriz C:."<<endl;


	for(int i=0;i<k;i++) {
		for(int j=0;j<n;j++) {
			
			cout<<c[i][j]<<" ";
			
        }
        cout<<"\n";

    }
			
}
