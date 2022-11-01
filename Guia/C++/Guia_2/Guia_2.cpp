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

	// DECLARACION DE FUNCIONES
	void titulo(string texto);
	void menu1();
	void menu2();
	void menu3();
	void menu4();
	void mostrarV(int vector[],int n);
	void cargarV(int v[],int n);
	void mostrarM();
	void linea(int n);
	bool primo(int k);
	void volver();
	void eje_1();
	void eje_2();
	void eje_3();
	void eje_4();
	void eje_5();
	void eje_6();
	void eje_7();
	void eje_8();
	void eje_9();
	void eje_10();
	void eje_11();
	void eje_12();
	void eje_13();
	void eje_14();
	void eje_15();
	void eje_16();
	void eje_17();
	void eje_18();
	void eje_19();
	void eje_19();
	void eje_20();
	void eje_21();
	void eje_22();
	void eje_23();
	void eje_24();
	void eje_25();
	void eje_26();
	void eje_27();
	void eje_28();
	void eje_29();
	void eje_30();
	void eje_31();
	void eje_32();
	void eje_33();
	void eje_34();
	void eje_35();
	void eje_36();
	void eje_37();
	void eje_38();
	void eje_39();
	void eje_40();
	void eje_41();
	void eje_42();
	void eje_43();
	void eje_44();
	void eje_45();
	void eje_46();
	void eje_47();
	void eje_48();
	void eje_49();
	void eje_50();
	void eje_51();
	void eje_52();
	void eje_53();
	void eje_54();
	void eje_55();
	void eje_56();
	void eje_57();
	void eje_58();
	void eje_59();
	void eje_60();
	void eje_61();
	void eje_62();
	void eje_63();
	void eje_64();
	void eje_65();
	void eje_66();
	void eje_67();
	void eje_68();
	void eje_69();
	void eje_70();
	void eje_71();
	
	
int main(){
	int opc;
	titulo(" MENU PRINCIPAL");
	cout<<"\n\t\t1)Punto del 1-20";
	cout<<"\n\t\t2)Punto del 21-40";
	cout<<"\n\t\t3)Punto del 41-60";
	cout<<"\n\t\t4)Punto del 61-71";
	cout<<"\n\t\t-1)Salir";
	cout<<"\n\n\t\tIngrese alguna de las opciones: ";
	cin>>opc;
	switch(opc){
		case 1: 
			menu1();
			system("cls");
			cout<<"\n\n\n\n\t\t!DEBE INGRESAR UN VALOR DEL MENU";
			volver();
			break;
		case 2:
			menu2();
			system("cls");
			cout<<"\n\n\n\n\t\t!DEBE INGRESAR UN VALOR DEL MENU";
			volver();
			break;
		case 3:
			menu3();
			system("cls");
			cout<<"\n\n\n\n\t\t!DEBE INGRESAR UN VALOR DEL MENU";
			volver();
			break;
		case 4:
			menu4();
			system("cls");
			cout<<"\n\n\n\n\t\t!DEBE INGRESAR UN VALOR DEL MENU!";
			volver();
			break;
		case -1:
			cout<<"\n\n\t\t";
			system("pause");
			system("cls");
			cout<<"\n\n\n\n\n\n";
			linea(60);
			cout<<"\n\t\tRealizado por:Jaisson julian Valbuena Duarte";
			cout<<"\n\t\tN.Ficha: 2557475";
			cout<<"\n\t\tPrograma de formacion: ADSO\n";
			linea(60);
			cout<<"\n\n\n\n";
			system("pause");
			system("exit");
			break;
		default : {
			system("cls");
			cout<<"\n\n\n\n\t\t!DEBE INGRESAR UN VALOR DEL MENU!";
			volver();
		}
	}
}

void menu1(){
	string ms;
	int opc;
	//Color de fondo de la terminal
	system("color 8f");
	titulo(" LISTA DE EJERCICIOS 1-20");
	ms="\n\t\t1)Leer dos numeros y hacer operaciones";
	ms+="\n\t\t2)cual de los dos valores es mayor";
	ms+="\n\t\t3)Saber si es mayor, menor o igual a 100";
	ms+="\n\t\t4)Organizar 3 valores ascendentemente";
	ms+="\n\t\t5)Leer notas y aprobarlo o reprobarlo";
	ms+="\n\t\t6)Area de un triangulo";
	ms+="\n\t\t7)Par o impar";
	ms+="\n\t\t8)Vendedor de rosas";
	ms+="\n\t\t9)Ganancia de un empleado por ventas";
	ms+="\n\t\t10)Consecionario";
	ms+="\n\t\t11)Decremento de 3 en 3 desde 200";
	ms+="\n\t\t12)Serie de fibonacci";
	ms+="\n\t\t13)30 primeros numeros primos";
	ms+="\n\t\t14)Par, impar, suma, resta, diferencia";
	ms+="\n\t\t15)Operaciones";
	ms+="\n\t\t16)Divisible por 3";
	ms+="\n\t\t17)Primos dentro del rango dado";
	ms+="\n\t\t18)Reloj";
	ms+="\n\t\t19)Tabla de multiplicar";
	ms+="\n\t\t20)Determinar pares, impares, primos y no primos de 50 valores";	
	ms+="\n\t\t-1)Regresar";
	cout<<ms;
	cout<<"\n\n\t\tIngrese alguna opcion del menu: ";
	cin>>opc;
	switch (opc) {
		case 1:
			eje_1();
			break;
		case 2:
			eje_2();
			break;
		case 3:
			eje_3();
			break;
		case 4:
			eje_4();
			break;
		case 5:
			eje_5();
			break;
		case 6:
			eje_6();
			break;
		case 7:
			eje_7();
			break;
		case 8:
			eje_8();
			break;
		case 9:
			eje_9();
			break;
		case 10:
			eje_10();
			break;
		case 11:
			eje_11();
			break;
		case 12:
			eje_12();
			break;
		case 13:
			eje_13();
			break;
		case 14:
			eje_14();
			break;
		case 15:
			eje_15();
			break;
		case 16:
			eje_16();
			break;
		case 17:
			eje_17();
			break;
		case 18:
			eje_18();
			break;
		case 19:
			eje_19();
			break;
		case 20:
			eje_20();
			break;
		case -1:
			main();
			break;
		default : {
			system("cls");
			cout<<"\n\n\n\n\n\t\t!DEBE INGRESAR UN VALOR VALIDO!";
			volver();
			break;
		}
	
	}
}

void menu2(){
	string ms;
	int opc;
	//Color de fondo de la terminal
	system("color 8f");
	titulo(" LISTA DE EJERCICIOS 21-40");
	ms+="\n\t\t21)Suma de dos numeros cualquiera";
	ms+="\n\t\t22)Promedio de 3 notas";
	ms+="\n\t\t23)Area de un rectangulo";
	ms+="\n\t\t24)Area de una circunferencia";
	ms+="\n\t\t25)Area del terreno";
	ms+="\n\t\t26)Area de la figura similar a un helado";
	ms+="\n\t\t27)Vanta de galones de leche";
	ms+="\n\t\t28)Distancia de dos puntos en el plano cartesiano";
	ms+="\n\t\t29)Modista venta de tela";
	ms+="\n\t\t30)Volumen de la alberca";
	ms+="\n\t\t31)Mayor que o menor que";
	ms+="\n\t\t32)Positivo o negativo";
	ms+="\n\t\t33)Venta de lapices";
	ms+="\n\t\t34)El harapiento distinguido vendedor de trajes";
	ms+="\n\t\t35)Cual es mayor de los 3 ingresados";
	ms+="\n\t\t36)Langosta ahumada";
	ms+="\n\t\t37)Vinicultores venta de uva";
	ms+="\n\t\t38)Viajes escolares";
	ms+="\n\t\t39)Chimefon tarifa telefonica";
	ms+="\n\t\t40)Compañia de viajes precio por pasajero segun bus y distancia";
	ms+="\n\t\t-1)Regresar";
	cout<<ms;
	cout<<"\n\n\t\tIngrese alguna opcion del menu: ";
	cin>>opc;
	switch (opc) {
		case 21:
			eje_21();
			break;
		case 22:
			eje_22();
			break;
		case 23:
			eje_23();
			break;
		case 24:
			eje_24();
			break;
		case 25:
			eje_25();
			break;
		case 26:
			eje_26();
			break;
		case 27:
			eje_27();
			break;
		case 28:
			eje_28();
			break;
		case 29:
			eje_29();
			break;
		case 30:
			eje_30();
			break;
		case 31:
			eje_31();
			break;
		case 32:
			eje_32();
			break;
		case 33:
			eje_33();
			break;
		case 34:
			eje_34();
			break;
		case 35:
			eje_35();
			break;
		case 36:
			eje_36();
			break;
		case 37:
			eje_37();
			break;
		case 38:
			eje_38();
			break;
		case 39:
			eje_39();
			break;
		case 40:
			eje_40();
			break;
		case -1:
			main();
			break;
		default : {
			system("cls");
			cout<<"\n\n\n\n\n\t\t!DEBE INGRESAR UN VALOR VALIDO!";
			volver();
			break;
		}
	
	}
}

