//we can use pair jsut for two if we want more we have to use nested pair
void pairexplane(){
    pair<int ,int > p={1,3};
    cout<<p;//to accesperticular element we have to use p.first ,p.second 

    pair< int, pair<int ,int >> p={1,{2,4}};
    //second.second
    pair <int ,int > arr[]={{1,2} {2,6} {9,5}};
    cout <<arr[];    
}
// when size is not define so we use vector so lets go inisde 

void vectorexplaned(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);//same but advance 

    //pairs and vector
    vector<pair<int,int> v;
    v.push_back({1,2});
     v.emplace_back(1,2);//it will take it as pair


     vector<int> v(5,100);///vector will be 5 times 100 100 100 100 1100//v(size,number);

     //how to ascess 
     //iterator
     vector<int>::iterator it=v.begin();//begin show the memory address and we have to acess memory address of that with *(it)
     it++;
     cout <<*(it);

     vector<int>::iterator it=v.end();//it will ponit next to the end of element memory

     // for real iteration
     for (vector<int>::iteration it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";

        //vector<int>::iteration it in this place we can directly use auto it 

        for (auto it =v.begin();it!=v.end;it++){
             cout<<*(it)<<" ";


        }

        v,insert(v.begin()+1,24)
        // list ie same as vector and is less costler than vector 


     }
//set in sorted maner and unique 
//store in soreted factopn 
void set.()[
    set<int>st;
    st.insert(1);// 1
    st.insert(5);// 1 5
    st.insert(2);// 1 2 5 sorter faction
    auto it =st.find(2);//if the element is not present then it will always show the set.end
    


]






}