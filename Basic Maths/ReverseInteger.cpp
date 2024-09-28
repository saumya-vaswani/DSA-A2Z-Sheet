#include<iostream>
using namespace std;

int main(){
    int  n;
    cin >> n;
    int revNo=0 ;
    while(n!=0){
        int rem = n%10;
        if (revNo > INT32_MAX/10 || (revNo == INT32_MAX / 10 && rem > 7)) return 0;
            if (revNo < INT32_MAX/10 || (revNo == INT32_MAX / 10 && rem < -8)) return 0;
        revNo = revNo*10 + rem ;
        n = n/10 ;
    }
    cout << revNo ;
}