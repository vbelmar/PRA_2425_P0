#include "Robot.h"
#include <iostream>
using namespace std;

int main(void){
	double x=0,y=0,z=0;
	bool s=false;
	BrazoRobotico BR(x,y,z,s);
	BR.mover(x,y,z);
	BR.coger();
	return 0;
}
