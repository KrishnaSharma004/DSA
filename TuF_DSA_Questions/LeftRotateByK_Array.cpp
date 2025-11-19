#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void leftrotate1(vector<int> &a,int n,int k){
    k = k %n;
    vector<int> temp;
    for(int i=0;i<k;++i){
        temp.push_back(a[i]);
    }
    for(int i=k;i<n;++i){
        a[i-k]=a[i];
    }
    for(int i=n-k;i<n;++i){
        a[i]=temp[i-(n-k)];
    }
}
//T.C. : 0(k) + 0(n-k) + 0(k) 
//S.C. : 0(k)
void leftrotate2(vector<int> &a,int n,int k){
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.begin()+n);
    reverse(a.begin(),a.end());
}
//T.C. : 0(2n)
//S.C. : 0(1)
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int k;
    cin >> k;
    leftrotate2(a,n,k);
    for(int i=0;i<n;++i){
        cout << a[i] << " ";
    }
}