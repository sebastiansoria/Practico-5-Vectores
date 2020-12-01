#include<iostream>
using namespace std;
float Funcion(float v[],int n);
#define K 100
int main()
{
	int n;
	float v[K];
	cout<<"Este programa calcula si algun valor del arreglo es igual la suma del resto de los valores "<<endl;
	cout<<"Ingrese cuantos valores desea usar: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor numero ["<<i<<"]";
		cin>>v[i];
	}
	Funcion(v,n);
}
float Funcion(float v[],int n)
{
	float sumaD=0,sumaI=0,x,f,p;
	
	
	for(int i=0;i<n;i++)
	{
	i=p;
	sumaI = sumaI + v[i+1];	
	
	if(v[0]==sumaI)
	{
	cout<<v[i]<<" es igual a la suma del resto de los valores en el vector ";	
	}
	
	else 
	v[0]=f;
	v[0]=v[i];
	v[i]=f;
	x=1;
	}
	
	
	
	if(x==1)
	{
	cout<<"v"<<"->"<<p<<"Ningun valor es igual a la suma del resto de los valores en el vector ";	
	}

}	
		
		

	
/*	sumaI = sumaI + v[i+1];
	while(i>=0)
	{
	sumaD = sumaD + v[i-1];	
	}
*/	
