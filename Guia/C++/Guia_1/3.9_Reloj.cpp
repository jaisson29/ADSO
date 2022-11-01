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
	int segundos = 0;
	int minutos = 0;
	int horas = 1;
	while(horas != 23){
		segundos++;
		if(segundos == 60){
			minutos++;
			segundos = 0;
		}
		if(minutos == 60){
			horas++;
			minutos = 0;
		}
		if(horas == 23){
			horas = 23;
			minutos = 0;
			segundos = 0;
		}
		/* system("cls"); */
		cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
		/* Sleep(1000); */
	}
}
	
