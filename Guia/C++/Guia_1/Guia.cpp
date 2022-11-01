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
/*DECLARA FUNCIONES*/
void titulo(string texto);
void linea(int n);
void volver();
void reductor();
void fibonaci();
void numerosPrimos();
bool primo(int n);
void parImpar();
void operaciones();
void divisible();
void rango();
void reloj();
void tablaMultiplicar();
void cincuentaValores();

int main(){
	system("color 8f");
	int puntoGuia;
	titulo("EJERCICIOS");
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
	cin>>puntoGuia;
	switch (puntoGuia){
		case 1:
			titulo("REDUCTOR");
			reductor();
			break;
		case 2:
			fibonaci();
			break;
		case 3:
			numerosPrimos();
			break;
		case 4:
			parImpar();
			break;
		case 5:
			operaciones();
			break;
			
		case 6:
			divisible();
			break;
		case 7:
			rango();
			break;
		case 8:
			reloj();
			break;
		case 9:
			tablaMultiplicar();
			break;
		case 10:
			cincuentaValores();
			break;
		case -1:
			titulo("Gracias por elegirnos");
			system("Exit");
			break;
		default:
			cout<<"\t\tSolo ingrese los numeros de las opciones dadas\n\n\t";
			system("pause");
			main();
			break;
	}
}
/*Mostrar titulo*/
void titulo(string texto){
	system("cls");
	linea(60);
	cout<<"\t\tGuia de C++ No.1"<<texto<<"\t\t"<<endl;
	linea(60);
}
/*Linea de asteriscos*/
void linea(int n){
	cout<<"\n\n\t";
	for(int i=0;i<n;i++){
		cout<<"*";
	}
	cout<<"\t\n\n";
}
/*Esperar y regresar*/
void volver(){
	cout<<"\n\n\t\t";
	system("pause");
	main();
}

