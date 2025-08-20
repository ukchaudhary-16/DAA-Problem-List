#include <iostream>
using namespace std;

void generateBinary(int n, string current) {
    if ((int)current.size() == n) {   // base case: built n bits
        cout << current << endl;
        return;
    }
    generateBinary(n, current + "0"); // add 0
    generateBinary(n, current + "1"); // add 1
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    generateBinary(n, "");
    return 0;
}
