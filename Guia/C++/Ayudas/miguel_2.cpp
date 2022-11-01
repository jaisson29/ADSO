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

int main(){
	int suma, n, a, b;
	suma = 0;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>n;
	for(a = 1;a <= n; a++){
		cout<<a<<"°Numero: ";
		cin>>b;
		suma = suma + b;
	}
	cout<<"La suma de todos los numeros es: "<<suma;
}
