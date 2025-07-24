#include <iostream>
#include <cmath>
using namespace std;
#define nl endl
#define floop(i,a,b) for(int i=a;i<b;++i)
const int N=1e7;
int a[N];
void Merge(int l,int r,int mid){
    int l_sz = mid-l+1;
    int L[l_sz+1];
    int r_sz = r-mid;
    int R[r_sz+1];
    floop(i,0,l_sz+1) L[i]=a[i+l];
    floop(i,0,r_sz+1) R[i]=a[i+mid+1];

    L[l_sz]=R[r_sz]=INT_MAX;

    int l_i = 0;
    int r_i = 0;
    floop(i,l,r+1){
        if(L[l_i]<=R[r_i]){
            a[i]=L[l_i];
            l_i++;
        }else{
            a[i]=R[r_i];
            r_i++;
        }
    }
}
void MergeSort(int l,int r){
    if(l==r)return ;
    int mid=(l+r)/2;
    MergeSort(l,mid);
    MergeSort(mid+1,r);
    Merge(l,r,mid);
}
//T.C. :-> O(nlog(n))

int main(){
    int n;
    cout << "Enter the size of array : " ;
    cin >> n;
    cout << "Enter Array elements : ";
    floop(i,0,n) cin >> a[i];
    cout << "Array before mergesort :" << nl;
    floop(i,0,n) cout << a[i] << " ";
    cout << nl;
    // Mergesorting
    MergeSort(0,n-1);
    cout << "Array after mergesort :" << nl;
    floop(i,0,n) cout << a[i] << " ";
    return 0; 
}