void menu3(){
	string ms;
	int opc;
	//Color de fondo de la terminal
	system("color 8f");
	titulo(" LISTA DE EJERCICIOS 41-60");
	ms+="\n\t\t41)Consultorio D.r Lorenzo precio por consulta";
	ms+="\n\t\t42)Paqueteria internacional";
	ms+="\n\t\t43)Cupos de tarjetas bancarias";
	ms+="\n\t\t44)Sorteo de premios en el supermercado";
	ms+="\n\t\t45)Ingresar valores y realizar operacion";
	ms+="\n\t\t46)Hallar si es primo, el factorial o la tabla de ultiplicar";
	ms+="\n\t\t47)Primos de 1 hasta N";
	ms+="\n\t\t48)Porcentaje de hombres y mujeres";
	ms+="\n\t\t49)Suma de 5 valores con for";
	ms+="\n\t\t50)Pares desde 1 hasta N";
	ms+="\n\t\t51)Ventas d eun supermercado";
	ms+="\n\t\t52)Suma de diez cantidades con while";
	ms+="\n\t\t53)Promedio de edades";
	ms+="\n\t\t54)estatura promedio";
	ms+="\n\t\t55)Ahorros";
	ms+="\n\t\t56)N numeros de la serie de fibonacci";
	ms+="\n\t\t57)Pago por horas en la semana";
	ms+="\n\t\t58)Encuentro de dos vehiculos en cierto punto de la carretera";
	ms+="\n\t\t59)Tiki Taka";
	ms+="\n\t\t60)Nomina de 50 obreros";	
	ms+="\n\t\t-1)Regresar";
	cout<<ms;
	cout<<"\n\n\t\tIngrese alguna opcion del menu: ";
	cin>>opc;
	switch (opc) {
		case 41:
			eje_41();
			break;
		case 42:
			eje_42();
			break;
		case 43:
			eje_43();
			break;
		case 44:
			eje_44();
			break;
		case 45:
			eje_45();
			break;
		case 46:
			eje_46();
			break;
		case 47:
			eje_47();
			break;
		case 48:
			eje_48();
			break;
		case 49:
			eje_49();
			break;
		case 50:
			eje_50();
			break;
		case 51:
			eje_51();
			break;
		case 52:
			eje_52();
			break;
		case 53:
			eje_53();
			break;
		case 54:
			eje_54();
			break;
		case 55:
			eje_55();
			break;
		case 56:
			eje_56();
			break;
		case 57:
			eje_57();
			break;
		case 58:
			eje_58();
			break;
		case 59:
			eje_59();
			break;
		case 60:
			eje_60();
			break;
		case -1:
			main();
			break;
		default : {
			system("cls");
			cout<<"\n\n\n\n\n\t\t!DEBE INGRESAR UN VALOR VALIDO!";
			volver();
			break;
		}
	
	}
}

void menu4(){
	string ms;
	int opc;
	//Color de fondo de la terminal
	system("color 8f");
	titulo(" LISTA DE EJERCICIOS 61-71");
	ms+="\n\t\t61)Caja resgistradora";
	ms+="\n\t\t62)sumar diez numeros con do while";
	ms+="\n\t\t63)Mayor, menor o igual a cero";
	ms+="\n\t\t64)Suma de diez numeros en un vector";
	ms+="\n\t\t65)Positvos, negativos en vectores";
	ms+="\n\t\t66)Buscar dato en vector de 100 elementos";
	ms+="\n\t\t67)Invertir datos de un vector";
	ms+="\n\t\t68)Promedio de lista indeterminada";
	ms+="\n\t\t69)notas aprobadas con matriz 5x5";
	ms+="\n\t\t70)Numeros menores a 100 oredenarlos ascendentes y promediarlos";
	ms+="\n\t\t71)Multiplicacion de matrices";
	ms+="\n\t\t-1)Regresar";	
	cout<<ms;
	cout<<"\n\n\t\tIngrese alguna opcion del menu: ";
	cin>>opc;
	switch (opc) {
		case 61:
			eje_61();
			break;
		case 62:
			eje_62();
			break;
		case 63:
			eje_63();
			break;
		case 64:
			eje_64();
			break;
		case 65:
			eje_65();
			break;
		case 66:
			eje_66();
			break;
		case 67:
			eje_67();
			break;
		case 68:
			eje_68();
			break;
		case 69:
			eje_69();
			break;
		case 70:
			eje_70();
			break;
		case 71:
			eje_71();
			break;
		case -1:
			main();
			break;
		default : {
			system("cls");
			cout<<"\n\n\n\n\n\t\t!DEBE INGRESAR UN VALOR VALIDO!";
			volver();
			break;
		}
	
	}
}

void mostrarV(int vector[],int n){
	for(int i=0;i<n;i++){
		cout<<vector[i]<<"\t";
	}
}

void cargarV(int v[],int n){
	srand(getpid());
	for(int i=0;i<n;i++){
		v[i]=rand()%500+1;
	}
}

/*Mostrar titulo*/
void titulo(string texto){
	system("cls");
	system("color 8f");
	linea(60);
	cout<<"\n\t\tGuia de C++ No.2"<<texto<<"\t\t"<<endl;
	linea(60);
}
//Crear linea de * segun el parametro ingresado
void linea(int n){
	cout<<"\n\n\t";
	for(int i=0;i<n;i++){
		cout<<char(205);
	}
	cout<<"\t\n\n";
}

void volver(){
	cout<<"\n\n\t\t";
	system("pause");
	system("cls");
	cout<<"\n\n\n\n\n\n";
	linea(60);
	cout<<"\n\t\tRealizado por:Jaisson julian Valbuena Duarte";
	cout<<"\n\t\tN.Ficha: 2557475";
	cout<<"\n\t\tPrograma de formacion: ADSO\n";
	linea(60);
	cout<<"\n\n\n\n";
	system("pause");
	main();
}

void eje_1(){
	float a, b;
	system("color 8f");
	
	titulo(" OPERACIONES BASICAS");
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
	volver();
}

void eje_2(){
	system("color 80");
	int a, b;
	
	titulo(" MAYOR QUE");
	cout<<"\tDebe ingresar dos valores para saber cual es mayor"<<endl<<endl;
	cout<<"\tIngrese el primer valor: ";
	cin>>a;
	cout<<"\tIngrese el segundo valor: ";
	cin>>b;
	if(a>b){
		cout<<"\n\t"<<a<<" es mayor que "<<b;
	}else if(a<b){
		cout<<"\n\t"<<b<<" es mayor que "<<a;
	}else{
		cout<<"\t\tLos dos valores son iguales";
	}
	volver();	
}

void eje_3(){
	system("color 8f");
	int a;
	
	titulo(" MAYOR, MENOR O IGUAL A 100");
	cout<<"Ingrese un numero: ";
	cin>>a;
	if(a==100){
		cout<<"\tEl numero es igual a 100";
	}else if(a<100){
		cout<<"\tEl valor es menor que 100";
	}else{
		cout<<"\tEl valor es mayor que 100";
	}
	volver();
}

void eje_4(){
	system("color 8f");
	int a,b,c;
	
	titulo(" ORDEN DE NUMEROS");
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
	volver();
}

void eje_5(){
	system("color 8f");
	double a, b, c, p;
	
	titulo(" APROBADO O REPROBADO");
	cout<<"\tIngrese la primera nota: ";
	cin>>a;
	cout<<"\tIngrese la segunda nota: ";
	cin>>b;
	cout<<"\tIngrese la tercera nota: ";
	cin>>c;
	cout<<endl<<endl;
	p = (a+b+c)/3;
	cout<<"\n\tSu promedio es de: "<<p;
	if(p >= 3.5) cout<<"\n\tAprobado";
	else cout<<"\n\tReprobado";
	volver();
}

void eje_6(){
	//Variables
	int b, h;
	
	titulo(" AREA DE UN TRIANGULO");
	cout<<endl<<"\t\tCalcular el area de un triangulo"<<endl<<endl;
	cout<<"\t\tIngrese la medidad de la base del triangulo: ";
	cin>>b;
	cout<<"\t\tIngrese la medidad de la altura del traingulo: ";
	cin>>h;
	cout<<endl<<endl<<endl;
	cout<<"\t\tEl area del triangulo es: "<<(b*h)/2;
	volver();	
}

