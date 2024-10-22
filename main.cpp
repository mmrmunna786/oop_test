#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    Car car;
    car.FillFuel(10);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();

    car.Dashboard();

    return 0;
}
