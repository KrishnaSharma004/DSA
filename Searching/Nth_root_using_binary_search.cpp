#include <iostream>
using namespace std;
double eps = 1e-7;
double multiply(double mid,double n){
    double ans = 1;
    for(int i=0;i<n;++i){
        ans *=mid;
    }
    return ans;
}
int main(){
    double x;
    int n;
    cin >> x >> n;
    double lo=0,hi=x,mid;
    while(hi-lo>eps){
        mid = (lo+hi)/2;
        if(multiply(mid,n) < x){
            lo = mid;
        }else{
            hi = mid;
        }
    }
    cout << lo << "\n" << hi;
}
// t.c. : 0(n*log(10^d)) where, d is the accuracy of the decimal 