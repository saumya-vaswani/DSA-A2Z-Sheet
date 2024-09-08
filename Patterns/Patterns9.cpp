#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
for(int i=0;i<n;i++){
        for(int k=2;k<n-i+1;k++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout <<"*";
        }
        for(int k=2;k<n-i+1;k++){
            cout << " ";
        }
        cout << endl;
        
    }
    for(int i=n-1;i>=0;i--){
        for(int k=n-i;k>=2;k--){
            cout << " ";
        }
        for(int j=2*i+1;j>=1;j--){
            cout <<"*";
        }
        for(int k=n-i;k>=2;k--){
            cout << " ";
        }
        cout << endl;
        
    }
}