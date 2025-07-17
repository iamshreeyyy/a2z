#include<bits/stdc++.h>
using namespace std;
void arrpassbyreference(int arr[], int n){
  arr[0]+=10000;
  cout<<"inside the arr the index at index o"<<arr[0]<<endl;
}
int main (){
   int n=5;
   
        int arr[n];
    
        for (int i=0;i<=n-1;i=1+1){
            cin>>arr[i];
        }
        arrpassbyreference(arr,n);


    
    return 0;
}