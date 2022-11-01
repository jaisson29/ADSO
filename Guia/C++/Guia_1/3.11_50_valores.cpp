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

int i, num, cpares, cimpares, cprimos, cnprimos, contador, x;

int main(){
	cpares = 0;
	cimpares = 0;
	cprimos = 0;
	cnprimos = 0;
	
	for(i = 1;i <= 50;i++){
		cout<<i<<"# Valor: ";
		cin>>num;
		if(num>3){
			if(num % 2 == 0){
				cpares++;
			}else{
				cimpares++;
			}
			contador = 0;
			x = 1;
			while( x <= num){
				if(num % x == 0){
					contador++;
				}
				x++;
			}
			if(contador == 2){
				cout<<num<<" Es un nuemro primo"<<endl;
				cprimos++;
			}else{
				cnprimos++;
			}
	
		}else{
			cout<<"\tEl valor debe ser mayor a 3";
		}
	}
	cout<<"\n\n\n";
	cout<<cprimos<<" numeros son primos"<<endl;
	cout<<cnprimos<<" no son numeros primos"<<endl;
	cout<<cpares<<" de los numeros ingresados son pares"<<endl;
	
	cout<<cimpares<<" de los numeros ingresados son impares"<<endl;	
}