void eje_7(){
	//Variables
	int n;
	
	titulo(" PAR O IMPAR");
	cout<<endl<<"\t\tSaber si el numero ingresado es par o impar";
	cout<<endl<<"\t\tIngrese algun valor: ";
	cin>>n;
	if(n%2 == 0)cout<<endl<<"\t\tEl numero ingresado es par";
	else cout<<endl<<endl<<"\t\tEl numero ingresado es impar";
	volver();
}

void eje_8(){
	//Variables
	string color, mensaje;
	int precio, docenas;
	float descuento;
	
	titulo(" VENTA DE ROSAS");
	cout<<endl<<"<\t\tCOLORES DE LAS ROSAS Y PRECIO POR DOCENA"<<endl<<endl;
	cout<<"\t\tRojo........$4.000"<<endl;
	cout<<"\t\tBlanco......$5.000"<<endl;
	cout<<"\t\tNegro.......$18.000"<<endl;
	cout<<"\t\tOtro........$6.000"<<endl;
	cout<<endl<<endl<<"\t\tIngrese 'exit' para salir"<<endl;
	cout<<endl<<endl<<"\t\tIngrese el color que desea: ";
	cin>>color;
	transform(color.begin(), color.end(), color.begin(), ::tolower);
	mensaje = "";
	if(color == "rojo"){
		cout<<endl<<"\t\tCuantas docenas de rosas va a llevar: ";
		cin>>docenas;
		precio = 4000;
		descuento = (precio*docenas)*0.10;
		cout<<endl<<"\t\tEl total a pagar por "<<docenas<<" docenas de rosas de color rojo es: "<<precio*docenas-descuento<<endl;
		system("pause");
		main();
	}else if(color == "blanco"){
		cout<<endl<<"\t\tCuantas docenas de rosas va a llevar: ";
		cin>>docenas;
		precio = 5000;
		descuento = (precio*docenas)*0.08;
		cout<<endl<<"\t\tEl total a pagar por "<<docenas<<" docenas de rosas de color blanco es: "<<precio*docenas-descuento<<endl;
		system("pause");
		main();
	}else if(color == "negro"){
		cout<<endl<<"\t\tCuantas docenas de rosas va a llevar: ";
		cin>>docenas;
		precio = 18000;
		descuento = (precio*docenas)*0.0;
		cout<<endl<<"\t\tEl total a pagar por "<<docenas<<" docenas de rosas de color negro es: "<<precio*docenas-descuento<<endl;
		system("pause");
		main();
	
	}else if(color == "exit"){
		system("exit");
	}else{
		cout<<endl<<"\t\tCuantas docenas de rosas va a llevar: ";
		cin>>docenas;
		precio = 6000;
		descuento = (precio*docenas)*0.02;
		cout<<endl<<"\t\tEl total a pagar por "<<docenas<<" docenas de rosas de otro color es: "<<precio*docenas-descuento<<endl;
		system("pause");
		main();
	}
	volver();
		
}

void eje_9(){
	//Variables
	int cp, vt;
	
	titulo(" VENTAS");
	cout<<endl<<"\t\tIngrese la cantidad de productos vendidos el dia de hoy: ";
	cin>>cp;
	cout<<endl<<"\t\tIngrese el valor del total de ventas de hoy: ";
	cin>>vt;
	if(cp>=0 and cp<=100){
		if(cp>=0 and cp<=20)cout<<endl<<"\t\tEn le dia obtuvo una ganancia de: "<<vt*0.05;
		else if(cp>=21 and cp<=50)cout<<endl<<"\t\tEn el dia obtuvo una ganancia de: "<<vt*0.10;
		else if(cp>=51 and cp<=80)cout<<endl<<"\t\tEn el dia obtuvo una ganancia de: "<<vt*0.15;
		else if(cp>=81 and cp<=100)cout<<endl<<"\t\tEn el dia obtuvo una ganancia de: "<<vt*0.20;
		else cout<<"No realizo suficientes ventas o supero el limite de 100 ventas";	
		
	}else cout<<"\t\tLa cantidad de productos solo puede estar entre 0 y 100 productos diarios";
	volver();
}

void eje_10(){
	//Variables
	string cl, mc;
	long long ml, pc;
	
	titulo(" CONSECIONARIO");
	cout<<endl<<"\t\tIngrese el precio del vehiculo: ";
	cin>>pc;
	cout<<endl<<"\t\tIngrese la marca del vehiculo: ";
	cin>>mc;
	cout<<endl<<"\t\tIngrese el color de su vehiculo: ";
	cin>>cl;
	transform(cl.begin(), cl.end(), cl.begin(), ::tolower);
	cout<<endl<<"\t\tIngrese el modelo de su vehiculo: ";
	cin>>ml;
	if(cl == "verde"){
		cout<<endl<<"\tPrecio: "<<pc<<endl<<"\tDescuento(15%)\n"<<"\tMarca: "<<mc<<endl<<"\tTotal: "<<(pc)-(pc*0.15);
	}else if(ml<1990){
		cout<<endl<<"\tPrecio: "<<pc<<endl<<"\tDescuento(20%)\n"<<"\tMarca: "<<mc<<endl<<"\tTotal: "<<(pc)-(pc*0.20);
	}else if(cl == "rojo" and ml>1995){
		cout<<endl<<"\tPrecio: "<<pc<<endl<<"\tDescuento(10%)\n"<<"\tMarca: "<<mc<<endl<<"\tTotal: "<<(pc)-(pc*0.10);
	}else{
		cout<<endl<<"\tPrecio: "<<pc<<endl<<"\tDescuento(0%)\n"<<"\tMarca: "<<mc<<endl<<"\tTotal: "<<pc;
	}
	volver();
}

/*3.2 REDUCTOR */
void eje_11(){
	int num;
	titulo("DECREMENTO");
	num = 200;
	while (num > 0){
		cout<<num<<"\n";
		num = num - 3;
	}
	volver();
}
/*3.3 SERIE DE FIBONACCI*/
void eje_12(){
	int a, b, c, num, i, acum;
	titulo("SERIE DE FIBONACCI");
	cout<<"Ingrese un numero mayor o igual a 10 y menor 100: ";
	cin>>num;
	a = 0;
	b = 1;
	acum = 0;
	if((num >= 10)and(num<=100)){
		for(i = 1;i <=num;i++){
			acum = acum + a;
			cout<<a;
			c = a+b;
			a = b;
			b = c;
			cout<<"\n";
		}
		cout<<"Se mostraron "<<num<<" numeros"<<"\n";
		cout<<"La suma de todos los numeros es: "<<acum;
	}else{
		cout<<"Numero invalido";
	}
	volver();
}
/*3.4 PRIMERO 30 NUMEROS PRIMOS*/
void eje_13(){
	int i=1,h=1;
	titulo("PRIMEROS 30 PRIMOS");
	while(i<30){
		bool prim = primo(h);
		if(prim == true){
			cout<<h<<endl;
			i++;
		}
		h++;
	}
	volver();
}

bool primo(int k){
	bool prim = true;
	for(int i = 2;i<k;i++){
		if((k%i)==0){
			prim = false;
			i=k;
		}
	}
	return prim;
}

