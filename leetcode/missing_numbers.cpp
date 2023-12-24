#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=size(nums),ans=0;
        for(int i=0; i<n; i++){
            ans = ans ^ nums[i];
            ans = ans ^ i;
        }
        ans = ans ^ n;
        return ans;
    }
};

int main(){
    Solution obj;
    vector<int> q {9,6,4,2,3,5,7,0,1};
    cout<<obj.missingNumber(q);
    return 0;
}