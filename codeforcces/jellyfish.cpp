#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;cin>>T;
    while(T--){
        int a,b,n;cin>>a>>b>>n;
        int tool[n];
        for(int i=0; i<n; i++){
            cin>>tool[i];
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(tool[i] > a){
                count+=b;
            }
            else count+=tool[i];
        }
        cout<<a+count-1<<endl;
    }    

    return 0;
}