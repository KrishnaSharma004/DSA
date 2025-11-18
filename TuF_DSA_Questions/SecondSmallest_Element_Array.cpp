#include <iostream>
#include <vector>
using namespace std;
int secondsmallest(vector<int> &arr,int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<n;++i){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    
    int ssmallest = secondsmallest(v,n);

    cout << "Second smallest element is : " << ssmallest << endl;
    return 0;
}