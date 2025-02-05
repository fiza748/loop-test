#include<iostream>
using namespace std;

int main(){

    //to print a to z akipping 3 letters

    char letter='a';

    do{
           cout<<letter<<" ";
        letter = letter + 4;
     

    }

    while(letter<='z');
}