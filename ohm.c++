#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

void voltajeF(float i,float r,float  w);
void resitenciaF(float v, float i,float  w);
void corrienteF(float v,float r,float  w);
void wattsF(float v, float i,float  w);

int main(){

	float voltaje=0,resitencia=0,corriente=0,watts=0;
	int operacion=0;
	char c;
	cout << "Bienvenido Leon!! a la ley de ohm porfavor\n";
	cout << "ingrese una de las siguentes opciones\n";
	cout << "NOTA: EL CERO ES NULO Y PIDE VALOR EN WATTS PARA OPERACION\n";
	while (operacion!=-1)
	{
		cout << "1. Voltaje\n";
		cout << "2. Resistencia\n";
		cout << "3. Corriente\n";
		cout << "4. Watts\n";

		cin >> operacion;

		switch(operacion)
		{
		case 1:
		cout <<"Voltaje=Corriente X Resistencia\n";
		cout << "ingrese Corriente: ";
		cin >> corriente;
		cout << "ingrese Resistencia: ";
		cin >> resitencia;
		cout << "ingrese watts: \n";
		cin >> watts;
		voltajeF(corriente,resitencia,watts);
		break;
		case 2:
		cout << "Resistencia=Voltaje/Corriente\n";
		cout << "ingrese Voltaje: ";
		cin >> voltaje;
		cout << "ingrese corriente: ";
		cin >> corriente;
		cout << "ingrese watts: \n";
		cin >> watts;
		resitenciaF(voltaje,corriente,watts);
		break;
		case 3:
		cout << "Corriente=Voltaje/Resitencia\n";
		cout << "ingrese voltaje: ";
		cin >> voltaje;
		cout << "ingrese Resistencia: \n";
		cin >> resitencia;
		cout << "ingrese watts: \n";
		cin >> watts;
		corrienteF(voltaje,resitencia,watts);
		break;
		case 4:
		cout << "Watts=Voltaje X Corriente\n";
		cout << "ingrese voltaje: ";
		cin >> voltaje;
		cout << "ingrese Corriente: ";
		cin >> corriente;
		wattsF(voltaje,corriente,watts);
		break;
		default:
		cout << "Opción no valida\n\n\n\n";
		}
	} 

}
void voltajeF(float i, float r,float  w)
{
	float volt=0;
	if(r<0)
	{
	volt=i*r;
	cout <<"\n-------------\n"<< volt << " Voltios \n-------------\n";
	}else
	{
		volt=w/i;
		cout <<"\n-------------\n"<< volt << " Voltios \n-------------\n";

	}
}
void resitenciaF(float v, float i,float  w)
{
	float res=0;
	if(i>0)
	{
	res=v/i;
	cout <<"\n--------------------------\n"<< res << " Resistencia \n--------------------------\n";
	}else
	{
		res=pow(v,2)/w;
		cout <<"\n--------------------------\n"<< res << " Resistencia \n--------------------------\n";

	}
}
void corrienteF(float v, float r,float w)
{
	float corr =0;
	if (r>0)
	{
	corr=v/r;
	cout <<"\n--------------------------\n"<< corr << " Corriente \n--------------------------\n";
	}else
	{
		corr=w/v;
		cout <<"\n--------------------------\n"<< corr << " Corriente \n--------------------------\n";
	}
}
void wattsF(float v, float i,float  w)
{
	float watts=0;
	watts=v*i;
	cout <<"\n--------------------------\n"<< watts << " Watts \n--------------------------\n";

}