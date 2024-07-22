#include <iostream>

using namespace std;

int main() {

    int vet[10] = { 1, 10, 300, 500, 700, 1000, 2000, 7000, -100000, -675843 };

    for (int i = 0; i < 10; i++) {
        cout << vet[i] << endl;
    }

    cout << "Array size in bytes: " << sizeof(vet) << endl;

    char cpp[11] = "C++ OR CPP";

    for (int i = 0; i < sizeof(cpp) - 1; i++) {
        cout << cpp[i] << endl;
    }
    
    cout << "Array size in bytes: " << sizeof(cpp) << endl;

    return 0;

}