/*3.5 MUESTRE LOS NUMEROS PARES E IMPARES*/
void eje_14(){
	int num, sumapares, sumaimpares, i;
	int promediopares, promedioimpares, diferencia;
	int cpares, cimpares, restapares, restaimpares;
	titulo("PARES E IMPARES");
	cout<<"Ingrese un valor mayor que 10: ";
	cin>>num;
	
	if(num > 10){
		sumapares = 0;
		sumaimpares = 0;
		cpares = 0;
		cimpares = 0;
		for(i = 1;i <=num;i++){
			if(i % 2 == 0){
				cout<<i<<" es par"<<endl;
				sumapares = sumapares + i;
				restapares = restapares - i;
				cpares++;	
			}else{
				cout<<i<<" es impar"<<endl;
				sumaimpares = sumaimpares + i;
				restaimpares = restaimpares - i;
				cimpares++;
			}
		}
		cout<<"La suma de los pares es: "<<sumapares<<endl;
		cout<<"La suma de los impares es: "<<sumaimpares<<endl;
		cout<<"La resta de los pares es: "<<restapares<<endl;
		cout<<"La resta de los impares es: "<<restaimpares<<endl;
		cout<<"El promedio de los numeros pares es: "<<sumapares / cpares<<endl;
		cout<<"El promedio de los numeros impares es: "<<sumaimpares / cimpares<<endl;
		cout<<"La diferencia entre la suma de pares e impares es: "<<sumapares - sumaimpares<<endl;
	}else{
		cout<<"El valor debe ser mayor que 10";
	}
	volver();
}
/*3.6 Operaciones por la opcion elegida*/
void eje_15(){
	int opcion, j, k, l, operacion;
	titulo("OPERACIONES");
	string mensaje = "\n\n\n\t";
	mensaje += "1) Suma (J+K)\n\t";
	mensaje += "2) Residuo (J%K)\n\t";
	mensaje += "3) Division (J/K)\n\t";
	mensaje += "4) Suma (J+K+L)\n\t";
	mensaje += "5) Multiplicacion (J*K*L)\n\t\n";
	mensaje += "\tEscribe el numero de la operacion a realizar\n\t>>> ";
	cout<<mensaje;
	cin>>opcion;
	
	if(opcion <=5 and opcion>=1){
		cout<<"\tElegiste la opcion: "<<opcion<<endl<<endl;
		cout<<"\tIngresa tres valores numericos"<<endl<<endl;
		cout<<"\t\tPrimer numero: ";
		cin>>j;
		cout<<"\t\tSegundo valor: ";
		cin>>k;
		cout<<"\t\tTercer valor: ";
		cin>>l;
		cout<<endl;
		
		switch(opcion){
			case 1:
				cout<<"\tEl resultado es: "<<j+k;
				break;
			case 2:
				cout<<"\tEl resultado es: "<<j%k;
				break;
			case 3:
				cout<<"\tEl resultado es: "<<j/k;
				break;
			case 4:
				cout<<"\tEl resultado es: "<<j+k+l;
				break;
			case 5:
				cout<<"\tEl resultado es: "<<j*k*l;	
		}
	}else{
		cout<<"El valor ingresado no esta en la lista de opciones";
	}
	volver();
}
/*3.7 DIVISIBLE ENTRE " Y 3*/
void eje_16(){
	int num;

	titulo("DIVISIBLE");
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
	volver();
}
/*3.8 NUMEROPS PRIMOS EN RANGO*/
void eje_17(){
	int a, b, contador, num, x, cont, nPrimos,i;
	titulo("PRIMOS EN RANGO");
	cout<<"\tIngrese dos valores mayores que 4 y que el primer numero sea mayor al segundo"<<endl;
	cout<<"\tPrimer valor: ";
	cin>>a;
	cout<<"\tSegundo valor: ";
	cin>>b;
	if((a>b) and ((a>4)and(b>4))){
		contador = 0;
		num = b;
		for(i = b; i <= a;i++){
			num = num + 1;
			x = 1;
			contador = 0;
			while(x <= num){
				if (num % x == 0){
					contador++;
				}
				x++;
			}  
			if(contador == 2){
				cout<<"\t"<<num<<endl;
			}
		}		
	}else{
		cout<<"El valor no cumple las condiciones";
	}
	volver();	
}
/*3.9 REJOJ HASTA 23:0:0*/
void eje_18(){
	int h,m,s;
	titulo("RELOJ");
	for(h=0;h<=23;h++){
		for(m=0;m<=59;m++){
			for(s=0;s<=59;s++){
				if(h<10) cout<<"0";
				cout<<h<<":";
				if(m<10) cout<<"0";
				cout<<m<<":";
				if(s<10) cout<<"0";
				cout<<s<<endl;
				if(h==1 and m==25 and s==12){
					h=24;m=60;s=60;
				}
			}
		}
	}
	volver();
}
/*3.10 TABLA DE MULTIPLICAR*/
void eje_19(){
	int a, b;
	titulo("TABLA DE MULTIPLICAR");
	cout<<"Ingrese un numero: ";
	cin>>a;
	
	for(b = 1;b <= 10;b++){
		cout<<"\t"<<b<<" * "<<a<<" = "<<b*a<<endl;
	}
	volver();
}
/*SOLICITAR 50 VALORES*/
void eje_20(){
	int n, i=0,cp,ci, cpr,cnpr;
	titulo("50 VALORES");
	srand(time(NULL));
	while(i<50){
		n = rand () % 150 + 4;
		cout<<n;
		if(n % 2 == 0)
			cp++;
		else
			ci++;
		if(primo(n)==true){
			cout<<" P";
			cpr++;
		}else
			cnpr++;
		cout<<"\t";
		i++;
	}
	cout<<"\n\n\t\tCantidad de pares:\t"<<cp;
	cout<<"\n\t\tCantidad de impares:\t"<<ci;
	cout<<"\n\n\t\tCantidad de primos:\t"<<cpr;
	cout<<"\n\t\tCantidad de No primos:\t"<<cnpr;
	volver();	
}


void eje_21(){
	//Variables
	int a,b,s;
	
	titulo(" SUMA DE 2 VALORES");
	cout<<"\t\tIngrese el valor de 'a': ";
	cin>>a;
	cout<<"\t\tIngrese el valor de 'b': ";
	cin>>b;
	s = a+b;
	cout<<"\n\t\tEl resultaod es: "<<s;
	volver();
}

void eje_22(){
	//Variables
	float c1,c2,c3,c4,s,p;
	
	titulo(" PROMEDIO");
	cout<<"\t\tIngrese sus 4 notas"<<endl;
	cout<<"\t\tprimera: ";
	cin>>c1;
	cout<<"\t\tSegunda: ";
	cin>>c2;
	cout<<"\t\tTercera: ";
	cin>>c3;
	cout<<"\t\tCuarta: ";
	cin>>c4;
	s = c1+c2+c3+c4;
	p = s/4;
	cout<<endl<<"El promedio final es: "<<p;
	volver();
}

void eje_23(){
	//Variables
	float a,b,area;
	
	titulo(" AREA DE UN RECTANGULO");
	cout<<"\t\tIngrese la medida en metros de la base del rectangulo: ";
	cin>>b;
	cout<<endl<<"\t\tIngrese la medida en metros de la altura del rectangulo: ";
	cin>>a;
	area = a*b;
	cout<<endl<<endl<<"\t\tEl area del rectangulo es: "<<area<<"m^2";	
	volver();
}

void eje_24(){
	//Variables
	float r, pi, area;
	
	titulo(" AREA DE UNA CIRCUNEFERENCIA");
	pi = 3.141592;
	cout<<"\t\tIngrese el valor del radio de la circunferencia: ";
	cin>>r;
	area = pi * pow(r,2);
	cout<<"\t\tEl area de la circunferencia es de: "<<area;
	volver();
}

void eje_25(){
	//Variables
	double b, a, c, at, ar, area;
	
	titulo(" AREA DEL TERRENO");
	cout<<"\t\tIngrese la medida de la base del terrono: ";
	cin>>b;
	cout<<endl<<"\t\tIngrese la altura del lado izquierdo del terreno: ";
	cin>>a;
	cout<<endl<<"\t\tIngrese la altura del aldo derecho del terreno: ";
	cin>>c;
	at = (b*(a-c))/2;
	ar = (b*c);
	area = at+ar;
	cout<<"\t\tEl area total del terreno es: "<<area;	
	volver();	
}

void eje_26(){
	//Variables
	double r,h,c,at,ac,pi,area;
	pi = 3.141592;
	
	titulo(" AREA DE UN CONO");
	cout<<"\n\t\tDigite la medida del radio del semicirculo: ";
	cin>>r;
	cout<<"\n\t\tDigite la medida de uno de los lados del cono: ";
	cin>>h;
	c = sqrt(pow(h,2)-pow(r,2));
	at = (c*r)/2;
	ac = (pi*pow(r,2))/2;
	area = (at*2)+ac;
	cout<<"\n\t\tEl area total de la figura es de "<<area<<"m^3";	
	volver();
}

void eje_27(){
	//Variables
	int l;
	double pg, tg, ga;
	
	titulo(" GANANCIA DE LA;VENTA DE LECHE");
	cout<<"\n\t\tCuantos litros produce en el dia: ";
	cin>>l;
	cout<<"\n\t\tCual es el precio de un galon de leche: ";
	cin>>pg;
	tg = l/3.785;
	ga = tg*pg;
	cout<<"\n\t\tPor la venta de "<<tg<<" galones obtuvo una ganancia de $"<<ga;
	volver();
}

void eje_28(){
	//Variables
	double y1,y2,x1,x2,x,y,d;
	
	titulo(" DISTANCIA ENTRE DOS PUNTOS");
	cout<<"\n\t\tingrese el valor de la coordenada x2: ";
	cin>>x2;
	cout<<"\n\t\tIngrese el valor de la coordenada x1: ";
	cin>>x1;
	cout<<"\n\t\tIngrese el valor de la coordenada y2: ";
	cin>>y2;
	cout<<"\n\t\tIngrese el vlaor de la coordenada y1: ";
	cin>>y1;
	x = x2-x1;
	y = y2-y1;
	d = sqrt(pow(x,2)+pow(y,2));
	cout<<"\t\tEl valor de la distancia entre los dos puntos es: "<<d;
	volver();
}

