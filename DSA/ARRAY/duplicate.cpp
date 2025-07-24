#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (a[i] != a[j]) {
            i++;
            a[i] = a[j];
        }
    }

    cout << i + 1 << endl;

    return 0;
}