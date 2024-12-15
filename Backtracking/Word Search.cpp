#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(int i,int j,int idx,vector<vector<char>>&board,string& word)
    {
        if(min(i,j)<0||i>=board.size()||j>=board[0].size()||idx>=word.size()||board[i][j]!=word[idx])
            return false;
        if(idx==word.size()-1)
            return true;
        
        board[i][j]='#';

        bool res=false;
        res|=dfs(i+1,j,idx+1,board,word);
        res|=dfs(i,j+1,idx+1,board,word);
        res|=dfs(i-1,j,idx+1,board,word);
        res|=dfs(i,j-1,idx+1,board,word);

        board[i][j]=word[idx];

        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(i,j,0,board,word))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};