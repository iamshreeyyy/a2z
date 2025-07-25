#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    int n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    for (int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=0; i<n2; i++){
        cin >> arr2[i];
    }

    vector<int> unionarr;
    int i=0;
    int j=0;

    while(i < n1 && j < n2){
        if (arr1[i] <= arr2[j]){
            if(unionarr.size() == 0 || unionarr.back() != arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size() == 0 || unionarr.back() != arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1){
        if(unionarr.size() == 0 || unionarr.back() != arr1[i]){
            unionarr.push_back(arr1[i]);
        }
        i++;
    }

    while(j < n2){
        if(unionarr.size() == 0 || unionarr.back() != arr2[j]){
            unionarr.push_back(arr2[j]);
        }
        j++;
    }

    for(auto val : unionarr){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}