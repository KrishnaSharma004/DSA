#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    //Pre-computation :
    map<int,int> hash;
    for(int i=0;i<n;++i){
        hash[arr[i]]++;
    }
    //itrate through map
    for(auto it:hash){
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetch :
        cout << "No. of times " << num << " Appears is :";
        cout << hash[num] << endl;
    }
    return 0;
}