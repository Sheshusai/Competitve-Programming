#include <bits/stdc++.h>
using namespace std;

bool safe(int i,int j,vector<string> &board) {
  int n = board.size();
  for(int p=0;p<=j;p++) {
    if(board[i][p]=='Q') return false;
  }
  for(int p=i,q=j;(p>=0 && q>=0);p--,q--) {
    if(board[p][q]=='Q') return false;
  }
  for(int p=i,q=j;(p<n && q>=0);p++,q--){
    if(board[p][q]=='Q') return false;
  }
  return true;
} 

void nQueens(int col,vector<vector<string>> &ans,vector<string> &board, int &n) {
  if(col==n) {
    ans.push_back(board);
    return;
  }

  for(int i=0;i<n;i++) {
    if(safe(i,col,board)) {
      board[i][col] = 'Q';
      nQueens(col+1,ans,board,n);
      board[i][col] = '.';
    }
  }

}

int main() {
  int n;
  cin >> n;
  vector<vector<string>> ans;
  vector<string> board;
  string s;
  for(int j=0;j<n;j++) {
    s.push_back('.');
  }
  for(int i=0;i<n;i++) board.push_back(s); 
  nQueens(0,ans,board,n);
  for(auto b: ans) {
    for(int i=0;i<b.size();i++) {
      cout << b[i] << endl;
    }
    cout << endl;
  }

  return 0;

}
