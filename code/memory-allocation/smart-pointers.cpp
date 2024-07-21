#include <iostream>
#include <string>
#include <memory>   // For smart pointers like std::unique_ptr
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

Person::Person(int id, std::string name, int age) : id(id), name(name), age(age) {}

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
        // Smart pointer to manage Person object
        std::unique_ptr<Person> personPtr = std::make_unique<Person>(1, "Stephen", 50);

        // Using the object
        personPtr->printPerson();

        // Modifying attributes
        personPtr->setName("Dr. Strange");
        personPtr->setAge(60);
        personPtr->printPerson();

        // Memory is automatically deallocated when unique_ptr goes out of scope
        // Example with std::shared_ptr
        std::shared_ptr<Person> sharedPerson = std::make_shared<Person>(2, "Bruce Banner", 40);

        // Using the object
        sharedPerson->printPerson();

        // Modifying attributes
        sharedPerson->setName("Hulk");
        sharedPerson->setAge(45);
        sharedPerson->printPerson();

        // Memory is automatically deallocated when the last shared_ptr instance owning the resource is destroyed
    }
    catch (const std::bad_alloc &e) {
        std::cerr << "Error: Failed to allocate memory." << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}

