#include<bits/stdc++.h>
using namespace std;

    int largestRectangleArea(vector<int>& heights) {

        auto init = []()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return 'c';
}();

        int len=size(heights);
        vector<int> left;
        stack<pair<int,int>> s;
        s.push({-1,-1});
        for(int i=0; i < len; i++){
            while(s.top().first >= heights[i]){
                s.pop();
            }
            left.push_back(s.top().second);
            s.push({heights[i],i});
        }
       

        vector<int> right;
        stack<pair<int,int>> s1;
        s1.push({-1,len});
        for(int i = len-1; i>=0; i--){
            while(s1.top().first >= heights[i]){
                s1.pop();//cout<<s1.top().first<<" ";
            }
            right.push_back(s1.top().second);
            s1.push({heights[i],i});
        }
        reverse(right.begin(),right.end());

        for(auto it : right) cout<<it<<" ";
        cout<<endl;
        for(auto it : left) cout<<it<<" ";
        int m = 0;
        for(int i=0; i<len; i++){
            m=max(((right[i]-left[i] - 1) * heights[i]), m);
        }

        return m;
    }

int main(){
    vector<int> q {6,2,5,4,5,1,6}; 
    largestRectangleArea(q);
    return 0;
}