#include<iostream>
using namespace std;

int main(){

    //addition of digits

    int number,sum,last,first;

    cout<<"Enter an integer : ";
    cin>>number;

    last = number % 10;

    while(number>=10){
        number = number/10;
        
    }

    first = number;
    sum=first+last;

    cout<<"The sum of the first and last digit is : "<<sum;
}