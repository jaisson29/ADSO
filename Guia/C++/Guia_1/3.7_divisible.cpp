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

int num;

int main(){
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
}
