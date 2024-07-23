#include <iostream>
#include <sstream>

#include "../headers/Client.hpp"

Client::Client(const std::string& name, const std::string& email) : name(name), email(email) {}

Client::~Client() {};

std::string Client::getName() const {
    return name;
}

void Client::setName(const std::string& name) {
    this->name = name;
}

std::string Client::getEmail() const {
    return email;
}

void Client::setEmail(const std::string& email) {
    this->email = email;
}

std::string Client::printClient() const {
    std::stringstream ss;
    ss << "Client:\nName: " << name << "\nE-mail: " << email << std::endl;
    return ss.str();
}
