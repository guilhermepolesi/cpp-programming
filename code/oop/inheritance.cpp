#include <iostream>
#include <string>

class Person {
    protected:
        int id;
        std::string name;
        int age;

    public: 
        Person(int id, std::string name, int age);
        virtual ~Person();
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
    std::cout << "Person object destroyed" << std::endl;
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
    std::cout << "Id: " << id << " Name: " << name << " Age: " << age << std::endl;
}

class Client : public Person {
    private:
        std::string email;

    public:
        Client(int id, std::string name, int age, std::string email);
        std::string getEmail() const;
        void setEmail(std::string email);
        void printClient() const;
};

Client::Client(int id, std::string name, int age, std::string email) : Person(id, name, age), email(email) {}

std::string Client::getEmail() const {
    return email;
}

void Client::setEmail(std::string email) {
    this->email = email;
}

void Client::printClient() const {
    std::cout << "Client:\nId: " << getId() << " Name: " << getName() << " Age: " << getAge() << " E-mail: " << getEmail() << std::endl;
}

int main() {

    Client client = Client(1, "Steven", 39, "s.rogers@gmail.com");
    client.printClient();
    
    return 0;
}
