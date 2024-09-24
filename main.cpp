#include "Robot.h"
#include <iostream>
using namespace std;

int main(void){
	double x=0,y=0,z=0;
	bool s=false;
    double x1,y1,z1;
	BrazoRobotico BR(x,y,z,s);
    cout << "Las coordenadas actuales son: " << x << "," << y << "," << z;
    cout << "Introducza las nuevas coordenadas en orden x,y,z: \n";
    cin >> x1;
    cin >> y1;
    cin >> z1;
	BR.mover(x1,y1,z1);
	BR.coger();
	return 0;
}
