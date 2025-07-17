#include<bits/stdc++.h>
using namespace std;
//void -> doent returns any thing 
//return 
//parametrizes 
//non parameterised 

/* void printname(){//no paramter given 
    cout<< "i am the man of culture";
}
int main (){
    printname();


    return 0;
} */// this the complete void function 

//now we are going to learn about the parameterised function
//use void but parameterized thing 
/* void printname(string name ){
    cout<< "i am the man of culture and name is "<<name<<endl;
}
int main (){
    string name ;
    cin >> name ;
    printname(name);

     string name2 ;
    cin >> name2 ;
    printname(name2);//re use of the code 


    return 0;
} */
/* 
int sum(int num1,int num2 ){
    int num3 =num1+num2;
    return num3;

}
int main(){
    int num1,num2;
    cin >>num1>>num2;

    int res=sum(num1 ,num2);
    cout<<res<<endl;

    int num4,num5;
    cin >>num4>>num5;

    int res2=sum(num4 ,num5);
    cout<<res2;




    return 0;
    
}  */
void DoSomethinf(int num){
    cout<<num<<endl;
    num+=10;
      cout<<num<<endl;
    num+=10;
      cout<<num<<endl;
  

}
int main(){
    int num;
    cin>>num;
    DoSomethinf(num);


    return 0;

}