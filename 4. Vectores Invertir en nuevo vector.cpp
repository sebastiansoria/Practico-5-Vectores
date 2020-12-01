 /*
 Hacer un programa para revertir la lista de valores de un vector, en otro vector, es decir se
debe mantener el vector original.
*/
#include<iostream>
using namespace std;
float Guardar(float v[],int n);
float Invertir(float w[],float v[],int n);
int main()
{
	int n;
	cout<<"Ingrese la cantidad de valores que desea utilisar: ";
	cin>>n;
	float v[n-1];
	Guardar(v,n);
	float w[n];
	w[n]=v[n];
	Invertir(w,v,n);
	cout<<"El vector original tiene valores: "<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<i<<" -> "<<v[i]<<endl;
	}
}
//Primera Funcion
float Guardar(float v[],int n)
{
	for(int i=0;i<n;i=i+1)
	{
	cout<<"Ingrese el valor ["<<i<<"]: ";	
	cin>>v[i];
	}
	
}
//Segunda Funcion

float Invertir(float w[],float v[],int n)
{
	cout<<"El vector invertido tiene valores: "<<endl;
	for(int i=0;i<n;i++)
	{
	w[i]=v[n-1-i];
	//cout<<i<<"i"<<endl;
	cout<<i<<"-> "<<w[i]<<endl;
	}
	
}

