#include <bits/stdc++.h>
using namespace std;
bool palindrome(string kata){
    int panjang=kata.length();
    if (panjang<=1){
        return true;
    } else{
        string subkata=kata.substr(1,panjang-2);
        return (kata[0]==kata[panjang-1]) and palindrome(subkata);
    }
}

int main(){
    string x;
    cin >> x;
    if (palindrome(x)==true){
        cout << "YA";
    }else{
        cout << "BUKAN";
    }
    return 0;
}
