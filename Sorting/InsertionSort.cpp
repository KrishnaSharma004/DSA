#include <iostream>
#include <vector>
using namespace std;

void Insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;++i){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(array)/sizeof(array[0]);
    cout << "Array before Sorting :" << endl;
    for(int i=0;i<size;++i) cout << array[i] << " " ;
    cout << endl;
    //sorting using selection sort
    Insertion_sort(array,size);
    cout << "Array after Sorting :" << endl;
    for(int i=0;i<size;++i) cout << array[i] << " ";
    return 0;
}

