#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    priority_queue<int, vector<int>, greater<int> > mnh;
    for(int i=0;i<n;++i)    
        mnh.push(a[i]);
    int ans = 0;
    while(mnh.size()>1){
        int m1 = mnh.top();
        mnh.pop();
        int m2 = mnh.top();
        mnh.pop();
        ans += m1+m2;
        mnh.push(m2+m1);
    }
    cout << ans << '\n';
    return 0;
}