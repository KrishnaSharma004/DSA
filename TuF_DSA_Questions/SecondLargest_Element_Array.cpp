#include <iostream>
#include <vector>
using namespace std;
int secondlargest(vector<int> &arr,int n){
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    
    int slargest = secondlargest(v,n);

    cout << "Second largest element is : " << slargest << endl;
    return 0;
}