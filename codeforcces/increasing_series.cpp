

#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;

    bool isSafe(pair<int, int> f, pair<int, int> s){
        if(s.first == f.first || s.second == f.second) return false;
        if(abs(s.first - f.first) == abs(s.second - f.second)) return false;
        else return true;
    }
    void solve(int n, vector<pair<int, int>> queens, int crow, int& count, int c){
        if(n == 0){
            count++;
            // for(auto it : queens){
            //     // cout<<"hi "<<it.first<<" "<<it.second<<endl;
            // }
            return;
        }
        if(crow == 0){
            for(int i = 0; i < c; i++){
                pair<int, int> queen;
                queen.first = 0;
                queen.second = i;
                queens.push_back(queen);
                solve(n -1, queens, crow+1, count, c);
                queens.pop_back();
            }
            
        }
        else{
            pair<int, int> queen;
            for(int i = 0; i < c; i++){
                queen.first = crow;
                queen.second = i;
                bool flag = true;
                for(auto q : queens){
                    if(!isSafe(q, queen)){
                        // cout<<"hi ";
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    // cout<<queen.first<<" "<<queen.second<<endl;
                    queens.push_back(queen);
                    solve(n-1, queens, crow + 1, count, c);
                    queens.pop_back();
                }
            }
            
        }
        }

    int totalNQueens(int n) {
        vector<pair<int, int>> queens;
        int count = 0;
        solve(n, queens, 0, count, n);
        return count;

    }

int main(){
    cout<<totalNQueens(13);
    return 0;
}