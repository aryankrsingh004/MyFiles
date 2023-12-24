#include <iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
double dist(int x,int y,int v,int w){
    double ans = sqrt((x-v)*(x-v) + (y-w)*(y-w));
    return ans;
}

void sol(){
    int x,y,a1,a2,b1,b2;
    cin>>x>>y>>a1>>a2>>b1>>b2;
    double x1,x2,x3,x4,x5;
    x1 = dist(x,y,a1,a2);
    x2 = dist(x,y,b1,b2);
    x3 = dist(0,0,a1,a2);
    x4 = dist(0,0,b1,b2);
    x5 = dist(a1,a2,b1,b2);
    double p = max(min(x1,x2),min(x3,x4));
    if(min(x1,x2)==x1&&min(x3,x4)==x3){
        
    }
    else if(min(x1,x2)==x2&&min(x3,x4)==x4){
        
    }
    else{
        if( (x5/2) > p){
            p = x5/2;
        }
    }
    cout <<setprecision(11);
    cout<<p<<endl;
}

int main() {
   int t;
   cin>>t;
   while(t--){
       sol();
   }
   
   return 0;
}