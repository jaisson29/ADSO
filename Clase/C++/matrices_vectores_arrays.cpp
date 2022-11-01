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
#include <cctype>
#include<bits/stdc++.h>

using namespace std;
//Declaracion de funciones
void cargar(int u); 	//metodo SET
void mostrar(); // metodo GET

//Variables globales
int v[50];

int main(){
	for(int i = 1;i<=10;i++){
		cargar(i);
		mostrar();
	}
	
}

void cargar(int u){
	for(int i=0;i<50;i++){
		v[i] = i*u+u;
	}
}

void mostrar(){
	cout<<endl<<endl<<endl;
	for(int i=0;i<50;i++){
		cout<<v[i]<<"\t";
	}
}








