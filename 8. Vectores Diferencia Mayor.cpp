/*
8. Dado un vector A de n números enteros, obténgase la diferencia más grande entre dos
elementos consecutivos de este vector.
*/
#include<iostream>
#define M 100
using namespace std;
float guardar(float v[],int n);
float dif(float v[],int n);
int main()
{
	int n,k=0;
	float v[M];
	
	while(k!=1)
	{
	cout<<"Ingrese el numero de elementos que va a tener el vector: ";
	cin>>n;	
	if((n<=0)||(n>100))
	{
	k=0;
	cout<<"Error: ";
	cout<<"Ingrese un numero de elementos entre 1 y 100 "<<endl;	
	cout<<"....................................."<<endl;
	}
	else
	{
	k=1;	
	}
	}
		

	
	guardar(v,n);
	cout<<"La diferencia mayor es: "<<dif(v,n);
}
//Definicion de vector guardar

float guardar(float v[],int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<"Ingrese el valor del elemento ["<<i<<"]: ";
	cin>>v[i];
	}	
}

//Definicion de vector diferencia
float dif(float vec[],int n)
{
	float max,aux;	
	
//Sacando la primera diferencia

	if(vec[0]>vec[1])
	{
	max= vec[0]-vec[1];
	}
	else//(vec[0]<=vec[1])
	{
	max= vec[1]-vec[0];		
	}
	//cout<<max<<"max"<<endl;
	
	
	for(int i=1;i<n-1;i++)
	{
//Sacando la segunda diferencia y las consecutivas

		if(vec[i]>vec[i+1])
		{
		aux= vec[i]-vec[i+1];	
		}
		else//(vec[i]<=vec[i+1])
		{
		aux= vec[i+1]-vec[i];		
		}
		
		/*
		Herramienta de depuracion michi
		cout<<i<<"i"<<endl;
		cout<<max<<"max"<<endl;
		cout<<aux<<"aux"<<endl;
		*/
		
//Sacando el nuevo mayor
		
		if(max<aux)
		{
			max=aux;
		}
			
	}
	return max;
		
}
