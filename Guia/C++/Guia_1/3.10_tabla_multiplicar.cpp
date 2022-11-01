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

int a, b;

int main(){
	cout<<"Ingrese un numero: ";
	cin>>a;
	
	for(b = 1;b <= 10;b++){
		cout<<"\t"<<b<<" * "<<a<<" = "<<b*a<<endl;
	}
}
