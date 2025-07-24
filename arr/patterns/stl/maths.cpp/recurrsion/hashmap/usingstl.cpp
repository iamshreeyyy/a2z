//hash map using stl map ,hashmap map<key , frequnecy>

#include<bits/stdc++.h>
using namespace std;
int main (){

    int n ;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];

    }
    //pre-comput 
    map<long long, long long>mpp;//unordered usees o(1)
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for (auto it : mpp){
        cout <<it.first<<"->"<<it.second<<endl;
    }


    int q;
    cin>>q;
    while (q--){
        int numbers;
        cin>> numbers;
        //fetching  
        cout <<mpp[numbers]<<endl;

    }



    return 0;

}//store at sorted manne r
