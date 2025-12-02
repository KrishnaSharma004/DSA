#include <iostream>
#include <vector>
using namespace std;
int findMaxelement(vector<int> &a,int n){
    int max = a[0];
    for(int i=1;i<n;++i){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
void countingSort(vector<int> &a, int n, int k){
    vector<int> count(k+1, 0);
    vector<int> b(n);
    for(int i=0;i<n;++i){
        count[a[i]]++;
    }
    for(int i=1;i<=k;++i){
        count[i] = count[i] + count[i-1];
    }
    for(int i=n-1;i>=0;--i){
        b[--count[a[i]]] = a[i];
    }
    for(int i=0;i<n;++i){
        a[i] = b[i];
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    int k = findMaxelement(a,n);
    
    countingSort(a,n,k);

    for(auto it : a){
        cout << it << " ";
    }
    return 0;
}