void eje_29(){
	//Variables
	double cm,pg;
	
	titulo(" IMPORTACION DE TELA");
	cout<<"\n\t\tIngrese la cantidad de metros de tela que requiere: ";
	cin>>cm;
	pg = cm*39.37;
	cout<<"\t\tPara "<<cm<<"mts convertidos a pulgadas es: "<<pg;
	volver();
}

void eje_30(){
	//Variables
	double a,l,n,cm,v,pag;
	
	titulo(" PRECIO POR METRO CUBICO");
	cout<<"\n\t\tMedida de la base de la alberca: ";
	cin>>l;
	cout<<"\n\t\tMedida de la altura de la alberca: ";
	cin>>a;
	cout<<"\n\t\tMedida del ancho de la alberca: ";
	cin>>n;
	cout<<"\n\t\tPrecio del metro cubico de agua: ";
	cin>>cm;
	//Volumen de la laberca
	v = a*l*n;
	//Pago a realizar 
	pag = cm*v;
	cout<<"\t\tEl precio por llenar la alberca es de $"<<pag<<" por "<<v<<"m^3";
	volver();
}

void eje_31(){
	//Variables
	int a,b,m;
	
	titulo(" MAYOR O MENOR");
	cout<<"\t\tIngrese el primer numero: ";
	cin>>a;
	cout<<"\t\tIngrese el segundo numero: ";
	cin>>b;
	if(a>b) cout<<"\t\t"<<a<<" Es mayor que "<<b;
	else if(b>a) cout<<"\t\t"<<b<<" Es mayor que "<<a;
	else cout<<"\t\tLos dos numero son iguales";
	volver();
}
	
void eje_32(){
	//Variables
	int num;
	string r;
	cout<<"\t\tIngrese un valor postivo o negativo: ";
	cin>>num;
	r = "";
	if(num == 0){
		r = "\t\tEs un valor neutro";
		cout<<r;
	} else if(num < 0){
		r = "\t\tEs un numero negativo -";
		cout<<r;
	}else{
		r = "\t\tEl valor es positivo +";
		cout<<r;
	} 	
	volver();
}

void eje_33(){
	//Variable
	int x;
	double pag;
	
	titulo(" PAgo POR LAPICES");
	cout<<"\t\tCuantos lapices va a comprar: ";
	cin>>x;
	if(x >= 1000) cout<<"\t\tEl valor a pagar por "<<x<<" lapices es de "<<x*85<<"$";
	else cout<<"\t\tEl valor a pagar por "<<x<<" lapices es de "<<x*90<<"$";
	volver();
}

void eje_34(){
	//Variables
	double ct,de,pf;
	
	titulo(" SASTRERIA");
	cout<<"\t\tCual es el precio del traje a comprar: ";
	cin>>ct;
	de = 0;
	if(ct >=2500) {
		de = 0.25;
		cout<<"\t\tEl precio a pagar por el traje es de "<<ct-(ct*de);
	}else{
		de = 0.08;
		cout<<"<\t\tEl precio a pagar por el traje es de "<<ct-(ct*de);
	}  
	volver();
}

void eje_35(){
	//Variables
	double a,b,c,m;
	
	titulo(" EL MAYOR");
	cout<<"\t\tIngrese el primer valor: ";
	cin>>a;
	cout<<"\t\tIngrese el segundo valor: ";  
	cin>>b;
	cout<<"\t\tIngrese el tercer valor: ";
	cin>>c;
	if(a>b and a>c) m = a;
	else if(b>a and b>c) m = b;
	else m = c;
	cout<<"\t\tDe los numero ingresados "<<m<<" es el mayor";
	volver();
}

void eje_36(){
	//Variables
	int np;
	float tdf;
	
	titulo(" LANGOSTA AHUMADA");
	cout<<"\t\tCuantas personas van a asistir al evento: ";
	cin>>np;
	if(np>=200 and np<=300) {
		cout<<"\n\t\t El presupuesto es de: $"<<np*85.00<<" por "<<np<<" personas.";
	}else if(np >300){
		cout<<"\n\t\t El presupuesto es de: $"<<np*75.00<<" por "<<np<<" personas.";
	}else{
		cout<<"\n\t\t El presupuesto es de: $"<<np*95.00<<" por "<<np<<" personas.";
	}
	volver();
}

void eje_37(){
	//Variables
	string ti;
	int ta, k;
	double p, ga;
	
	titulo(" KILO DE UVA");
	cout<<"\n\t\tCual es el precio del kilo de la uva: ";
	cin>>p;
	cout<<"\n\t\tCuantos kilos va a comprar: ";
	cin>>k;
	cout<<"\n\t\tCual es la clasificacion de las uvas: ";
	cin>>ti;
	cout<<"\n\t\tCual es el tamaño de las uvas: ";
	cin>>ta;
	transform(ti.begin(), ti.end(), ti.begin(), ::toupper);

	if(ti == "A"){
		if(ta == 1){
			p += 20;
			ga = p * k;
			cout<<"\n\t\tEl total a pagar por "<<k<<" kilos de uva es "<<ga;
		}else if(ta == 2){
			p +=30;
			ga = p * k;
			cout<<"\n\t\tEl total a pagar por "<<k<<" kilos de uva es "<<ga;
		}else{
			cout<<"\n\t\tDebe ingresar un tamaño valido";
		}
	}
	if(ti == "B"){
		if(ta == 1){
			p -= 30;
			ga = p * k;
			cout<<"\n\t\tEl total a pagar por "<<k<<" kilos de uva es "<<ga;
		}else if(ta == 2){
			p -=50;
			ga = p * k;
			cout<<"\n\t\tEl total a pagar por "<<k<<" kilos de uva es "<<ga;
		}else{
			cout<<"\n\t\tDebe ingresar un tamaño valido";
		}
	}
	volver();
	
}

void eje_38(){
	//Variables
	int na;
	double pa, tot;
	
	titulo(" ViAJES DE ESTUDIO");
	cout<<"\n\t\tCuantos alumnos van a viajar: ";
	cin>>na;
	tot = 4000.00;
	if(na >=100){
		pa = 65.00;
		tot = pa * na;
		cout<<"\n\t\tLos estudiantes deben pagar $"<<pa<<" y a la compañia de viajes debe pagarle $"<<tot;	
	}else if(na >=50 and na<=99){
		pa = 70.00;
		tot = pa * na;
		cout<<"\n\t\tLos estudiantes deben pagar $"<<pa<<" y a la compañia de viajes debe pagarle $"<<tot;	
	}else if(na>=30 and na<=49){
		pa = 95.00;
		tot = pa * na;
		cout<<"\n\t\tLos estudiantes deben pagar $"<<pa<<" y a la compañia de viajes debe pagarle $"<<tot;	
	}else{
		tot = 4000.00;
		cout<<"\n\t\tA la compañia de viajes debe pagarle "<<tot;	
	}
	volver();
}

void eje_39(){
	//Variables
	int ti;
	string di, tu;
	double pag = 0, imp, tot;
	
	titulo(" LLAMADAS CHIMEFON");
	cout<<"\n\t\tCuantos minutos duro la llamada: ";
	cin>>ti;
	tot = 0;
	if(ti>0){
		//5=1/5
		//3=80/240
		if(ti<=5){
			pag = 1;
			tot = ti*pag;
		}else if(ti<=8){
			pag = 80;
			tot = ((ti-5)*pag)+5;
		}else if(ti<=10){
			pag = 70;
			tot = ((ti-8)*pag)+245;
		}else{
			pag = 50;
			tot = ((ti-10)*pag)+385;
		}
		cout<<"\n\t\tCual es el tipo del dia actual(H=Dia habil/D=Domingo): ";
		cin>>di;
		transform(di.begin(), di.end(), di.begin(), ::toupper);
		if(di == "D") imp=0.03;
		else if(di == "H"){
			cout<<"\n\t\tCual es el tipo del turno(M=Matutino/V=Vespertino): ";
			cin>>tu;
			transform(tu.begin(), tu.end(), tu.begin(), :: toupper);
			if(tu == "M") imp = 0.15;
			else if(tu == "V") imp = 0.10;
			else cout<<"\n\t\tOcurrio un error inesperado";
		}else{
			cout<<"\t\t!Debe de ingresar un valor valido!";
			volver();
		} 
		cout<<"\n\t\tPago por tiempo: "<<pag;
		cout<<"\n\t\tPago por impuesto: "<<tot*imp;
		tot += (tot*imp);
		cout<<"\n\t\tEl total a pagar es: "<<tot<<endl<<endl;
		
	}else{
		cout<<"\n\t\t!Debe ingresar un numero valido!";
		volver();
	} 	
	volver();
}

