#include "car.h"

Car::Car(string newBrand, string newModel, int newYearModel)
{
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;

}
void Car::printData(){
    cout << "Merkki: " << brand <<endl<< "Malli: " << model <<endl<< "Valmistusvuosi: " << yearModel <<endl;
}
