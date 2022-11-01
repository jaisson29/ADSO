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
	int opcion;
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"A cuadrado";
			cout<< 1+1;
			break;
		case 2:
			cout<<"V cuadrado";
			break;
		case 3: 
			cout<<" Rectangulo";
			break;
		default:
			cout<<"ingrese un valor valido";
			break;
	}
}
