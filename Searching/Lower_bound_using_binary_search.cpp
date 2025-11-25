#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int> &v,int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        mid =(lo+hi)/2;
        if(v[mid]<element){
            lo = mid+1;
        }else{
            hi = mid;
        }
    }
    if(v[lo]>=element){
        return lo;
    }
    if(v[hi]>=element){
        return hi;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    } 
    int element;
    cin >> element;
    /*If the vector is not input sorted or in a specific order the irst sort it the apply lower_bound 
    Note : then the lower_bound function will return the idex accorgind to the sorted array */
    // sort(v.begin(),v.end());
    int lb = lower_bound(v,element);
    cout << lb <<  "  " << v[lb] << endl; 
    return 0;
}