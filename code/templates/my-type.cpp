#include <iostream>

using namespace std;

template <class my_type>
my_type func(my_type x);

int main () {

    cout << func(10) << endl;
    cout << func(25.5) << endl;

    return 0;

}

template <class my_type>
my_type func(my_type x) {
    cout << typeid(x).name() << endl;
    return ++x;
}
