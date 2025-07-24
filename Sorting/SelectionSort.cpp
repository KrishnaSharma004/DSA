#include<iostream>
#include <cmath>
using namespace std;
#define nl endl

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;++i){
        int minindex=i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<arr[minindex]) minindex=j;
        }
        swap(arr[minindex],arr[i]);
    }
}
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(array)/sizeof(array[0]);
    cout << "Array before Sorting :" << nl;
    for(int i=0;i<size;++i) cout << array[i] << " " ;
    cout << nl;
    //sorting using selection sort
    SelectionSort(array,size);
    cout << "Array after Sorting :" << nl;
    for(int i=0;i<size;++i) cout << array[i] << " ";
    return 0;
}