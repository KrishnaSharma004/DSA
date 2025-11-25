#include <iostream>
#include <vector>
using namespace std;
void linearsearch(vector<int> &a,int key){
    for(int i=0;i<a.size();++i){
        if(a[i]==key){
            cout << "Key is found at index : " << i << endl;
            return;
        }
    }
    cout << "Key is not found !!" ;
    return ;
}
int main(){
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int key;
    cin >> key;
    linearsearch(a,key);

    return 0;
}