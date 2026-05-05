#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int small = 100 * B;   // 10*10 * B
    int large = 225 * A;   // 15*15 * A

    if(small > large)
        cout << "Small";
    else if(small < large)
        cout << "Large";
    else
        cout << "Equal";

    return 0;
}
