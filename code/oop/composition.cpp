#include <iostream>
#include <stdexcept>
#include <exception>

// Declaration of the Motor class
class Motor {
private:
    bool isOn;
public:
    Motor();
    void start();
    void stop();
    bool isRunning() const;
};

// Declaration of the SoundSystem class
class SoundSystem {
private:
    bool isOn;
public:
    SoundSystem();
    void turnOn();
    void turnOff();
    bool isTurnedOn() const;
};

// Declaration of the AirConditioner class
class AirConditioner {
private:
    bool isOn;
public:
    AirConditioner();
    void turnOn();
    void turnOff();
    bool isTurnedOn() const;
};

// Declaration of the Car class
class Car {
private:
    Motor motor; // Composition: Car has a Motor
    SoundSystem soundSystem; // Composition: Car has a Sound System
    AirConditioner airConditioner; // Composition: Car has an Air Conditioner
public:
    void start();
    void stop();
    void checkStatus() const;
};

// Implementation of the Motor class
Motor::Motor() : isOn(false) {}

void Motor::start() {
    if (!isOn) {
        isOn = true;
        std::cout << "Motor started." << std::endl;
    } else {
        std::cout << "Motor is already on." << std::endl;
    }
}

void Motor::stop() {
    if (isOn) {
        isOn = false;
        std::cout << "Motor stopped." << std::endl;
    } else {
        std::cout << "Motor is already off." << std::endl;
    }
}

bool Motor::isRunning() const {
    return isOn;
}

// Implementation of the SoundSystem class
SoundSystem::SoundSystem() : isOn(false) {}

void SoundSystem::turnOn() {
    if (!isOn) {
        isOn = true;
        std::cout << "Sound system turned on." << std::endl;
    } else {
        std::cout << "Sound system is already on." << std::endl;
    }
}

void SoundSystem::turnOff() {
    if (isOn) {
        isOn = false;
        std::cout << "Sound system turned off." << std::endl;
    } else {
        std::cout << "Sound system is already off." << std::endl;
    }
}

bool SoundSystem::isTurnedOn() const {
    return isOn;
}

// Implementation of the AirConditioner class
AirConditioner::AirConditioner() : isOn(false) {}

void AirConditioner::turnOn() {
    if (!isOn) {
        isOn = true;
        std::cout << "Air conditioner turned on." << std::endl;
    } else {
        std::cout << "Air conditioner is already on." << std::endl;
    }
}

void AirConditioner::turnOff() {
    if (isOn) {
        isOn = false;
        std::cout << "Air conditioner turned off." << std::endl;
    } else {
        std::cout << "Air conditioner is already off." << std::endl;
    }
}

bool AirConditioner::isTurnedOn() const {
    return isOn;
}

// Implementation of the Car class
void Car::start() {
    motor.start();
    soundSystem.turnOn();
    airConditioner.turnOn();
    std::cout << "Car started." << std::endl;
}

void Car::stop() {
    motor.stop();
    soundSystem.turnOff();
    airConditioner.turnOff();
    std::cout << "Car stopped." << std::endl;
}

void Car::checkStatus() const {
    std::cout << "Motor is " << (motor.isRunning() ? "on" : "off") << "." << std::endl;
    std::cout << "Sound system is " << (soundSystem.isTurnedOn() ? "on" : "off") << "." << std::endl;
    std::cout << "Air conditioner is " << (airConditioner.isTurnedOn() ? "on" : "off") << "." << std::endl;
}

int main() {
    
    try {
        Car myCar;
        myCar.start();
        myCar.checkStatus();
        myCar.stop();
        myCar.checkStatus();
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }
        return 0;
}