void eje_40(){
	//Variables
	string ti;
	int km, npr, np;
	double ck, cp, to;
	
	titulo(" VIAJES EN AUTOBUS");
	cout<<"\n\t\tCuantos km hay en el recorrido: ";
	cin>>km;
	cout<<"\n\t\tCual es el tipo de autobus(A-B-C): ";
	cin>>ti;
	transform( ti.begin(), ti.end(), ti.begin(), ::toupper);
	cout<<"\n\t\tCual es el numero de personas que viajan: ";
	cin>>npr;
	if(ti == "A" or ti == "B" or ti == "C"){
		if(ti == "A") ck = km*2.0;
		else if(ti == "B") ck = km*+2.5;
		else if(ti == "C") ck = km*3.0;
		else cout<<"\n\t\t!Ocurrio un error inesperado!";

	}else{
		cout<<"\n\t\t!No ingreso una opcion valida!";
		volver();
	} 	
	
	if(npr<20) to = ck*20;
	else to = ck*npr;
	
	cout<<"\n\t\tEl total por el viaje es de $"<<to;
	cout<<"\n\t\tCada pasajero debe pagar $"<<to/npr;
	volver();
}

void eje_41(){
	//Variables 
	int nc,cc;
	double tot;
	
	titulo(" CONSULTAS MEDICAS");
	cout<<"\n\t\tIngrese el numero de citas: ";
	cin>>nc;
	if(nc<=3){
		cc=200;
		tot=nc*cc;
	}else if(nc<=5){
		cc=150;
		tot=((nc-3)*cc)+600;
	}else if(nc<=8){
		cc=100;
		tot=((nc-5)*cc)+900;
	}else{
		cc=50;
		tot=((nc-8)*cc)+1200;
	}	
	
	cout<<"\n\t\tEl apgo por la cita es de $"<<cc;
	cout<<"\n\t\tEl tratamiento costo $"<<tot;
	
	volver();
}

void eje_42(){
	//Variables
	int nz, pe;
	double co;
	
	titulo(" TRANSPORTE POR PESO");
	cout<<"\n\t\tCual es el peso del paquete en gramos: ";
	cin>>pe;
	if(pe<=5000){
		cout<<"\t\tZona  Ubicacion            Costo/Gramo";
		cout<<"\n\t\t1     America del norte    $11.00";
		cout<<"\n\t\t2     America del central  $10.00";
		cout<<"\n\t\t3     America del sur      $12.00";
		cout<<"\n\t\t4     Europa               $24.00";
		cout<<"\n\t\t5     Asia                 $27.00";
		cout<<endl<<endl<<"\t\tIngrese el destino del envio(1-5)";
		cin>>nz;
		if(nz<=5 and nz>=1){
			if(nz==1){
				co = pe*11.00;
				cout<<"\n\t\tEl coste de envio del paquete es de $"<<co;
			}else if(nz==2){
				co = pe*10.00;
				cout<<"\n\t\tEl coste de envio del paquete es de $"<<co;
			}else if(nz==3){
				co = pe*12.00;
				cout<<"\n\t\tEl coste de envio del paquete es de $"<<co;
			}else if(nz==4){
				co = pe*24.00;
				cout<<"\n\t\tEl coste de envio del paquete es de $"<<co;
			}else if(nz==5){
				co = pe*27.00;
				cout<<"\n\t\tEl coste de envio del paquete es de $"<<co;
			}
		}else cout<<"\n\t\t!DEBE DE INGRESAR UNA OPCION VALIDA";
	}else cout<<"\n\t\t!El PAQUETE SOBREPASA  EL PESO MINIMO!";
	volver();
}

void eje_43(){
	//Variables
	int tt;
	double la, ac,nc;
	titulo(" CREDITO DE LAS TARJETAS");
	cout<<"\n\t\tIngrese el tipo de tarjeta de mayor tipo que tenga: ";
	cin>>tt;
	cout<<"\n\t\tCual es el limite actual en su tarjeta: ";
	cin>>la;
	if(tt==1){
		ac = 0.25;	
		la += la*ac;
		nc = la;	
	}else if(tt==2){
		ac = 0.35;
		la += la*ac;
		nc = la;
	}else if(tt==3){
		ac = 0.40;
		la += la*ac;
		nc = la;
	}else{
		ac = 0.50;
		la += la*ac;
		nc = la;
	}
	cout<<"\n\t\tSu limite de la tarjeta fue actualizado";
	cout<<"\n\t\tAhora su nuevo limite es de "<<nc;
	volver();
	
}

void eje_44(){
	//Variables
	int pr;
	string gn, premio;
	double tot;
	
	//Numero random aleatorio cambiante
	srand(getpid());
	
	//Llamar numero aleatorio
	//pr = 1 + rand() % 3;
		
	titulo(" SORTEO POR SU COMPRA");
	cout<<"\n\t\tTotal de su compra: ";
	cin>>tot;
	if(tot>25000){
		premio = "";
		cout<<"\n\t\tSu compra supero los $25.000 ahora puede participar en el sorteo";
		cout<<"\n\t\tIndique su genero(M = Mujer||H = Hombre): ";
		cin>>gn;
		transform( gn.begin(), gn.end(), gn.begin(), ::toupper);
		if(gn == "M"){
			pr = 1+ rand() % 3;
			cout<<"\n\t\tSu numero de balota es: "<<pr;
			if(pr == 1) premio = "\n\t\t!Gano un kit de maquillaje!";
			else if(pr == 2) premio = "\n\t\t!Gano llevarse una prenda de ropa que desee!";
			else if(pr == 3) premio = "\n\t\t!Gano un cupon para su proxima compra!";
			else cout<<"hubo un error inesperado";
		}else if(gn == "H"){
			pr = 1 + rand() % 3;
			cout<<"\n\t\tSu numero de balota es: "<<pr;
			if(pr == 1) premio = "\n\t\t!Gano un cupon para su proxima compra!";
			else if(pr == 2) premio = "\n\t\t!Gano un carro coleccionable!";
			else if(pr == 3) premio = "\n\t\t!Gano un paqute de mercado!";
			else cout<<"Hubo un error inesperado";
			
		}else cout<<"!DEBE DE INGRESAR UN GENERO VALIDO!";
		
		cout<<premio;
	}
	volver();
		
}

void eje_45(){
	//Variables
	double n1, n2, opc;
	
	titulo(" OPERACIONES DE DOS NUMEROS POR MENU");
	cout<<"\n\t\tIngrese el primer numero: ";
	cin>>n1;
	cout<<"\n\t\tIngrese el segundo numero: ";
	cin>>n2;
	cout<<"\n\t\tQue operacion desea realizar";
	cout<<"\n\t\t1)Suma";
	cout<<"\n\t\t2)Resta";
	cout<<"\n\t\t3)Multiplicacion";
	cout<<"\n\t\t4)Division";
	cout<<"\n\n\t\tEscriba su opcion: ";
	cin>>opc;
	if(opc>=1 and opc<=4){
		if(opc==1){
			cout<<"\n\t\tLa suma de los dos numeros es de: "<<n1+n2;
		}else if(opc==2){
			cout<<"\n\t\tLa resta de los dos numeros es de: "<<n1-n2;
		}else if(opc==3){
			cout<<"\n\t\tLa multiplicacion de los dos numeros es de: "<<n1*n2;
		}else if(opc==4){
			cout<<"\n\t\tLa division de los dos numeros es de: "<<n1/n2;
		}else cout<<"\n\t\tOCurrio un error inesperado";
	}else cout<<"!DEBE DE INGRESAR UN VALOR VALIDO";
	volver();
}

void eje_46(){
	//Variables
	double num, opc, rs;
	
	titulo(" PRIMO-FACTORIAL-TABLA");
	cout<<"\n\t\t1)saber si es primo";
	cout<<"\n\t\t2)Factorial del numero";
	cout<<"\n\t\t3)Tabla de multiplicar";
	cout<<"\n\n\t\tCual operacion desea realizar: ";
	cin>>opc;
	cout<<"\n\t\tIngrese un numero: ";
	cin>>num;
	if(opc == 1){
		bool prim = primo(num);
		if(prim == true) cout<<"\n\t\tEl numero que ingreso es primo";
		else cout<<"\n\t\tEl numero no es primo";
	}else if(opc == 2){
		rs = 1;
		cout<<"\n\t\tEl resultado de !"<<num<<" factorial es: ";
		for(int i=1;i<=num;i++){
			cout<<i;
			rs*=i;
			if(i<num){
				cout<<"x";
			}
		}
		cout<<"="<<rs;
	}else if(opc == 3){
		for(int i = 0;i<=10;i++){
			cout<<"\n\t\t"<<num<<"*"<<i<<"="<<num*i;	
		}
	}else cout<<"\n\t\t!DEBE DE INGRESAR UN VALOR VALIDO";
	volver();
		
}

