//captures for rook
#include<iostream>
#include<vector>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int ans=0,r,c;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='R')
            {
                r=i,c=j;
                break;
            }
        }
    }
    int i=r,j=c;
    while(i>=0 && board[i][j]!='B')
    {
        if(board[i][j]=='p'){
            ans++; 
            break;
        }
        i--;
    }
    i=r,j=c;
    while(i<board.size() && board[i][j]!='B')
    {
        if(board[i][j]=='p'){
            ans++; 
            break;
        }
        i++;
    }
    i=r,j=c;
    while(j<board.size() && board[i][j]!='B')
    {
        if(board[i][j]=='p'){
            ans++; 
            break;
        }
        j++;
    }
    i=r,j=c;
    while(j>=0 && board[i][j]!='B')
    {
        if(board[i][j]=='p'){
            ans++; 
            break;
        }
        j--;
    }
    return ans;
}

