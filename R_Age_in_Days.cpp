#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int year=a/360;
    int dayremain=a%365;
    int month= dayremain/30;
    int day= dayremain%30;
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days"<<endl;
    
    return 0;
}
