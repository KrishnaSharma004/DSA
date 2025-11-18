#include <iostream>
#include <vector>
using namespace std;
int largest(vector<int> &arr,int n){
    int largest = arr[0];
    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    int slargest = largest(v,n);

    cout << "Largest element is : " << slargest << endl;
    return 0;
}