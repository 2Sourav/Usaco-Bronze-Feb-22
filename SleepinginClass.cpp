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
#define el        '\n'
#define vi          vector<int>
#define N         200010
int prefixarray[N], a[N];
int n;

int answer(int mid){
    int sum = 0, cnt = 0;
   
    for(int i = 0; i < n; i++){
        sum += a[i];
       
        if(sum == prefixarray[mid]) cnt++, sum = 0;
        else if(sum > prefixarray[mid]) {
            cnt = -1;
           
            break;
        }
    }
    if(sum > 0) cnt = -1;
    return cnt;
   
}
void qsn()
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

void solve() {
    cin >> n;
   
    for(int i = 0; i < n; i++)
        cin >> a[i], prefixarray[i] = (i ? prefixarray[i - 1] + a[i] : a[i]);
    int ans = 0;
   
    for(int i = 0; i < n; i++){
        if(prefixarray[i] > 0 && prefixarray[n - 1] % prefixarray[i] != 0) continue;
        int res = answer(i);
       
        if(~res){
            ans = max(ans, res);
        }
       
    }
    cout << n - ans << el;
}

int main() {
    
    int tc; cin >> tc;
    while(tc--) {
        
          solve();
    }
}