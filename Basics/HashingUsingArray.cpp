#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    //Pre-computation :
    int hashh[100000]={0};
    for(int i=0;i<n;++i){
        hashh[arr[i]]+=1;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetch :
        cout << "No. of times " << num << " Appears is :";
        cout << hashh[num] << endl;
    }
    return 0;
}