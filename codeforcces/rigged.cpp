#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        int n;cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int count=0;
        for(int i=0; i<n ; i++){
            count+=(b[i]+a[0]);
        }
        cout<<count<<endl;
        
        
    }
    return 0;
}