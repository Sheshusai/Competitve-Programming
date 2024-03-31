#include <bits/stdc++.h>
using namespace std;


bool safe(int i,int j,vector<string> &board,vector<string> &Checkboard) {
  if(Checkboard[i][j]=='*') return false;
  for(int p=0;p<=j;p++) {
    if(board[i][p] =='Q') return false;
  }
  for(int p=i,q=j;(p>=0 && q>=0);p--,q--) {
    if(board[p][q] == 'Q') return false;
  }
  for(int p=i,q=j;(p<8 && q>=0);p++,q--) {
    if(board[p][q] == 'Q') return false;
  }
  return true;
}


void nQueens(int col,vector<string> &board,vector<string> &Checkboard,int &count) {
  if(col == 8) {
    count++;
    return;
  }
  
  for(int i=0;i<8;i++) {
    if(safe(i,col,board,Checkboard)) {
      board[i][col] = 'Q';
      nQueens(col+1,board,Checkboard,count);
      board[i][col] = '.';
    }
  }
}


int main() {
  vector<string> Checkboard;
  vector<string> board;
  for(int i=0;i<8;i++) {
    string s;
    string t;
    for(int j=0;j<8;j++) {
      char ch;
      cin >> ch;
      s.push_back(ch);
      t.push_back('.');
    }
    Checkboard.push_back(s);
    board.push_back(t);
  }
  int count = 0;

  nQueens(0,board,Checkboard,count);
  cout << count;
  return 0;
}
