#include "Robot.h"
#include <iostream>
using namespace std;

BrazoRobotico::BrazoRobotico(double coorx, double coory, double coorz, bool sujeta){
	this->coorx =  coorx;
	this->coory =  coory;
	this->coorz =  coorz;
	this->sujeta =  sujeta;
}

BrazoRobotico::~BrazoRobotico(){}

double BrazoRobotico::consx() const {return coorx;}
double BrazoRobotico::consy() const {return coory;}
double BrazoRobotico::consz() const {return coorz;}
bool BrazoRobotico::conss() const {return sujeta;}

void BrazoRobotico::coger(){
	this->sujeta = true;
	cout << "Se ha cogido el elemento\n";
}
void BrazoRobotico::soltar(){
	this->sujeta = false;
	cout << "Se ha soltado el elemento\n";
}
void BrazoRobotico::mover(double x, double y, double z){
	this->coorx = x;
    this->coory = y;
    this->coorz = z;
    cout << "Se ha movido a las coordenadas: " << x << "," << y << "," << z;
}


