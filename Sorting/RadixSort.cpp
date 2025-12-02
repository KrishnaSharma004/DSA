#include <iostream>
#include <vector>
using namespace std;
int getMax(vector<int> &a,int n){
    int mx = a[0];
    for(int i=1;i<n;++i){
        mx = max(a[i],mx);
    }
    return mx;
}
void countingSort(vector<int> &a,int n,int pos){
    vector<int> count(10,0);
    vector<int> b(n);
    for(int i=0;i<n;++i){
        ++count[(a[i]/pos)%10];
    }
    for(int i=0;i<10;++i){
        count[i] = count[i] + count[i-1];
    }
    for(int i=n-1;i>=0;--i){
        b[--count[(a[i]/pos)%10]] = a[i];
    }
    for(int i=0;i<n;++i){
        a[i] = b[i];
    }
}
void radixSort(vector<int> &a,int n){
    int mx = getMax(a,n);
    for(int pos = 1;mx/pos > 0 ; pos = pos*10){
        countingSort(a,n,pos);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    radixSort(a,n);

    for(auto it : a){
        cout << it << " ";
    }
    return 0;
}