/* #include<bits/stdc++.h>
using namespace std;
void pattern(int n ){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-3-i;j++){
            cout<<" ";

        }
        //star 
        for (int j=0;j<)


    }
} */ //we should be more in smarter and try to combine it 

#include<bits/stdc++.h>
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
void print23(int n) {
    for (int i = 0; i < n; i++) {
        // leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // plus symbols
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }

        // trailing spaces (optional)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

void print31(int n){
    for (int i =1;i<=2*n-1;i++){
        int st=i;
        if (st>n){
            st=2*n-i;
        }
        for (int j=1;j<=st;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print88(int n) {
    for (int i = 1; i <= n; i++) {
        // First number sequence
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Spaces in the middle
        for (int j = 1; j <= 2 * n - 2 * i; j++) {
            cout << " ";
        }
        
        // Second number sequence (Corrected from your original)
        for (int j = i; j >= 1; j--) { // Logic changed to print a descending sequence
            cout << j;
        }
        
        cout << endl; // Moved inside the loop
    } // Added the missing closing brace
}
void printxx(int n ){
     int nub =1;
    for (int i=1;i<=n;i++){
        
        for (int j=1;j<=i;j++){
            
            cout<<nub;
            nub=nub+1;
        }
        cout<<endl;
    }
}
void printxxx(int n ){
    for (int i=0;i<n;i++){
        //star
        for (int j =0;j<n-i;j++){
            cout<<"*";
           
        }
        //spacce
        for (int j=0;j<2*i+1;j++){
            cout<<" ";
        }

        //star
        for (int j =0;j<n-i;j++){
            cout<<"*";
           
        }
        cout<<endl;
    }
}
void printx(int n ){
    for (int i=0;i<n;i++){
        //star
        for (int j =0;j<i;j++){
            cout<<"*";
           
        }
        //spacce
        for (int j=0;j<2*n-2*i;j++){
            cout<<" ";
        }

        //star
        for (int j =0;j<i;j++){
            cout<<"*";
           
        }
        cout<<endl;
    }
}

int main() {
    int n;
    // Added a prompt for clarity
    cin >> n;
    printxxx(n);
    printx(n);

    return 0;
}