#include<iostream>
using namespace std;

int main(){
    int num=5;
    cout<<num<<endl;

    //address of operator - &

    cout<<"address of num is " << &num <<endl;

    int *ptr= &num;
    cout<<"address is : "<<ptr<<endl;
    cout<<"value is : "<<*ptr<<endl;

    double d=4.5;
    double *p2=&d;

     cout<<"address is : "<<p2<<endl;
    cout<<"value is : "<<*p2<<endl;


cout<<"size of int "<<sizeof(num)<<endl;
cout<<"size of pointer "<<sizeof(ptr)<<endl;
cout<<"size of pointer "<<sizeof(p2)<<endl;

    return 0;
}