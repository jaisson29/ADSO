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

void pintar(int e);

int main(){
	pintar(100);
	cout<<"ANALISIS Y DESARROLLO DE SOFTWARE";
	pintar(50);
	cout<<"No es lo mismo";
	pintar(1000);
	cout<<"Ni es igual";
	pintar(200);
}

void pintar(int e){
	int i = 1;
	while(i <= e){
		cout<<char(219);
		i++;
	}
}


