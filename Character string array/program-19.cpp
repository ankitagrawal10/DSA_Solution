#include <iostream>
#include <string>
using namespace std;

bool find(string name, char value) {
    for (int i = 0; i < name.length(); i++) {
        if (value == name[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    string name = "abcd";
    char value;
    cin >> value;

    if (find(name, value)) {
        cout << "Value found in name." << endl;
    } else {
        cout << "Value not found in name." << endl;
    }

    return 0;
}
