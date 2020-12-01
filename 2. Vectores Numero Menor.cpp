/*
. Hacer un programa para sacar el mínimo valor de un vector de valores ya sean reales o
enteros
*/
#include<iostream>
using namespace std;
float etesech(float ,int);
float elpepe(float min[],int);
#define V 100
int main()
{
int n;
float min[V];
cout<<"Este programa imprime el maximo valor entre los elementos de un vector"<<endl<<"Ingrese el tamanno del vector: ";
cin>>n;
etesech(min,n);
cout<<"El numero mayor es: "<<elpepe(min,n)<<endl;

	
}
float etesech(float min[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor numero ["<<i<<"]: ";
		cin>>min[i];
	}	
}

float elpepe(float min[],int n)
{
	float M=0;
	// Nota: El valor de max[0] va a ser cambiado a cualquiera sea el nuevo valor mayor, se puede resolver pero no se necesario
	for(int i=0;i<n;i++)
	{
		if(min[0]>min[i])
		{
		min[0]=min[i];	
		}
	
	}
	M=min[0];	
	return M;
	
}
