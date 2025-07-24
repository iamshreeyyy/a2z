//prestore and fetching 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin >>arr[i];

    }
    //prestore /precomputation
    int hash[13]={0};
    for (int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }




    //
    int q;
    cin>>q;
    while (q--){
        int number ;
        cin>>number ;
        //fetching 
        cout <<hash[number]<<endl;
    }




    return 0;

}
//what if array size is greater than the 10power 7 ,8,9;
//max can we only array upto 10 power 6  segmentation fault

//for character we have to use ASCLL VALUE 


