/*
9. Concatenar dos vectores de tamaño n y m respectivamente. [a1,a2,......an;] [b1,b2,....bm];
concatenado resulta [a1,a2,......an,b1,b2,....bm] con n+m elementos.
*/
#include<iostream>
#define M 100
using namespace std;
float guardar(float a[],int x);
float concatenar(float a[],float b[],float c[],int n,int m);
float mostrar(float c[],int n,int m);
int main()
{
	float v1[M],v2[M],v3[M];
	int n,m,i=0;
	while(i==0)
	{	
	cout<<"Ingrese el numero de elementos que va a utilisar para el vector 1: ";
	cin>>n;	
	if((n>0)&&(n<=100))
	{
		i=1;	
	}
	else
	{
	cout<<"Error: El numero de elementos ingresado no es valido"<<endl;
	}	
	}
	guardar(v1,n);
	i=0;
	while(i==0)
	{	
	cout<<"Ingrese el numero de elementos que va a utilisar para el vector 2: ";
	cin>>m;
	if((m>0)&&(m<=100))
	{
		i=1;	
	}	
	else
	{
	cout<<"Error: El numero de elementos ingresado no es valido"<<endl;
	}	
	}
	guardar(v2,m);
	
	concatenar(v1,v2,v3,n,m);
	mostrar(v3,n,m);
	
	
}
float guardar(float a[],int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<"Ingrese el elemento ["<<i+1<<"] de este vector: ";
		cin>>a[i];
	}	
}
float concatenar(float a[],float b[],float c[],int n,int m)
{
		for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}	
	
		for(int i=0;i<m;i++)
	{
		c[n+i]=b[i];
	}	
}
float mostrar(float c[],int n,int m)
{
	for(int i=0;i<n+m;i++)
	{
		cout<<"El elemento ["<<i+1<<"] del vector concatenado es: ";
		cout<<c[i]<<endl;
	}	
}
