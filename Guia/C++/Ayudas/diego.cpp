
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
	int m[4][3],i,j;
	system("color 1f");
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
		cout<<"digite numero ";
		cin>>m[j][i];
			
		}
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			cout<<m[j][i];
			cout<<" ";
		}
	cout<<endl;	
	}
cout<<"matriz por 2"<<endl;
	
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			cout<<m[j][i]*2;
			cout<<" ";
		}
		cout<<endl;	
	}
	cout<<"matriz al cubo"<<endl;
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			cout<<pow((m[j][i]),3);
			cout<<" ";
		}
		cout<<endl;	
	}
	
	return 0;
}
