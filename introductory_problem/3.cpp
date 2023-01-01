#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define nl   "\n"
#define rep(i,j,k) for(ll i=j;i<k;i++)
 
using ll = long long;
 
const int N = 1e5+10;
constexpr ll INF = 2e18;
 
 
 
 
 
void solve(){
 
    string s; 
    cin >> s;
    int n = s.length();
    int ans=1,currans=1;
     rep(i,0,n-1){
      if(s[i]==s[i+1]){
         
         currans++;
        ans = max(currans,ans);
      }
      else {
          
          currans = 1;
      }
     }
     cout << ans << nl;
 
    return;
      }
 
 
int main(){
 
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    #endif
 
// int t=1; cin >> t;
// while(t--){
   solve();
 
    return 0;
}
 
