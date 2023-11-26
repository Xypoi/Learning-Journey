#include <bits/stdc++.h>
using namespace std;


int fungsi(int a, int b , int k, int x){
    if(k<=0){
        return x;
    } else if(k>0){
        x= abs(a*x+b);
        k--;
        return fungsi(a,b,k,x);
    }
}

int main()
{
    int a,k,b,x;
    cin >> a >> b >> k >> x;
    cout << fungsi(a,b,k,x);
    return 0;
}
