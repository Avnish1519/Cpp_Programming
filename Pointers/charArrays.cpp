#include<iostream>
using namespace std;
int main(){
    int arr[10]={23,67,89};
    cout<<arr<<endl;//address of the first memory block
    char ch[10] ="abcde";
    cout<< "Character Array:"<<ch<<endl;//all content of ch array

    int *ptr =  &arr[0];
    cout<<ptr<<endl;//pointer print 
    cout<<*ptr<<endl;

    char *c= &ch[0];//POINTER
    cout<<c<<endl;
    cout<<*(c+1)<<endl;//print fn
    
    char temp='z';
    char *ch1 = &temp;
    cout<<ch1<<endl;

}