#include <iostream>
using namespace std;

int main() {
    string cat[50];
    int amt[50];
    int n = 0;
    int ch;

    while (1) {
        cout << "\n1.Add\n2.Show\n3.Total\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Enter category: ";
            cin >> cat[n];
            cout << "Enter amount: ";
            cin >> amt[n];
            n++;
        }

        else if (ch == 2) {
            cout << "\nAll Expenses:\n";
            for (int i = 0; i < n; i++) {
                cout << cat[i] << " " << amt[i] << endl;
            }
        }

        else if (ch == 3) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum = sum + amt[i];
            }
            cout << "Total = " << sum << endl;
        }

        else if (ch == 4) {
            break;
        }

        else {
            cout << "Wrong choice\n";
        }
    }

    return 0;
}
