#include "BrazoRobotico.h"

BrazoRobotico :: BrazoRobotico(){
	x = 0;
	y = 0;
	z = 0;
	holding = false;
}

double BrazoRobotico :: getx(){return x;}
double BrazoRobotico :: gety(){return y;}
double BrazoRobotico :: getz(){return z;}

bool BrazoRobotico :: isHolding(){return holding;}

void BrazoRobotico :: mover(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void BrazoRobotico :: coger(){holding = 1;}
void BrazoRobotico :: soltar(){holding = 0;}
