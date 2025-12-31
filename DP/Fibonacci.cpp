#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int dp[N];
//TOP-DOWN Approach :
int fib_dp(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib_dp(n-1) + fib_dp(n-2); 
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    cout << fib_dp(n) << '\n';
    /*
    BOTTOM-UP Approach : 
    dp[0] = 0;
    dp[1] = 0;
    for(int i = 2 ; i < n ; ++i){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << '\n';
    */
    return 0;
}