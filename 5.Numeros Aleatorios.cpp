/*
Hacer un programa para generar números enteros aleatorios en un vector de tamaño N.
Los números aleatorios están en el rango de un mínimo a un máximo
*/
#include<iostream>
#define MAX 100
#include"math.h"
using namespace std;
int funcion(int v[],int r[],int seed,int n,int min,int max);
int main()
{	
//int rand();
int v[MAX],seed,n,min,max,r[MAX];
cout<<"Ingrese un numero aleatorio, que servira como seed para hacer los demas numeros aleatorios: "<<endl;
cin>>seed;


cout<<"Ingrese el valor minimo del rango para los numeros aleatorios: "<<endl;
cin>>min;
do
{
cout<<"Ingrese el valor maximo del rango para los numeros aleatorios: "<<endl;
cin>>max;
	
}while(min>=max);

do
{
cout<<"Ingrese el numero de elementos que tendra su vector,este debe ser menor o igual al tamano de rango: "<<endl;
cin>>n;	
}while((n<=0)||(n>30)||(n<(max-min)));
	

funcion(v,r,seed,n,min,max);


for(int f=0; f<n; f++)
{
	cout<<f+1<<". --> "<<v[f]<<endl;
}

	

}
int funcion(int v[],int r[],int seed,int n,int min,int max)
{
int i=0,k=1,l=0;
cout<<endl<<endl<<endl<<l<<endl<<endl<<endl;
while(i<n)
{
	if((r[k]<=max)&&(r[k]>=min))
	{
	v[i]=r[k];
//	cout<<v[i]<<"kk"<<endl;
//	cout<<i<<"i"<<endl;
	i++;
	k++;
	cout<<k<<"fr"<<endl;
	r[k]=pow(-1,i)*pow(i+k,i)+seed;
	}else
	{
		while((r[k]>max)||(r[k]<min))
		{
		
			{
				if(r[k]>max)
				{
					r[k]=r[k]-((max-min)/(2));	
				}
				/*
				else//(r[k]<max)
				{
					r[k]=r[k]+(max/2);	
				}	
				*/
				if((r[k]<min))
				{
					r[k]=r[k]+((max-min)/(2));	
				}
				/*
				else//(r[k]>min)
				{
					r[k]=r[k]-((max-min)/2);	
				}	
				*/
			
			//Por si los valores de los elementos se empiezan repetir
			
			if(r[k]==r[k-l])
			{
				l++;
				r[k]=pow(l,l);
			}	
				
		}
	}
		
}	
}
}
