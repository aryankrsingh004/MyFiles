#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> countbits(int n){
    int cnt=0;
    vector<int> ans {0};
    int arr[4] {0,1,1,2};
    for(int i = 1; i<=n; i++){
        int os=cnt;
        //cout<<os<<" ";
        if(i & (1<<cnt)){
            ans.push_back(1);
            cnt++;
            //cout<<"y";
        }
        else{
            ans.push_back(ans[ans.size() - (1<<os-1)] + 1);
            //cout<<"n";
        }
    }
    return ans;
}

int main(){
    int n= 16;
    //cout<<(1<<3);
    // int cnt=1;
    // for(int i = 2; i<=n; i++){
    //     if(i & 1<<cnt) {
    //         cnt++;cout<<"yes\n";
    //     }
    //     else cout<<"no\n";
    // }
    vector<int> a= countbits(n);
    for(auto it : a){
        cout<<it<<" ";
    }
    return 0;
}
/*
0   0
1   1  0

1   2  
2   3  2

1   4  
2   5  3
2   6  3
3   7  3

1   8  
2   9   4
2   10  4
3   11
2   12
3   13
3   14
4   15

1   16*/