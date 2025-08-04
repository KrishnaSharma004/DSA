#include <iostream>
#include <vector>
using namespace std;
#define nl endl 
#define sp " "
#define floop(i,a,b) for(int i=a;i<b;++i)
#define ll long long
#define vint vector<int>
void Heapify(vint &arr,int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l] > arr[largest]) largest=l;
    if(r<n && arr[r] > arr[largest]) largest=r;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        Heapify(arr,n,largest);
    }
}
void HeapSort(vint &arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--) Heapify(arr,n,i);
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
}
void Print(vector<int> &arr,int n){
    floop(i,0,n){
        cout << arr[i] << sp ;
    }
    cout << nl;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    floop(i,0,n) cin >> arr[i];
    HeapSort(arr);
    Print(arr,n);
    return 0;
}