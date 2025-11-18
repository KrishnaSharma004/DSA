#include <iostream>
#include <vector>
#include <set>
using namespace std;
// Can use if the array is sorted :->
// int find(vector<int> &v,int n){
//     int i=0;
//     for(int j=1;j<n;++j){
//         if(v[j]!=v[i]){
//             v[i+1]=v[j];
//             i++;
//         }
//     }
//     return (i+1);
// } T.C. : 0(n)
int main(){
    int n;
    cin >> n;
    set<int> st;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
        st.insert(v[i]);
    }
    int index = 0;
    for(auto &it : st){
        v[index]=it;
        index++;
    }

    cout << index << endl;
    for(int i=0;i<index;++i){
        cout << v[i] << " ";
    }
    return 0;
}
// T.C. : 0(nlog(n) + n)