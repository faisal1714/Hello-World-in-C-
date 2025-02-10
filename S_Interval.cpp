#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;\
    cin>>a;
    if(a>=0 && a<=25.0000){
        cout<<"Interval [0,25]"<<endl;
    }
    else if(a>=25.00001 && a<=50.0000){
        cout<<"Interval (25,50]"<<endl;
    }
    else if(a>=50.00001 && a<=75.0000){
        cout<<"Interval (50,75]"<<endl;
    }
    else if(a>=75.00001 && a<=100.0000){
        cout<<"Interval (75,100]"<<endl;
    }
    else{
        cout<<"Out of Intervals"<<endl;
    }
    return 0;
}
