/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 24 de enero de 2023
PROGRAMA: actividad1.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: 
**************************************************/ 
#include <iostream>
using namespace std;

int main () { //Programa principal

	//Definición de variables
	int dia,ano, edad, sem; 
	char nom[40], ap[40], lugar[40], carrera[30], mes[20];
	
	//Solicitud de datos
	cout<<"Bienvenido al programa, te pedire tus datos :)"<<endl;
	cout<<"Inserta tu nombre completo, primero tu nombre y despues tus apellidos"<<endl;
	cout<<"NO PONGAS ESPACIOS PON TODO JUNTO POR FAVOR"<<endl;
	cout<<"Nombre:"<<endl;
	cin>>nom;
	cout<<"Apellidos:"<<endl;
	cin>>ap;
	cout<<"Inserta tu edad:"<<endl;
	cin>>edad;
	cout<<"Inserta tu lugar de residencia:"<<endl;
	cin>>lugar;
	cout<<"Inserta tu fecha de nacimiento:"<<endl;
	cout<<"Dia:"<<endl;
	cin>>dia;
	cout<<"Mes:"<<endl;
	cin>>mes;
	cout<<"Anio:"<<endl;
	cin>>ano;
	cout<<"Inserta la carrera en la que estudias:"<<endl;
	cin>>carrera;
	cout<<"Y por ultimo inserta el semestre en el que cursas, solo el nnmero;"<<endl;
	cin>>sem;
	
	//Muestra de datos obtenidos
	cout<<"Estos son los datos que escribiste en el programa :)"<<endl;
	cout<<"Nombre:"<<nom<<ap<<endl;
	cout<<"Edad:"<<edad<<endl;
	cout<<"Lugar de residencia:"<<lugar<<endl;
	cout<<"Fecha de nacimiento:"<<dia<<mes<<ano<<endl;
	cout<<"Carrera:"<<carrera<<endl;
	cout<<"Semestre:"<<sem<<endl;
	cout<<"HASTA LA PROXIMA :D"<<endl;
	
	// Pausa para que la aplicación no se cierre al instante	
	system("pause");
}
