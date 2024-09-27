#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, int sujeto){
	this->x = x;
	this->y = y;
	this->z = z;

	this->sujeto = sujeto;
}

int BrazoRobotico::consultarX(){
	return this->x;
}

int BrazoRobotico::consultarY(){
	return this->y;
}

int BrazoRobotico::consultarZ(){
	return this->z;
}

int BrazoRobotico::consultarSujeto(){
	return this->sujeto;
}

bool BrazoRobotico::coger(){
	this->sujeto = 1;
	return true;
}

bool BrazoRobotico::soltar(){
	this->sujeto = 0;
	return false;
}

void BrazoRobotico::mover(double a, double b,double c){
	
	int x, y, z;
	
	cout << "Posición final x: ";
       	cin >> x;

	cout << "Posición final y: ";
       	cin >> y;

	cout << "Posición final z: ";
       	cin >> z;
	a = x - a;
	b = y - b;
	c = z - c;

	cout << "Se mueve: x = " << a << ", y = " << b << ", z =" << c << " para llegar al objeto" << endl;
}


