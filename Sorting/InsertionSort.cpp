#include <iostream>
#include <vector>
using namespace std;
#define nl endl 
#define sp " "
#define floop(i,a,b) for(int i=a;i<b;++i)
#define ll long long
#define vint vector<int>

void InsertionSort(vint &arr,int n){
    floop(i,1,n){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printArray(vint &arr,int n){
    floop(i,0,n){
        cout << arr[i] << sp;
    }
    cout << nl;
}
int main(){
    int n;
    cin >> n;
    vint arr(n);
    floop(i,0,n){
        cin >> arr[i];
    }
    InsertionSort(arr,n);
    printArray(arr,n);
    
    return 0;
}