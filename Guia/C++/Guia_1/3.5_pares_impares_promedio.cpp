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

int num, sumapares, sumaimpares, i;
int promediopares, promedioimpares, diferencia;
int cpares, cimpares, restapares, restaimpares;

int main(){
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
}
