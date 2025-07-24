#include <iostream> // Required for cin and cout
using namespace std;    // To use cin and cout without std::

// Function to reverse an integer
int reverse(int n) {
    int rno = 0; // Semicolon was missing
    int lastdigit; // Variable was not declared

    while (n > 0) {
        lastdigit = n % 10;
        n = n / 10;
        rno = rno * 10 + lastdigit;
    }
    return rno;
}
void xxx(int n
){
    for (int i=1;i<=n;i++){
        int div = n%i;
        if (div==0){
            cout<<i<<endl;
        }
        
    }
}

int main() {
    int n;
  
    cin >> n;

    // Call the function AND use its return value
  /*   int reversed_number = xxx(n);
    cout  << reversed_number << endl; *///we cant assign the to the void function
    xxx(n);

    return 0; // Good practice to return 0 from main
}