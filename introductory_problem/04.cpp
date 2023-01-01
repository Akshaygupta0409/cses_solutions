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
     ll n; 
     cin >> n;
     ll a[n];
   for(int i=0; i<n; i++){
       cin >> a[i];
   }
   ll ans =0;
 
  rep(i,0,n-1){
 
     if(a[i+1]<a[i])
     {
    ans += abs(a[i] - a[i+1]);
     a[i+1] = a[i+1] + abs(a[i] - a[i+1]);
    
     }
   
  }
      cout << ans << nl;
 
    return;
      }
 
 
int main(){
 
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 
// int t=1; cin >> t;
// while(t--){
   solve();
 
    return 0;
}
 
