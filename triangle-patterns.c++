#include<iostream>
using namespace std;
// This program prints a triangle pattern of numbers
// The outer loop controls the number of rows
// The inner loop controls the number of columns
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        int num=1;
        char ch='A';
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
