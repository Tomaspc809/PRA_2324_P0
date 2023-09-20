#include "BrazoRobotico.h"
#include <iostream>

int main(){
	BrazoRobotico Rob1;
	std::cout<<"Posición inicial: "<<Rob1.getx()<<"x "<<Rob1.gety()<<"y "<<Rob1.getz()<<"z. Estado pinza: "<<Rob1.isHolding()<<std::endl;

	std::cout<<"Moviendo a 5x 2y 8z"<<std::endl;
	Rob1.mover(5, 2, 8);

	std::cout<<"Cogiendo objeto"<<std::endl;
	Rob1.coger();

	std::cout<<"Posición: "<<Rob1.getx()<<"x "<<Rob1.gety()<<"y "<<Rob1.getz()<<"z. Estado pinza: "<<Rob1.isHolding()<<std::endl;

	return 0;
}
