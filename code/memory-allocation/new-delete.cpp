#include <iostream>
#include <string>
#include <stdexcept> // For std::exception

class Person {
    private:
        int id;
        std::string name;
        int age;

    public:
        
        Person(int id, std::string name, int age);
        ~Person();
        int getId();
        void setId(int id);
        std::string getName();
        void setName(std::string name);
        void setAge(int age);
        int getAge();
        void printPerson();

};

Person::Person(int id, std::string name, int age) {
    this->id = id;
    this->name = name;
    this->age = age;
}

Person::~Person() {
    std::cout << "Class object destroyed" << std::endl;
}

int Person::getId() {
    return id;
}

void Person::setId(int id) {
    this->id = id;
}        

std::string Person::getName() {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}        

int Person::getAge() {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}   

void Person::printPerson() {
    std::cout << "Id: " << id << " Name: " << name << " Age: " << age << std::endl;
}

int main() {

    try {

        // Dynamic allocation of a Person object
        Person *personPtr = new Person(1, "Wade Wilson", 25);

        // Using the object
        personPtr->printPerson();

        // Modifying attributes
        personPtr->setName("Deadpool");
        personPtr->setAge(30);
        personPtr->printPerson();

        // Deallocating memory
        delete personPtr;
        personPtr = nullptr; // Good pratice: set pointer to nullptr after deletion

        // Example exception (unncomment to test)
        // throw std::bad_alloc();

    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Error: Failed to allocate memory." << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }
    
    return 0;
}

