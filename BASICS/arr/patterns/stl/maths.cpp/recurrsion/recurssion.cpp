#include <iostream>
using namespace std;
void perp(int count) {
    // Base case to stop the recursion
    if (count == 3) {
        return; // Corrected: A void function returns no value.
    }

    cout << count << endl;
    count++;
    
    // Recursive call to the function itself
    perp(count); // Corrected: The function name is 'perp'.
}

//print name 5 times
void name(string N, int n ){
    if (n==6){
        return;
    }
    cout<<N<<endl;
    n++;
    name(N,n);
    
}
//more better way 
void name1(int i , int n){
    if (i>n){return ;}
    cout<< "shrey bhai is great "<< endl;
    i++;
    name1(i,n);
}
//print from n to 1 using back trackinf

void bck(int i ,int n){
    if (i>n){return ;}
   
    bck(i+1,n);
    cout<<i<<endl;

}
void sumof(int i, int sum) {
    // Base Case: When 'i' is less than 1, all numbers have been added.
    // Print the final accumulated sum and stop.
    if (i < 1) {
       cout<<sum;
        return;
    }
  
    // Recursive Step: Call the function for the next number (i-1)
    // and add the current number 'i' to the sum.
    sumof(i - 1, sum + i);
}


//finctional way 
int functional(int n){
    if (n==0){
        return 0;
    }
    return n+functional(n-1);
}

//factorial
int factorialll(int n){
    if (n==0){return 1;}
    return n*factorialll(n-1);
}
/* int main(){
    int n;
    cin>>n;
   int factoriallll=factorialll(n);
   cout <<factoriallll;
    return 0;
} */
///reverse the string 
/* const int n=5;

int a[n];//fro global */


// Corrected the function's parameter syntax
void reversearray(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(arr[l], arr[r]);
    reversearray(arr, l + 1, r - 1);
}

int main() {
    // 1. Declare the size 'n' and the array 'a'
    const int n = 5;
    int a[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
     cin >> a[i];
    }

    // Call the function with the array and its start/end indices
    reversearray(a, 0, n - 1);

 cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++) {
       cout << a[i] << endl;
    }

    return 0;
}
///multiple recurssion
