#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int>l;
    list<int> n(5,100);
    cout<<"print"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    // l.push_back(1);
    // l.push_front(2);
    // for(int i:l){
    //     cout<<i<< " ";
    // }
    

    return 0;
}