#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 1f");
	int edad[3][3],a,b;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
		cout<<"ingrese edad: ";
		cin>>edad[a][b];
		}
	}
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			cout<<edad[a][b];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"matriz por 2"<<endl;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			cout<<edad[a][b]*2;
			cout<<" ";
		}
		cout<<endl;
	}
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			cout<<pow((edad[a][b]),3);
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

