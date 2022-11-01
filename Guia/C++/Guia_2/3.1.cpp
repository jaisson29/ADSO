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
	/*DeCLARACION DE FUNCIONES*/
	void eje_1();
	void eje_2();
	void eje_3();
	void eje_4();
	void eje_5();
	void eje_6();
	
	
	eje_1();
}

void eje_1(){
	float a, b;
	system("color 8f");
	cout<<("Ingrese el primer numero: ");
	cin >> a;
	cout<<("Ingrese el segundo numero: ");
	cin >> b;
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	if(a == 0 or b == 0){
		cout<<"No se puede dividir por cero '0'";
	}else{
		cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	}
}

void eje_2(){
	system("color 8f");
	int a, b;
	cout<<"\tDebe ingresar dos valores para saber cual es mayor"<<endl<<endl;
	cout<<"\tIngrese el primer valor: ";
	cin>>a;
	cout<<"\tIngrese el segundo valor: ";
	cin>>b;
	if(a>b){
		cout<<a<<" es mayor que "<<b;
	}else if(a<b){
		cout<<b<<" es mayor que "<<a;
	}else{
		cout<<"\tLos dos valores son iguales";
	}	
}

void eje_3(){
	system("color 8f");
	int a;
	cout<<"Ingrese un numero: ";
	cin>>a;
	if(a==100){
		cout<<"\tEl numero es igual a 100";
	}else if(a<100){
		cout<<"\tEl valor es menor que 100";
	}else{
		cout<<"\tEl valor es mayor que 100";
	}
}

void eje_4(){
	system("color 8f");
	int a,b,c;
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"Ingrese otro numero: ";
	cin>>b;
	cout<<"ingrese un tercer numero";
	cin>>c;
	cout<<"\n\n\n";
	if(a<b and a<c){
		if(b<c)
			cout<<"\t"<<a<<"\t"<<b<<"\t"<<c;
		else
			cout<<"\t"<<a<<"\t"<<c<<"\t"<<b;
	}else if(b<a and b<c){
		if(a<c)
			cout<<"\t"<<b<<"\t"<<a<<"\t"<<c;
		else
			cout<<"\t"<<b<<"\t"<<c<<"\t"<<a;
	}else{
		if(b<a)
			cout<<"\t"<<c<<"\t"<<b<<"\t"<<a;
		else
			cout<<"\t"<<c<<"\t"<<a<<"\t"<<b;
	}
	cout<<"\n\n\n\n";
}

void eje_5(){
	system("color 8f");
	float a, b, c, p;
	cout<<"\tIngrese la primera nota: ";
	cin>>a;
	cout<<"\tIngrese la segunda nota: ";
	cin>>b;
	cout<<"\tIngrese la tercera nota: ";
	cin>>c;
	cout<<endl<<endl;
	p = (a+b+c)/3;
	if(p >= 3.5) cout<<"\tAprobado";
	else cout<<"\tReprobado";
}



















