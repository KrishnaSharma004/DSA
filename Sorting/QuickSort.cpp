#include <iostream>
#include <vector>
using namespace std;
#define nl endl 
#define sp " "
#define floop(i,a,b) for(int i=a;i<b;++i)
#define ll long long

int Partition(vector<int> &arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;

    floop(j,low,high){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void QuickSort(vector<int> &arr,int low ,int high){
    if(low<high){
        int p=Partition(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);
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
    QuickSort(arr,0,n-1);
    Print(arr,n);
    return 0;
}