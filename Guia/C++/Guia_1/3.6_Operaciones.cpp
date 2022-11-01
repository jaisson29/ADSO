#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

int opcion, j, k, l, operacion;


int main(){
	string mensaje = "\n\n\n\t";
	mensaje += "1) Suma (J+K)\n\t";
	mensaje += "2) Residuo (J%K)\n\t";
	mensaje += "3) Division (J/K)\n\t";
	mensaje += "4) Suma (J+K+L)\n\t";
	mensaje += "5) Multiplicacion (J*K*L)\n\t\n";
	mensaje += "\tEscribe el numero de la operacion a realizar\n\t>>> ";
	cout<<mensaje;
	cin>>opcion;
	
	if(opcion <=5 and opcion>=1){
		cout<<"\tElegiste la opcion: "<<opcion<<endl<<endl;
		cout<<"\tIngresa tres valores numericos"<<endl<<endl;
		cout<<"\t\tPrimer numero: ";
		cin>>j;
		cout<<"\t\tSegundo valor: ";
		cin>>k;
		cout<<"\t\tTercer valor: ";
		cin>>l;
		cout<<endl;
		
		switch(opcion){
			case 1:
				cout<<"\tEl resultado es: "<<j+k;
				break;
			case 2:
				cout<<"\tEl resultado es: "<<j%k;
				break;
			case 3:
				cout<<"\tEl resultado es: "<<j/k;
				break;
			case 4:
				cout<<"\tEl resultado es: "<<j+k+l;
				break;
			case 5:
				cout<<"\tEl resultado es: "<<j*k*l;	
		}
	}else{
		cout<<"El valor ingresado no esta en la lista de opciones";
	}
		
	
}
