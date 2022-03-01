#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>
#include<map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>
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
  sort(a.begin(), a.end());
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
  sort(xs.begin(), xs.end());
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
    bool ok = is_sorted(odd.begin(), odd.end());
}
void solve() {
    int n;
    cin >> n;
   
    int a[n + 2], b[n + 2];
    map<int,int>hashed;
    for(int i = 0; i < n; i++) cin >> a[i], hashed[a[i]] = i;
   
    for(int i = 0; i < n; i++) cin >> b[i];
    ordered_set st;
   
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(st.empty()){
            if(hashed[b[i]] != i) ans++;
            st.insert(hashed[b[i]]);
            continue;
        }
       
        auto it = st.order_of_key(hashed[b[i]]);
        it = st.size() - it;
        if((hashed[b[i]] + it) % n != i) ans++;
       
        st.insert(hashed[b[i]]);
    }
    cout << ans << endl;
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
int main() {
    
    
    
        
          solve();
    
}