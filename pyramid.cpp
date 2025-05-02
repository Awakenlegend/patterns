#include<iostream>
using namespace std;
// This program prints a pyramid pattern of numbers
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        //spaces 
        for(int j=0;j<n-i-1;j++)// Print spaces before the numbers n-i-1 times means 3,2,1,0 spaces
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)// Print numbers from 1 to i+1 times means 1,2,3,4 times
        {
            cout<<j;
        }
        for (int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

