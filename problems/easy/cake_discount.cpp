#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n >= 5)
        cout << n * 85;
    else
        cout << n * 100;

    return 0;
}
