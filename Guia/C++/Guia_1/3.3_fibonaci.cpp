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

int a, b, c, num, i, acum;

int main(){
	cout<<"Ingrese un número mayor o igual a 10 y menor 100: ";
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
	
}
