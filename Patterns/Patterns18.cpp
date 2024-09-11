#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt=64;
    for(int i=n;i>0;i--){
        for(int j=i;j<=n;j++){
            cout << char(cnt+j) << " ";
        }
        cout << endl;
    }
}