void eje_47(){
	//Variables
	int n;
	
	titulo(" PRIMO DE 1 A N");
	cout<<"\n\t\tIngrese el valor de n: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		bool prim = primo(i);
		if(prim) cout<<endl<<i;
	}
	volver();
}

void eje_48(){
	//variables
	int n, sh, sm, ph, pm;
	char v;
	
	titulo(" PORCENTAJE HOMBRES Y MUJERES");
	cout<<"\n\t\tIngrese la cantidad de datos a solicitar: ";
	cin>>n;
	sh=0;
	sm=0;
	for(int i=1;i<=n;i++){
		cout<<i<<"\n\t\tValor(H=Hombre/M=Mujer): ";
		cin>>v;
		v = toupper(v);
		if(v == 'H') sh++;
		else if (v=='M') sm++;
	}
	ph=sh*100/n;
	pm=sm*100/n;
	cout<<"\n\t\tEl procentaje de hombres es de %"<<ph<<endl;
	cout<<"\n\t\tEl procentaje de mujeres es de %"<<pm<<endl;
	volver();
	
}

void eje_49(){
	//Variables
	double num, sum;
	
	titulo(" SUMA CON FOR");
	sum=0;
	for(int i=1;i<=5;i++){
		cout<<"\n\t\t"<<i<<")Ingrese un numero: ";
		cin>>num;
		sum+=num;
	}
	cout<<"\n\t\tEl resultado de la suma es: "<<sum; 
	volver();
}

void eje_50(){
	//Variables
	int n;
	
	titulo(" PAR O IMPAR ENTRE ! A N");
	cout<<" \n\t\tIngrese el valor de n: ";
	cin>>n;
	for(int p = 1;p<=n;p++){
		if(p%2==0) cout<<"\n\t\t"<<p<<" es par";
	}
	volver();
}

void eje_51(){
	//Variables
	int ventas[15], valor, m1=0,m2=0, pm1=0, pm2=0;
	
	titulo(" VENTAS SUPERMERCADO");
	cout<<"\n\t\tVentas del mes";
	for(int i=0;i<15;i++){
		cout<<"\n\t\tIngrese el valor de la venta: ";
		cin>>valor;
		ventas[i]=valor;
	}
	cout<<"\n\n\t\tCuales ventas fueron mayores a 550";
	for(int i = 0;i<15;i++){
		if(ventas[i]>550){
			cout<<"\n\t\tLa venta de $"<<ventas[i];
			pm1+=ventas[i];
			m1++;
		}
	}	
	cout<<"\n\t\tCuales ventas fueron mayores a 200 y menores o iguales a 550";
	for(int i=0;i<15;i++){
		if(ventas[i]>200 and ventas[i]<=550){
			cout<<"\n\t\tLa venta de $"<<ventas[i];
			pm2+=ventas[i];
			m2++;
		} 
		else cout<<"\n\t\tLa venta fue menor a 200";
	}
		
	pm1/=m1;
	pm2/=m2;
	cout<<"\n\n\t\tCuántas ventas fueron mayores a 550: "<<m1;
	cout<<"\n\n\t\tCuántas ventas fueron mayores a 200 y menores o iguales a 550: "<<m1;
	cout<<"\n\n\t\tEl promedio de las ventas mayores a 550 es: "<<pm1;
	cout<<"\n\t\tEl promedio de las ventas mayores a 200 y menores o iguales 550 es: "<<pm2;
	
	volver();
}

void eje_52(){
	//Variables
	int va, su, c;
	
	titulo(" SUMA CON UN WHILE");
	
	c=1;
	su=0;
	while(c<=10){
		cout<<c<<")Ingrese un valor: ";
		cin>>va;
		su+=va;
		c++;
	}
	cout<<"\n\t\tEl resultadoo de la suma es: "<<su;
	volver();	
}

void eje_53(){
	//Variables
	int c, ed, su, nu;
	double pr;
	cout<<"\n\t\tCuantos alumnos van a promediar: ";
	cin>>nu;
	su=0;
	for(c = 1;c<=nu;c++){
		cout<<c<<")Ingrese su edad: ";
		cin>>ed;
		su+=ed;
	}
	pr = su/nu;
	cout<<"\n\t\tEl promedio de edades es: "<<pr;
	volver();
}

void eje_54(){
	//Variables
	int c,a,b;
	double es, su, pr;
	
	titulo(" PROMEDIO ESTATURAS");
	cout<<"\n\t\tIngrese '-1' para terminar de ingresar datos";
	c=0;
	su=0;
	
	do{
		cout<<"\n\t\t"<<c+1<<")Ingrese su estatura en metros: ";
		cin>>es;
		if(es>=0.3 && es<=2.3){
			su+=es;
			c++;
			pr=su/c;
			cout<<"\n\t\tCantidad de personas registradas:\t"<<c;
			cout<<"\n\t\tEl promedio de estaturas es de: "<<pr;
		}
	}while(es>0.3 && es <=2.3);
	cout<<"\n\n\n\t";
	volver();	
}

void eje_55(){
	//Variables
	double ah;
	int m, ca;
	
	ca=0;
	m=0;
	titulo(" AHORROS");
	do{
		cout<<"\n\t\t"<<m<<")El ahorro actual es: "<<ca;
		cout<<"\n\t\tingrese el monto a ahorrar: ";
		cin>>ah;
		ca+=ah;
		m++;
		if(m==12) cout<<"\n\t\tSu ahorro en este año es de: $"<<ca;
	}while(m<=12);
	volver();
}

void eje_56(){
	int a, b, c, n, i, m;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	a = 0;
	b = 1;
	m = 0;
	if(m<=n){
		for(i = 1;i <=n;i++){
			m = m + a;
			cout<<a;
			c = a+b;
			a = b;
			b = c;
			cout<<"\n";
		}
		cout<<"Se mostraron "<<n<<" numeros"<<"\n";
		cout<<"La suma de todos los numeros es: "<<m;
	}else{
		cout<<"Numero invalido";
	}
	volver();
}

void eje_57(){
	//Variables
	int d, sh, ht;
	double ph, su;
	
	titulo(" PAGO HORAS");
	d=0;
	sh=0;
	cout<<"\n\t\tCuanto se paga cada hora laborada: ";
	cin>>ph;
	for(int i = 1;i<=6;i++){
		cout<<"\n\t\tCuantas horas trabajo en el dia"<<i<<": ";
		cin>>ht;
		sh+=ht;
		d++;
	}
	su=sh*ph;
	cout<<"\n\t\tEl trabajador laboro un total "<<sh<<" horas en la semana";
	cout<<"\n\t\tSu sueldo semanal es de $"<<su;
	volver();
}

void eje_58(){
	//Variables
	double ka, kb;
	int r;
	
	titulo(" ENCUENTRO DE CARRETERA");
	ka=70;
	kb=150;
	r=150-70;
	cout<<"\n\t\tLos dos vehiculos se encuentran en el km "<<(r/2)+ka;
}

void eje_59(){
	//Variables
	double n, cn, v, t1=0, t2=0, t3=0, tt=0;
	int a=0, b=0, c=0;
	
	titulo(" TIKI TAKA");
	cout<<"\n\t\tCuantas ventas hizo en el dia: ";
	cin>>n;
	for(cn=1;cn<=n;cn++){
		cout<<"\n\t\t"<<cn<<")Valor de la venta: ";
		cin>>v;
		tt+=v;
		if(v>1000){
			a++;
			t1+=v;
		}else if(v>500 and v<=1000){
			b++;
			t2+=v;
		}else{
			c++;
			t3+=v;
		} 
	}
	cout<<"\n\t\t"<<a<<" ventas fueron mayores que $1000, el total de las ventas fue de $"<<t1;
	cout<<"\n\t\t"<<b<<" ventas fueron mayores a $500 y menores o iguales $1000, el total de las ventas fue de $"<<t2;
	cout<<"\n\t\t"<<c<<" ventas fueron menores o iguales a $500, el total de las ventas fue de $"<<t3;
	cout<<"\n\n\t\tEl total de ventas en el dia fueron de $"<<tt;
}

