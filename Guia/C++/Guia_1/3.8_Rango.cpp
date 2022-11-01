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

int a, b, contador, num, x, cont, nPrimos,i;

int main(){
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
}
