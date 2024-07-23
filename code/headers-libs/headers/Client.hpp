#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

class Client {
    private:
        std::string name;
        std::string email;
    
    public:
        Client(const std::string& name, const std::string& email);
        ~Client();
        std::string getName() const;
        void setName(const std::string& name);
        std::string getEmail() const;
        void setEmail(const std::string& email);
        std::string printClient() const;
};

#endif // CLIENT_H
