#include<bits/stdc++.h>
using namespace std;

void leftrotateD(vector<int> &a, int n, int k){
    if (n == 0) {
        return;
    }
    k = k % n;
    
    vector<int> temp(k);
    for(int i = 0; i < k; i++){
        temp[i] = a[i];
    }
    for (int i = k; i < n; i++){
        a[i - k] = a[i];
    }
    for (int i = n - k; i < n; i++){
        a[i] = temp[i - (n - k)];
    }
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    leftrotateD(a, n, k);
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}