//
// Created by Munna Rahman on 23/08/2024.
//
#include "Car.h"
#include <iostream>
using namespace std;

int Car::totalCars = 0;

Car::Car() {
    ++totalCars;
    fuel = 0;
    speed = 0;
    passengers = 0;
}

Car::~Car() {
    --totalCars;

}

void Car::FillFuel(float amount) {
    fuel = amount;

}

void Car::Accelerate() {
    speed += 1;
    fuel -= 0.5f;

}

void Car::Brake() {
    speed = 0;

}

void Car::AddPassengers(int count) {
    passengers += count;

}

void Car::Dashboard() {
    cout << "Fuel: " << fuel << endl;
    cout << "Speed: " << speed << endl;
    cout << "Passengers: " << passengers << endl;
    cout << "Total cars: " << totalCars << endl;
}



