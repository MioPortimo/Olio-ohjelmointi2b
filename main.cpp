#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objectCar0("Fiat", "Punto", 2004);
    Car objectCar1("Opel", "Kadett", 1969);
    Car objectCar2("Hyundai", "Tucson", 2004);

    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    carList[1].printData();

    for(int x=0;x<=2;x++){
        carList[x].printData();
    }

    return 0;
}
