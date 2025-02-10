#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int ares=pow(a,b);
     long long int bres=pow(c,d);
    if(ares>bres){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
