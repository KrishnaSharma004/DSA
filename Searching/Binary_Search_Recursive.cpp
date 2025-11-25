#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &num,int target,int low,int high){
    if(low > high){
        return -1;
    }
    int mid = (low+high)/2;
    if(num[mid]==target) return mid;
    else if(num[mid] > target){
        return binary_search(num,target,low,mid-1);
    }else{
        return binary_search(num,target,mid+1,high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0;i<n;++i){
        cin >> num[i];
    }
    int target;
    cin >> target;
    cout << binary_search(num,target,0,num.size());

    return 0;
}