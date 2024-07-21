#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> // For std::exception

class Person {
private:
    int id;
    std::string name;
    int age;

public:
    Person(int id, std::string name, int age);
    ~Person();
    int getId() const;
    void setId(int id);
    std::string getName() const;
    void setName(std::string name);
    int getAge() const;
    void setAge(int age);
    void printPerson() const;
};

Person::Person(int id, std::string name, int age) : id(id), name(name), age(age) {}

Person::~Person() {
    std::cout << "Person object destroyed: " << name << std::endl;
}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    this->id = id;
}

std::string Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::printPerson() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << std::endl;
}

int main() {
    try {
        // Creating a list of Persons using new and delete
        std::vector<Person*> personList;

        // Adding persons to the list
        personList.push_back(new Person(1, "Wade Wilson", 25));
        personList.push_back(new Person(2, "Bruce Banner", 30));
        personList.push_back(new Person(3, "Tony Stark", 53));

        // Printing persons from the list
        for (const auto& personPtr : personList) {
            personPtr->printPerson();
        }

        // Example modification of attributes (setting new name and age)
        personList[0]->setName("Deadpool");
        personList[0]->setAge(30);
        personList[0]->printPerson();

        // Deallocating memory
        for (auto& personPtr : personList) {
            delete personPtr;
        }
        personList.clear(); // Clearing vector of pointers

    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Failed to allocate memory." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}

