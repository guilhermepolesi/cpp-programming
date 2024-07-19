#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> args);

int main() {

    cout << sum({2, 3}) << endl;
    cout << sum({2, 3, 4}) << endl;

    vector<int> nums = {2, 3, 4, 5};
    cout << sum(nums) << endl;  

    return 0;
}

int sum(vector<int> args) {
    int result = 0;
    for (int num : args) {
        result += num;
    }
    return result;
}
