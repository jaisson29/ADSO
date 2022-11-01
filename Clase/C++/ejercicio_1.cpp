#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main(){
	int a,b,c;
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"Ingrese otro numero: ";
	cin>>b;
	cout<<"ingrese un tercer numero";
	cin>>c;
	cout<<"\n\n\n";
	cout<<"\t"<<a<<" + "<<b<<" = "<<(a+b)<<"\n";
	cout<<"\t"<<a<<" - "<<b<<" = "<<(a-b)<<"\n";
	cout<<"\t"<<a<<" * "<<b<<" = "<<(a*b)<<"\n";
	if(b != 0){
		cout<<"\t"<<a<<" / "<<b<<" = "<<(a/b)<<"\n";
	}else{
		cout<<"La division entre 0 es imposible";
	}
		
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