/*3.2 REDUCTOR */
void reductor(){
	int num;
	num = 200;
	while (num > 0){
		cout<<num<<"\n";
		num = num - 3;
	}
	volver();
}
/*3.3 SERIE DE FIBONACCI*/
void fibonaci(){
	int a, b, c, num, i, acum;
	cout<<"Ingrese un numero mayor o igual a 10 y menor 100: ";
	cin>>num;
	a = 0;
	b = 1;
	acum = 0;
	if((num >= 10)and(num<=100)){
		for(i = 1;i <=num;i++){
			acum = acum + a;
			cout<<a;
			c = a+b;
			a = b;
			b = c;
			cout<<"\n";
		}
		cout<<"Se mostraron "<<num<<" numeros"<<"\n";
		cout<<"La suma de todos los numeros es: "<<acum;
	}else{
		cout<<"Numero invalido";
	}
	volver();
}
/*3.4 PRIMERO 30 NUMEROS PRIMOS*/
void numerosPrimos(){
	int i=0,h=1;
	while(i<30){
		bool prim = primo(h);
		if(prim == true){
			cout<<h<<endl;
			i++;
		}
		h++;
	}
	volver();
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

/*3.5 MUESTRE LOS NUMEROS PARES E IMPARES*/
void parImpar(){
	int num, sumapares, sumaimpares, i;
	int promediopares, promedioimpares, diferencia;
	int cpares, cimpares, restapares, restaimpares;
	cout<<"Ingrese un valor mayor que 10: ";
	cin>>num;
	
	if(num > 10){
		sumapares = 0;
		sumaimpares = 0;
		cpares = 0;
		cimpares = 0;
		for(i = 1;i <=num;i++){
			if(i % 2 == 0){
				cout<<i<<" es par"<<endl;
				sumapares = sumapares + i;
				restapares = restapares - i;
				cpares++;	
			}else{
				cout<<i<<" es impar"<<endl;
				sumaimpares = sumaimpares + i;
				restaimpares = restaimpares - i;
				cimpares++;
			}
		}
		cout<<"La suma de los pares es: "<<sumapares<<endl;
		cout<<"La suma de los impares es: "<<sumaimpares<<endl;
		cout<<"La resta de los pares es: "<<restapares<<endl;
		cout<<"La resta de los impares es: "<<restaimpares<<endl;
		cout<<"El promedio de los numeros pares es: "<<sumapares / cpares<<endl;
		cout<<"El promedio de los numeros impares es: "<<sumaimpares / cimpares<<endl;
		cout<<"La diferencia entre la suma de pares e impares es: "<<sumapares - sumaimpares<<endl;
	}else{
		cout<<"El valor debe ser mayor que 10";
	}
	volver();
}
/*3.6 Operaciones por la opcion elegida*/
void operaciones(){
	int opcion, j, k, l, operacion;
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
	volver();
}
/*3.7 DIVISIBLE ENTRE " Y 3*/
void divisible(){
	int num;

	cout<<"\tIngrese un numero mayor que 3: ";
	cin>>num;
	if(num % 2 == 0 and num % 3 == 0){
		cout<<"\n\tEl numero es divisible entre 2 y 3 al mismo tiempo";	
	}else if(num % 2 == 0){
		cout<<"\n\tEl numero es divisible entre 2 unicamente";
	
	}else if(num % 3 == 0){
		cout<<"\n\tEl numero es divisible entre 3 unicamente";
	}else{
		cout<<"\n\tEl numero no divisible por 2 ni por 3";
	}
	volver();
}
/*3.8 NUMEROPS PRIMOS EN RANGO*/
void rango(){
	int a, b, contador, num, x, cont, nPrimos,i;
	cout<<"\tIngrese dos valores mayores que 4 y que el primer numero sea mayor al segundo"<<endl;
	cout<<"\tPrimer valor: ";
	cin>>a;
	cout<<"\tSegundo valor: ";
	cin>>b;
	if((a>b) and ((a>4)and(b>4))){
		contador = 0;
		num = b;
		for(i = b; i <= a;i++){
			num = num + 1;
			x = 1;
			contador = 0;
			while(x <= num){
				if (num % x == 0){
					contador++;
				}
				x++;
			}  
			if(contador == 2){
				cout<<"\t"<<num<<endl;
			}
		}		
	}else{
		cout<<"El valor no cumple las condiciones";
	}
	volver();	
}
/*3.9 REJOJ HASTA 23:0:0*/
void reloj(){
	int h,m,s;
	for(h=0;h<=23;h++){
		for(m=0;m<=59;m++){
			for(s=0;s<=59;s++){
				if(h<10) cout<<"0";
				cout<<h<<":";
				if(m<10) cout<<"0";
				cout<<m<<":";
				if(s<10) cout<<"0";
				cout<<s<<endl;
				if(h==1 and m==25 and s==12){
					h=24;m=60;s=60;
				}
			}
		}
	}
	volver();
}
/*3.10 TABLA DE MULTIPLICAR*/
void tablaMultiplicar(){
	int a, b;
	cout<<"Ingrese un numero: ";
	cin>>a;
	
	for(b = 1;b <= 10;b++){
		cout<<"\t"<<b<<" * "<<a<<" = "<<b*a<<endl;
	}
	volver();
}
/*SOLICITAR 50 VALORES*/
void cincuentaValores(){
	int n, i=0,cp,ci, cpr,cnpr;
	srand(time(NULL));
	while(i<50){
		n = rand () % 150 + 4;
		cout<<n;
		if(n % 2 == 0)
			cp++;
		else
			ci++;
		if(primo(n)==true){
			cout<<" P";
			cpr++;
		}else
			cnpr++;
		cout<<"\t";
		i++;
	}
	cout<<"\n\n\t\tCantidad de pares:\t"<<cp;
	cout<<"\n\t\tCantidad de impares:\t"<<ci;
	cout<<"\n\n\t\tCantidad de primos:\t"<<cpr;
	cout<<"\n\t\tCantidad de No primos:\t"<<cnpr;
	volver();	
}

