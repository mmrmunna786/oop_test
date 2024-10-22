//
// Created by Munna Rahman on 23/08/2024.
//

#ifndef CLASSES_CAR_H
#define CLASSES_CAR_H

#endif //CLASSES_CAR_H

class Car {
private:
    float fuel;
    float speed;
    int passengers;
    static int totalCars;

public:
    Car();
    ~Car();
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard();
};

//After doing this, you may fix the identity used for this commit with:
//
//git commit --amend --reset-author

