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
/*Declaracion de variables*/
void titulo(string texto);
void linea(int n);
void volver();
void eje1();
void eje2();
void eje3();
bool primo(int k);
void eje4();
void eje5();
void eje6();
void eje7();
void eje8();
void eje9();
void eje10();

int main(){
	int opc;
	titulo("Guia de C++ No.1 EJERCICIOS");
	/*do{*/
		cout<<"\t\t1. Decremento"<<endl;
		cout<<"\t\t2. Serie de Fibonacci"<<endl;
		cout<<"\t\t3. Primos"<<endl;
		cout<<"\t\t4. Pares e impares"<<endl;
		cout<<"\t\t5. Operaciones"<<endl;
		cout<<"\t\t6. Divisible"<<endl;
		cout<<"\t\t7. Primos en rango"<<endl;
		cout<<"\t\t8. Reloj"<<endl;
		cout<<"\t\t9. Tablas de multiplicar"<<endl;
		cout<<"\t\t10 Calculos"<<endl;
		cout<<"\t\t-1 Salir"<<endl;
		cout<<"\n\n\t\tIngrese la opcion a revisar: ";
		cin>>opc;
	/*}while(opc <1 or opc >10);*/
	switch (opc){
		case 1:
			titulo("EJERCICO N.1");
			eje1();
			volver();
			break;
		case 2:
			titulo("EJERCICO N.2");
			eje2();
			volver();
			break;
		case 3:
			titulo("EJERCICO N.3");
			eje3();
			volver();
			break;
		case 4:
			titulo("EJERCICO N.4");
			eje4();
			volver();
			break;
		case 5:
			titulo("EJERCICO N.5");
			eje5();
			volver();
			break;
		case 6:
			titulo("EJERCICO N.6");
			eje6();
			volver();
			break;
		case 7:
			titulo("EJERCICO N.7");
			eje7();
			volver();
			break;
		case 8:
			titulo("EJERCICO N.8");
			eje8();
			volver();
			break;
		case 9:
			titulo("EJERCICO N.9");
			eje9();
			volver();
			break;
		case 10:
			titulo("EJERCICO N.10");
			eje10();
			volver();
			break;
		case -1:
			titulo("Gracias por elegirnos");
			system("Exit");
			break;
		default:
			cout<<"\t\tSolo ingrese los numeros de las opciones dadas\n\n\t";
			volver();
			break;
	}	
}

void titulo(string texto){
	system("cls");
	linea(50);
	cout<<"\t\tGuia de C++ No.1"<<texto<<"\t\t*"<<endl;
	linea(50);
}

void linea(int n){
	cout<<"\n\n\t";
	for(int i=0;i<n;i++){
		cout<<"*";
	}
	cout<<"\t\n\n";
}

void volver(){
	cout<<"\n\n\t\t";
	system("pause");
	main();
}

void eje1(){
	for(int num = 200;num > 0;num = num - 3){
		cout<<num<<"\t";
	}
}

void eje2(){
	int a,b,c,h;
	cout<<"\t\tIngrese un valor entre 10 y 50: ";
	cin>>h;
	if(h >= 10 and h <= 50){
		a = 0;
		b = 1;
		cout<<"\n\n"<<a<<"\t"<<b;
		for(int i = 3;i <= h;i++){
			c = a+b;
			cout<<"\t"<<c;
			a = b;
			b = c;
		}
	}else{
		cout<<"\n\n\tSolo se permiten numeros entre 10 y 50";
	}
}

void eje3(){
	int i=0,h=1;
	while(i<30){
		bool prim = primo(h);
		if(prim == true){
			cout<<h<<"\t";
			i++;
		}
		h++;
	}
}

bool primo(int k){
	bool prim = true;
	for(int i = 2;i<k;i++){
		if((k%i)==0){
			prim = false;
			i=k;
		}
	}
	return prim;
}

void eje4(){
	
}

void eje5(){
	
}

void eje6(){
	
}

void eje7(){
	
}

void eje8(){
	
}

void eje9(){
	
}

void eje10(){
	
}
