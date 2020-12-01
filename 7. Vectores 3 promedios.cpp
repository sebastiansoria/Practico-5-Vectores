/*
7. Sacar el promedio de cada tres valores consecutivos en un vector.
P1= A1 + A2 + A3
P2= A2 + A3 + A4
P3= A3 + A4 + A5
*/
#include<iostream>
#define MAX 100
using namespace std;
float cargar(float vec[]);
float promedio(float vec[],float vec2[]);
float mostrar(float vec2[]);
int main()
{
	float vec[MAX],vec2[MAX];
	cargar(vec);
	promedio(vec,vec2);	
	mostrar(vec2);
}
float cargar(float v[])
{
	for(int i=0;i<5;i++)
	{
		cout<<"Ingrese el valor ["<<i<<"]: ";
		cin>>v[i];
	}
}
float promedio(float v[],float v2[])
{
	float P1,P2,P3;
	//Sacando P1
	P1=((v[0]+v[1]+v[2])/3);
	//Sacando P2
	P2=((v[1]+v[2]+v[3])/3);
	//Sacando P3
	P3=((v[2]+v[3]+v[4])/3);	
	v2[0]=P1;
	v2[1]=P2;
	v2[2]=P3;
}
float mostrar(float v2[])
{
	for(int i=0;i<3;i++)
	{
		cout<<"P"<<i+1<<" = "<<v2[i]<<endl;
	}
	
}


