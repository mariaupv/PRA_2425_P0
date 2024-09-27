#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main(){

//Preguntamos en que posición se encuentra el robot
	cout << "Posición inicial robot: \n";
	
	double a, b, c;
	int pos = 0;

	cout << "Posición x: ";
       	cin >> a;

	cout << "Posición y: ";
       	cin >> b;

	cout << "Posición z: ";
       	cin >> c;

	BrazoRobotico mov1(a, b, c, 0);

	cout << "Posición deseada: \n";
	
	mov1.mover(a, b, c);
	pos = 1; //el brazo se mueve
	
	if(pos != 0){
		cout << "Ha cogido el objeto" << mov1.coger() << endl;
	}

	return 0;
}
	
