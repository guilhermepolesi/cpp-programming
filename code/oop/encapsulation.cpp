#include <iostream>
#include <string>


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
    std::cout << "Destroyed class" << std::endl;
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

    Person person = Person(1, "Peter", 17);    
    person.printPerson();
    
    person.setName("Spider-Man");
    std::cout << person.getName() << std::endl;

    
    return 0;
}
