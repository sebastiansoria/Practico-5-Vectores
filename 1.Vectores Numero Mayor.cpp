/*
Hacer un programa para sacar el máximo valor de un vector de valores ya sean reales o
enteros.
*/
#include<iostream>
using namespace std;
float etesech(float max[],int);
float elpepe(float max[],int);
#define MAX 100
int main()
{
int n;
float max[MAX];
cout<<"Este programa imprime el maximo valor entre los elementos de un vector"<<endl<<"Ingrese el tamanno del vector: ";
cin>>n;
etesech(max,n);
cout<<"El numero mayor es: "<<elpepe(max,n)<<endl;

	
}
float etesech(float max[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor numero ["<<i<<"]: ";
		cin>>max[i];
	}	
}

float elpepe(float max[],int n)
{
	float M=0;
	// Nota: El valor de max[0] va a ser cambiado a cualquiera sea el nuevo valor mayor, se puede resolver pero no se necesario
	for(int i=0;i<n;i++)
	{
		if(max[0]<max[i])
		{
		max[0]=max[i];	
		}
	
	}
	M=max[0];	
	return M;
	
}
