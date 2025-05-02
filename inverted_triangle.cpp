#include<iostream>
using namespace std;
//this program prints an inverted triangle pattern of numbers
int main(){
    int n=4;
    
    for(int i=0;i<n;i++)
    {//spaces 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        char ch='A'+i;// Start with 'A' and move to the next character for each row
        for(int j=0;j<n-i;j++){
            cout<<ch;
            
        }
        cout << endl;
    }
    return 0;
}
