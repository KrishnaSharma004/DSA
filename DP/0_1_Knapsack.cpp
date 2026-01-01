#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int wt[105],vl[105];
long long dp[105][100005];
long long func(int idx,int wt_left){
    if(wt_left == 0) return 0;
    //now the wt_left is not equal to 0 : 
    
    if(idx < 0) return 0; //No items a are left to pick  

    if(dp[idx][wt_left] != -1) return dp[idx][wt_left];
    //way 1:
    long long ans = func(idx-1,wt_left);

    //way 2:
    //I can pick the idx item only when the wt_left is >= wt of the item :
    if(wt_left - wt[idx] >= 0)
        ans = max(ans, func(idx-1,wt_left - wt[idx]) + vl[idx]);

    return dp[idx][wt_left] = ans;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin >> n >> w;

    for(int i=0;i<n;++i)
        cin >> wt[i] >> vl[i];
    
    cout << func(n-1,w) << '\n';

    return 0;
}