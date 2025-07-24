#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age<=18 && age>=15){
       cout<< "can watch  adult content";
    }
    else{
        cout<<"he is not an adult";
    }
    return 0;
}