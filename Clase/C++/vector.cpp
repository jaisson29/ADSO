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
#include <bits/stdc++.h>
#include <cstdlib>
#include<vector>
#include<climits>

using namespace std;
void cargar(int k);
int v[100];
void mostrar();
void ordenarDesc();
void ordenarAscd();

int main(){
	cout<<"\n\nVector original\n";
	cargar(1);
	mostrar();
	cout<<"\n\nVector ordenado descendentemente\n";
	ordenarDesc();
	mostrar();
	cout<<"\n\nVector ordenado ascendentemente\n";
	ordenarAscd();
	mostrar();
	
}

void cargar(int k){
	int p;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		p=rand() %80+14;
		v[i]=p*k;
	}
} 

void mostrar(){
	for(int i=0;i<100;i++){
		cout<<v[i]<<"\t";
	}
}

void ordenarDesc(){
	int aux;
	for(int j=0;j<100-1;j++){
		for(int k=j+1;k<100;k++){
			if(v[k]>v[j]){
				aux=v[j];
				v[j] = v[k];
				v[k] = aux;
			}
		}
	}
}

void ordenarAscd(){
	int aux;
	for(int j=0;j<100-1;j++){
		for(int k=j+1;k<100;k++){
			if(v[k]<v[j]){
				aux=v[j];
				v[j] = v[k];
				v[k] = aux;
			}
		}
	}
}






