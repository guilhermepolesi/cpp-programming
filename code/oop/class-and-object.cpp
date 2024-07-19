#include <iostream>
#include <string>


class Person {
    public:
        int id;
        std::string name;
        int age;
        
    void print_person() {
        std::cout << "Id: " << id << " Name: " << name << " Age: " << age << std::endl;
    }

};


int main() {

    Person person;

    person.id = 1;
    person.name = "Peter";
    person.age = 17;
    
    person.print_person();

    return 0;
}
