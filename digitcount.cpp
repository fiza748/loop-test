#include<iostream>
using namespace std;

int main(){

    // to count digits
    
    int number,count=0;

    cout<<"Enter an integer : ";
    cin>>number;

    while(number>0){
        number=number/10;
        count++;
    }

    cout<<"The count of digit is : "<<count;
}