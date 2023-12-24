#include<bits/stdc++.h>
using namespace std;

// Paste ""Solution Class"" the class here
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxl {0};
        vector<int> maxr {0};
        for(int i=0; i<n; i++){
            maxl.push_back(max(height[i], maxl[i]));
            cout<<maxl[i]<<" ";
        }
        cout<<maxl[n];
        cout<<endl;
        for(int i=n-1,j=0; i>=0; i--,j++){
            maxr.push_back(max(height[i], maxr[j]));
            cout<<maxr[j]<<" ";
        }
        cout<<maxr[n];
        cout<<endl;

        reverse(maxr.begin(), maxr.end());
        vector<int> mini;
        for(int i=0 ;i<n; i++){
            mini.push_back(min(maxl[i+1], maxr[i]));
        }
        int ans=0;
        for(int i=0; i<n; i++){
            ans += mini[i] - height[i];
        }
        return ans;
    }
};


//  3 0 0 2 0 4
//l 3 3 3 3 3 4
//r 4 4 4 4 4 4


int main(){
    Solution obj;

    vector<int> q {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<obj.trap(q);

    return 0;
}