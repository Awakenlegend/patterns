#include<iostream>
using namespace std;
// This program prints a hollow diamond pattern of numbers
// The outer loop controls the number of rows
// The inner loop controls the number of columns
int main(){
    int n=4;
    //top half of the diamond
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i+1;j++)// Print spaces before the numbers n-i-1 times means 3,2,1,0 spaces
        {
            cout<<" ";
        }
        cout<<"*";// Print the first star
        if(i!=0)
        { // Print the second star only if i is not 0
            for(int j=0;j<2*i-1;j++)// Print spaces between the stars 2*i-1 times means 1,3,5,7 spaces
            {
                cout<<" ";
            }
            cout<<"*";// Print the second star
        }
        cout<<endl;
    }
    //bottom half of the diamond
    for(int i=0;i<n-1;i++){
        //spaces
        for(int j=0;j<i+2;j++)// Print spaces before the stars i+2 times means 2,3,4,5 spaces
        {
            cout<<" ";
        }
        cout<<"*";// Print the first star
        if(i!=n-2)
        { // Print the second star only if i is not n-2
            for(int j=0;j<2*(n-i-2)-1;j++)// Print spaces between the stars 2*(n-i-2)-1 times means 7,5,3,1 spaces
            {
                cout<<" ";
            }
            cout<<"*";// Print the second star
        }
        cout<<endl;
    }
    return 0;
}