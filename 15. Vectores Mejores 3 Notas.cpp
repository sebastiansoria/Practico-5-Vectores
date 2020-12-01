// Un vector tiene la lista de Nro. de Registro y otro vector tiene las notas. Hacer un
//programa para obtener las tres mejores notas. Hay que tener cuidado cuando se
//intercambia los elementos del vector de Nro. de Registro también se debe intercambi
//
#include <iostream>
#include <string>
#include "conio.h"
#define MAX 100

using namespace std;
void cargar(string nombre[],float nota[],int n);
void burbuja(string nombre[],float nota[],int n);

int main()
{
	string nombre[MAX];
	float nota[MAX];
	int n;
	do {
		cout<<"Ingrese el numero de estudiantes: ";
		cin>>n;
	}while ((n<=0)||(n>MAX));
	
	cargar(nombre,nota,n);
	burbuja(nombre,nota,n);
	cout <<"Las tres mejores notas son: "<<endl;
	cout <<nombre[0]<<"  -->   "<<nota[0]<<endl;
	cout <<nombre[1]<<"  -->   "<<nota[1]<<endl;
	cout <<nombre[2]<<"  -->   "<<nota[2]<<endl;
	getch();
	return 0;
}

void cargar(string nombre[],float nota[],int n)
{
for(int i=0;i<n;i++)
{
cout<<"Ingrese el numero de registro del elemento ["<<i<<"]: ";
getline(cin,nombre[i]);
getline(cin,nombre[i]);
do
{
cout<<"Ingrese la nota del elemento ["<<i<<"]: ";
cin>>nota[i];	
}while((nota[i]<0)||(nota[i]>100));

}

}
void burbuja(string nombre[],float nota[],int n)
{
	int notaaux;
	string nombreaux;
	for (int i=0; i<n-1;i++)
		for (int j=i; j<n;j++)
			if (nota[i] < nota[j]) {
				notaaux=nota[j];
				nota[j]= nota[i];
				nota[i]= notaaux;
				//Cambiando el orden de los Nros de Registro
				nombreaux=nombre[j];
				nombre[j]=nombre[i];
				nombre[i]=nombreaux;
			}
}


