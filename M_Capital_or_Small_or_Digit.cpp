#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='0' && a<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    else if(a>='a' && a<='z'){
        cout<<"ALPHA"<<"\n"<<"IS SMALL"<<endl;
    }
    else if(a>='A' && a<='Z'){
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<<endl;
    }
    
    return 0;
}
