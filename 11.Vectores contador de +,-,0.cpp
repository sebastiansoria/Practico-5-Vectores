//Hacer un programa que permita contar número de valores negativos, positivos y ceros que
//hay en un vector
#include<iostream>
#define MAX 100
using namespace std;
float guardar(float a[],int n);
float contar(float a[],int n,int &i,int &j,int &k);
float mostrar(int &i,int &j,int &k);
int main()
{
int n,i=0,j=0,k=0;
float a[MAX];

do 
{
	cout<<"Ingrese el tamanno del vector: "<<endl;
	cin>>n;	
}while((n<=0)||(n>100));

guardar(a,n);
contar(a,n,i,j,k);
mostrar(i,j,k);

}

float guardar(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor del elemento ["<<i<<"] del vector: ";
		cin>>a[i];
	}
}

float contar(float a[],int n,int &i,int &j,int &k)
{
	for(int x=0;x<n;x++)
	{
		if(a[x]>0)
		{
		i++;	
		}
		else
		{
			if(a[x]==0)
			{
				j++;
			}
			else//a[x]<0
			{
				k++;	
			}
		}	
	}
	

}

float mostrar(int &i,int &j,int &k)
{
	cout<<"Hay "<<i<<" valore(s) positivos en el vector"<<endl;
	cout<<"Hay "<<j<<" valore(s) iguales a cero en el vector"<<endl;
	cout<<"Hay "<<k<<" valore(s) negativos en el vector"<<endl;	
}

