//nested loops and the their should be alway printing inside the inner loop

//how many time is going to run like 
/* ****
****
****
****
 *///here how may line are there will be the outer loop
 //for the inner loop look for the column and connect it with roes 
 #include<bits/stdc++.h>
using namespace std;
void print(int n){
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"*";
        }
        cout <<endl;
    }

}
int main (){
    int n;
    cin>>n;

  print(n);
    return 0;
}