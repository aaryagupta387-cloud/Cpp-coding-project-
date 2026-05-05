#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int rect = A * B;
    int sq = C * C;

    if(rect == sq)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
