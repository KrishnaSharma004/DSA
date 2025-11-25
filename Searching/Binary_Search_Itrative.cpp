#include <iostream>
#include <vector>
using namespace std;
string binary_search(vector<int> &v,int key){
    int low = 0;
    int high = v.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==key) return "Found";
        else if(v[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    return "Not found";
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    int key;
    cin >> key;
    cout << binary_search(v,key) << endl;
    return 0;
}