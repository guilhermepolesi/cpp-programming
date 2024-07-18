#include <iostream>
#include <string>

using namespace std;

struct Client {
    int client_id;
    string name;
    int age;
};

int main() {
    
    Client client1 = { 1, "John", 30 };
    Client client2 = {2, "Mary", 20 };
    
    Client *ptr_client;

    ptr_client = &client1;
    cout << "Pointer memory address: " << ptr_client << endl;

    cout << "Client 1: " << endl;
    cout << "Id: " << ptr_client->client_id << " Name: " << ptr_client->name << " Age: " << ptr_client->age << endl;
    cout << endl;

    ptr_client = &client2;
    cout << "Pointer memory address: " << ptr_client << endl;
    cout << "Client 2: " << endl;
    cout << "Id: " << ptr_client->client_id << " Name: " << ptr_client->name << " Age: " << ptr_client->age << endl;

    return 0;

}
