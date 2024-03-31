// the problem is to generate all the permutations of the given string and duplicates are present in the string
// this can be solved by inserting the all genearted string in set to remove duplicate strings
//
// approach 1.
// take a map and recursively call through the map by marking the taken things and storing it in a linear datastructure
//

/* #include <bits/stdc++.h> */
/* using namespace std; */
/**/
/* void getPermutations(string &s,string &temp,set<string> &vec,vector<bool> &mp) { */
/*   if(temp.size()==s.size()) { */
/*     vec.insert(temp); */
/*     return; */
/*   } */
/**/
/*   for(int i=0;i<mp.size();i++) { */
/*     if(!(mp[i])) { */
/*       temp.push_back(s[i]); */
/*       mp[i] = 1; */
/*       getPermutations(s,temp,vec,mp); */
/*       mp[i] = 0; */
/*       temp.pop_back(); */
/*     } */
/*   } */
/* }  */
/**/
/* int main() { */
/*   string s; */
/*   cin >> s; */
/*   set<string> vec; */
/*   vector<bool> mp(s.size(),0); */
/*   string temp = ""; */
/*   getPermutations(s,temp,vec,mp); */
/*   cout << vec.size() << endl; */
/*   for(string s:vec) cout << s << endl; */
/*   return 0; */
/* } */




// approach 2.
// by using the idea of swapping the elements. start from first pos swap it with every other right elements and itself through function
// calls. move the pointer right after every function call
//

#include <bits/stdc++.h>
using namespace std;


void getPermutations(int id,string &s, set<string> &vec) {
  if(id == s.size()) {
    vec.insert(s);
    return;
  }

  for(int i=id;i<s.size();i++) {
    swap(s[id],s[i]);
    getPermutations(id+1,s,vec);
    swap(s[id],s[i]);
  }
}


int main() {
  string s;
  cin >> s;
  set<string> vec;
  getPermutations(0,s,vec);
  cout << vec.size() << endl;
  for(auto s: vec) cout << s << endl;
  return 0;
}
