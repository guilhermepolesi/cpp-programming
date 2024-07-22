#include <iostream>
#include <string>

using namespace std;

struct Client {
    int client_id;
    string name;
    int age;
};

int main() {

    Client client1 = { 1, "John", 30};
    Client client2 = { 2, "Mary", 20};

    cout << "Client 1: " << endl;
    cout << "Id: " << client1.client_id << " Name: " << client1.name << " Age: " << client1.age << endl;
    cout << "Client 2: " << endl;
    cout << "Id: " << client2.client_id << " Name: " << client2.name << " Age: " << client2.age << endl;


    Client clients[5];

    for (int i = 0; i < 5; i++) {
        cout << "Id: ";
        cin >> clients[i].client_id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, clients[i].name);
        cout << "Age: ";
        cin >> clients[i].age;
        cin.ignore();

    }

    return 0;

}
