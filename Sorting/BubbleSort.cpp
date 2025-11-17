#include<iostream>
#include <cmath>
using namespace std;
#define nl endl

void Bubble_Sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;++j){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
            didswap=1;
        }
        if(didswap==0){//Checking if there any swapping happend in the array; if no then break
            break;
        }
    }
}
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(array)/sizeof(array[0]);
    cout << "Array before Sorting :" << nl;
    for(int i=0;i<size;++i) cout << array[i] << " " ;
    cout << nl;
    //sorting using selection sort
    Bubble_Sort(array,size);
    cout << "Array after Sorting :" << nl;
    for(int i=0;i<size;++i) cout << array[i] << " ";
    return 0;
}
//T.C. : 0(n^2) {average, worst}
//0(n) {best case}