void eje_60(){
	//Variables
	int hr, pg;
	double tot;
	
	pg=30000;
	titulo(" NOMINA A TRABAJADORES");
	cout<<"\n\t\tCuantas horas de trabajo se realizaron: ";
	cin>>hr;
	hr*=50;
	pg*=hr;
	cout<<"\n\t\tEl pago total a pagar por la nomina de los 50 obreros es de $"<<pg;
	cout<<"\n\t\tDebe pagar "<<pg/50<<" a cada empleado";
	
}

void eje_61(){
	//Variables
	int b1, b2,b3,b4,b5,b6,b7,b8,b9,b0,tcl,pc,su;
	
	titulo(" CAJA REGISTRADORA");
	cout<<"\n\t\tCAJA REGISTRADORA";
	cout<<"\n\t\t1)Manzana($3500)";
	cout<<"\n\t\t2)Pera($2500)";
	cout<<"\n\t\t3)Mango($3000)";
	cout<<"\n\t\t4)Guayaba($2000)";
	cout<<"\n\t\t5)Banano($4000)";
	cout<<"\n\t\t6)Uva($1800)";
	cout<<"\n\t\t7)Limon($2000)";
	cout<<"\n\t\t8)Naranja($1500)";
	cout<<"\n\t\t9)Piña($1000)";
	cout<<"\n\t\t0)Otro";
	cout<<"\n\n\t\t-1)SALIR";
	su = 0;
	do{
		cout<<"\n\t\tTOTAL: "<<su;
		cout<<"\n\t\tIngrese el numero del producto: ";
		cin>>tcl;
		if(tcl==1){
			pc=3500;
			su+=pc;
		}else if(tcl==2){
			pc=2500;
			su+=pc;
		}else if(tcl==3){
			pc=3000;
			su+=pc;
		}else if(tcl==4){
			pc=2000;
			su+=pc;
		}else if(tcl==5){
			pc=4000;
			su+=pc;
		}else if(tcl==6){
			pc=1800;
			su+=pc;
		}else if(tcl==7){
			pc=2000;
			su+=pc;
		}else if(tcl==8){
			pc=1500;
			su+=pc;
		}else if(tcl==9){
			pc=1000;
			su+=pc;
		}else if(tcl==0){
			cout<<"\n\t\tIngrese el precio el producto: ";
			cin>>pc;
			su+=pc;
		}else if(tcl==-1)break; 
		else cout<<"\n\t\t!DEBE INGRESAR UN VALOR DEL TECLADO VALIDO";
		
	}while(tcl != -1);
	cout<<"\n\t\tTOTAL: $"<<su;	
	volver();
}

void eje_62(){
	//variables
	int c;
	double va, su;
	
	titulo(" SUMA DE != CANTIDADES CON DO WHILE");
	c = 1;
	su = 0;
	do{
		cout<<"\n\t\t"<<c<<")Ingrese el numero : ";
		cin>>va;
		su += va;
		c++;
	}while(c <= 10);
	cout<<"\n\t\tEl total de la suma es de "<<su;
	volver();
}

void eje_63(){
	//Variables
	int c, ca, cp, cn;
	double nu;
	
	titulo(" POSITIVO_NEGATIVO_NEUTRO");
	cout<<"\n\t\tIngrese el valor de n: ";
	cin>>ca;
	cp = 0;
	cn = 0;
	for(c = 1;c<=ca;c++){
		cout<<"\n\t\tIngrese un numero: ";
		cin>>nu;
		if(nu>0) cp++;
		else if(nu<=0) cn++;	
	}
	
	cout<<"\n\t\t"<<cp<<" numeros son positivos";
	cout<<"\n\t\t"<<cn<<" numeros son negativos";	
	
}

void eje_64(){
	//Variables
	int vec[10], sum;
	
	titulo(" 10 NUMEROS EN VECTOR");
	sum=0;
	for(int i = 0;i<10;i++){
		cout<<"\n\t\t"<<i+1<<")Ingrese un valor: ";
		cin>>vec[i];
		sum+=vec[i];
	}
	cout<<"\n\t\tEl resultado de la suma es: "<<sum;
	volver();
}

void eje_65(){
	/*3.65 Diagrama que toma N datos,guardando los positivos en un vector,
	 los números negativos se guardan en otro vector; también se hallan las sumas de 
	 los positivos y negativos separadamente,buscándose además
	 el mayor y el Menor de los números*/
	//Variales
	int cp, cn, sp, sn, n, may, men, num, i;
	
	titulo(" POSITIVO Y NEGATIVO EN VECTORES");
	cout<<"\n\t\tIngrese el valor de N: ";
	cin>>n;
	//Inicialización de vectores
	int p[n] , m[n];
	cp=0;
	cn=0;
	
	for(i=0;i<n;i++){
		cout<<"\n\t\t"<<i+1<<")valor: ";
		cin>>num;
		if(num>0){
			p[i]=num;
			cp++;
			sp+=p[i];
		}else if(num<0){
			m[i]=num;
			cn++;
			sn+=m[i];
		}
		
	}
	may=p[0];
	men=m[0];
	for(i=0;i<n;i++){
		if(may<p[i]) may=p[i];
	}
	for(i=0;i<n;i++){
		if(men>m[i]) men=m[i];
	}
	
	cout<<"\n\n\t\tSUMAS";
	cout<<"\n\t\tLa suma de los positivos es: "<<sp;
	cout<<"\n\t\tLa suma de los negativos es: "<<sn;
	cout<<"\n\n\t\tMAYOR Y MENOR";
	cout<<"\n\t\tEl valor mas grande es: "<<may;
	cout<<"\n\t\tEl valor mas pequeño es: "<<men;
	volver();
}

void eje_66(){
	//Variablrs
	int x, i, vector[100];
	
	titulo(" BUSCADOR");
	cargarV(vector,100);
	mostrarV(vector, 100);	
	cout<<"\n\t\tIngrese el valor que quiere buscar: ";
	cin>>x;
	for(i=0;i<100;i++){
		if(vector[i]==x){
			cout<<"\n\t\tSe encontro :"<<vector[i];
			cout<<"\n\t\tEsta en la posicion: "<<i;
		}
	}
	volver();
	
}

void eje_67(){
	//Variables
	int v[25], a, x;
	
	titulo(" INVERTIR VECTOR");
	
	cout<<"\n\t\tVector original";
	cout<<endl;
	cargarV(v,25);
	mostrarV(v,25);

	for(x = 0;(24-x)>x;x++){
		a=v[x];
		v[x] = v[24-x];
		v[24 - x] = a;

	}
	cout<<"\n\t\tVector invertido"<<endl;
	mostrarV(v,25);	
	volver();
}

void eje_68(){
	//Variables
	int i, sum, n;
	
	titulo(" PROMEDIO DE LISTA INDETERMINADA");
	sum=0;
	i=0;
	do{
		cout<<"\n\t\tIngrese un valor positivo: ";
		cin>>n;
		if(n>0){
			sum += n;
			i++;
		}
		cout<<"\n\t\tEl promedio actual es: "<<float(sum/i);
	}while(n>=0);
	cout<<"\n\t\tEl promedio final es: "<<float(sum/i);
	volver();
}

void eje_69(){
	//Variables
	float notas[5][5];
	int i;
	
	titulo(" MATRIZ 5X5 CON NOTAS");
	srand(getpid());
	for(i=0;i<5;i++){
		for(i=0;i<5;i++){
			
		}
	}
	volver();
}

void eje_70(){
	
}

void eje_71(){
	
}
/*
#include <stdio.h>

#define FILAS_MATRIZ_B 3
#define COLUMNAS_MATRIZ_B 2
#define FILAS_MATRIZ_A 3
#define COLUMNAS_MATRIZ_A 3


    int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = {
            {3, 2, 1},
            {1, 1, 3},213
            {0, 2, 1},
    };
    int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] = {
            {2, 1},
            {1, 0},
            {3, 2},
    };

    if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
        printf("Columnas de matriz A deben ser igual a filas de matriz B");

    }
    //Lugar en donde se almacena el resultado
    int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B];

    // Necesitamos hacer esto por cada columna de la segunda matriz (B)
    for (int a = 0; a < COLUMNAS_MATRIZ_B; a++) {
        // Dentro recorremos las filas de la primera (A)
        for (int i = 0; i < FILAS_MATRIZ_A; i++) {
            int suma = 0;
            // Y cada columna de la primera (A)
            for (int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
                // Multiplicamos y sumamos resultado
                suma += matrizA[i][j] * matrizB[j][a];
            }
            // Lo acomodamos dentro del producto
            producto[i][a] = suma;
        }
    }

    // Recorrer producto
    printf("Imprimiendo producto\n");
    for (int i = 0; i < FILAS_MATRIZ_B; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ_B; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }*/











