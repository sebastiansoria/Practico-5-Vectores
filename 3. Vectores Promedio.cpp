/*
3. Hacer un programa para sacar el promedio de valores de un vector
*/
#include<iostream>
using namespace std;
float Funcion(float vec[],int n);
int main(){

int n;	
cout<<"Este programa saca el promedio de valores de un vector"<<endl;
cout<<"Ingrese el numero de valores que desea tener:"<<endl;
cin>>n;
float vec1[n];
for(int i=0;i<n;i++)
{
cout<<"Ingrese el valor ["<<i+1<<"]: ";
cin>>vec1[i];
}

Funcion(vec1,n);	
		
}

float Funcion(float vec[], int n)
{
	float suma=0;
	for(int i=0;i<n;i++)
	{
	suma=suma + vec[i];
	}
	cout<<"El promedio es: "<<suma/n;
}
