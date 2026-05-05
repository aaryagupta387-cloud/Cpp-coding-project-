#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int ans = -1;

    for(int i = 0; i < n; i++) {
        if(s[i] == s[n - i - 1]) {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}
