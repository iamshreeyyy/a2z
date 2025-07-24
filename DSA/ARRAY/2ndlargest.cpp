/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];

    }
    int largest=a[0];
for (int i=0;i<n;i++){
    if (a[i]>largest){
        largest=a[i];
    }
}
int secondLargest=-1;
for(int i=n-2;i>=0;i--){
    if (a[i]>secondLargest||a[i]!=largest){
        secondLargest=a[i];
        break;
    }
}

cout<<secondLargest;


return 0;
} */
/// optimal approach 
#include<bits/stdc++.h>
using namespace std;

int SecondLargestO(vector<int> &arr, int n){
    int largest1 = INT_MIN;
    int second1 = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > largest1){
            second1 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > second1 && arr[i] != largest1) {
            second1 = arr[i];
        }
    }
    return second1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = SecondLargestO(arr, n);
    cout << result << endl;
    return 0;
}