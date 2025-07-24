/* #include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 0; i < n; i++) {
        // space 
        for (int j = 0; j < n - i; j++)
            cout << " ";

        // star
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        // space 
        for (int j = 0; j < n - i; j++)
            cout << " ";

        cout << endl; // ✅ move inside loop
    }
}



void less(int n){
    for (int i=0;i<n ;i++){
        //space
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        //star()
        for (int j = 0; j < 2 * (n - i) - 1; j++)
{
            cout<<"+";
        }
        //space
         for (int j=0;j<i;j++){
            cout<<" ";
        
    }
 cout << endl;
}
}

int main() {
    int n;
    cin >> n;   // ✅ read input
  less(n);
    return 0;
}
 */
 #include <iostream>
using namespace std;

void print23(int n) {
    for (int i = 0; i < n; i++) {
        // leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // plus symbols
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "+";
        }

        // trailing spaces (optional)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print23(n);
    return 0;
}
