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

int x, num, contador, nPrimos;

int main(){
	num = 0;
	contador = 0;
	nPrimos = 1;
	while(nPrimos <= 30){
		num++;
		x = 1;
		contador = 0;
		while(x <= num){
			if(num % x == 0){
				contador++;
			}
			x++;
		}
		if(contador == 2){
			cout<<nPrimos<<" >>> "<<num<<endl;
			nPrimos++;
		}
	}
		
}
