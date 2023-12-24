#include<bits/stdc++.h>
using namespace std;

int mah(vector<int>& heights) {

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
        int m = 0;
        for(int i=0; i<len; i++){
            m=max(((right[i]-left[i] - 1) * heights[i]), m);
        }

        return m;
    }


int maximalRectangle(vector<vector<char>>& matrix) {
    vector<vector<int>> int_matrix;
    for(auto it: matrix){
        vector<int> int_row;
        for(auto it2: it){
            if(it2 == '0') int_row.push_back(0);
            else int_row.push_back(1);
        }
        int_matrix.push_back(int_row);
    }

    int len = int_matrix.size(), len1 = int_matrix[0].size();
    for(int i=1; i < len; i++){
        for(int j=0; j<len1; j++){
            if(int_matrix[i][j] == 0){
                int_matrix[i][j] = 0;
            }
            else{
                int_matrix[i][j] += int_matrix[i-1][j];
            }
        }    
    }
    int ans=0;
    for(int i=0; i<len; i++){
            ans = max(ans, mah(int_matrix[i]));
    }
    return ans;
    }

int main(){
    vector<vector<int>> q{{1,0,1,0,0},{1,0,1,1,1},{1,1,1,1,1},{1,0,0,1,0}};
    vector<vector<char>> q2 {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout<<maximalRectangle(q2);
    
    // vector<vector<int>> int_matrix;
    // for(auto it: q2){
    //     vector<int> int_row;
    //     for(auto it2: it){
    //         if(it2 == '0') int_row.push_back(0);
    //         else int_row.push_back(1);
    //     }
    //     int_matrix.push_back(int_row);
    // }
    // for(int i=0; i<int_matrix.size(); i++){
    //     for(int j=0; j< int_matrix[0].size(); j++){
    //         cout<<int_matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;

}