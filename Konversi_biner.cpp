#include <bits/stdc++.h>
using namespace std;

string binary(int number){
    if (number==1){
        return "1";
    } else if(number%2==1){
        return binary(number/2)+"1";
    }else{
        return binary(number/2)+"0";
    }
}
main(){
    int a; cin >> a;
    cout << binary(a);
}