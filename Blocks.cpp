#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>
#include<map>
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>
bool ok = false;
void answer()
{
    int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j + 1];
    }
    cin >> a[i][0];
  }
  
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);
    }
  }
  
}
void qsn()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);
      }
    }
    
}
void solve(int sz, set<int>st[]){
    if(sz == -1){
        ok = true;
       
        return;
    }
    for(auto it : st[sz]){
        int cur = it;
        bool take[6]{};
       
        for(int i = 0; i < sz; i++){
            if(st[i].find(cur) != st[i].end())
           
                st[i].erase(cur), take[i] = true;
        }
        solve(sz - 1, st);
       

        for(int i = 0; i < sz; i++){
            if(take[i])
                st[i].insert(cur);
        }
       
    }
}
void segment()
{
    int n, tt;
  cin >> n >> tt;
  vector<pair<int, int>> qs;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      --x;
      qs.emplace_back(x, -1);
    } 
}
}
void go() {
    int n;
    cin >> n;
    set<char>st[5];
   
    for(int i = 0; i < 4; i++){
        string s;
        cin >> s;
        for(auto it : s) st[i].insert(it);
    }
   
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
       
        set<int>stt[s.size()];
        for(int j = 0; j < s.size(); j++){
            for(int k = 0; k < 4; k++){
               
                if(st[k].find(s[j]) != st[k].end()){
                    stt[j].insert(k);
                }
            }
        }
       
        ok = false;
        solve((int)s.size() - 1, stt);
        cout << (ok ? "YES\n" : "NO\n");
    }
}
void tag()
{
     int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool big = false;
    long long ans = 0;
    for (int i = 1; i < n - 1; i++) {
      big |= (a[i] > 1);
      ans += (a[i] + 1) / 2;
    }
}

int main() {
    
    
    
        
          go();
    
}