//10. Intercalar dos vectores A y B de tamaño n y m, clasificarlos ascendentemente 
//respectivamente en uno solo de tal forma que el resultado sea un vector clasificado.
#include<iostream>
#define MAX 100
using namespace std;
float guardar(float v[],int x);
float unir(float a[],float b[],float c[],int n,int m);
float ordenar(float c[],int z);
float mostrar(float c[],int z);
int main()
{
	float a[MAX],b[MAX],c[MAX];
	int n,m,z;
	do
	{
		cout<<"Ingrese el tamano del primer vector: "<<endl;
		cin>>n;	
	}while((n<=0)||(n>100));
	guardar(a,n);
	
	do
	{
		cout<<"Ingrese el tamano del segundo vector: "<<endl;
		cin>>m;	
	}while((m<=0)||(m>100));
	guardar(b,m);
	
	unir(a,b,c,n,m);
	z=n+m;
	ordenar(c,z);
	mostrar(c,z);
}
float guardar(float v[],int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<"Ingrese el elemento ["<<i<<"] de vector: "<<endl;
		cin>>v[i];
	}
}
float unir(float a[],float b[],float c[],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	
	for(int i=n;i<n+m;i++)
	{
		c[i]=b[i-n];
	}
}
float ordenar(float c[],int z)
{
	int aux;
	//Corremos el algoritmo z veces para que el ultimo elemento del vector pueda moverse hasta la la primera posicion en caso de ser el elemnto con 
	//menor valor en el vector
	for(int k=0;k<z;k++)
	{
		for(int i=0;i<z-1;i++)
		{
		
			if(c[i]>c[i+1])//Comparamos el elemento i con cada uno de los elementos siguientes hasta z
			{
				aux=c[i];
				c[i]=c[i+1];
				c[i+1]=aux;
			}
		}	
	}
	
	
}

float mostrar(float c[],int z)
{
		for(int i=0;i<z;i++)
	{
		cout<<"El elemento ["<<i<<"] es : "<<c[i]<<endl;
	}
}
