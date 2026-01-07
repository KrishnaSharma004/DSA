#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>
using namespace std;
class job{
    public : 
    int id;
    int deadline;
    int profit;
};
 
bool cmp(job* a,job* b){
    return a->profit > b->profit;
}
pair<int,int> jobSequencing(job* ar[],int n){
    sort(ar,ar+n,cmp);
    int total_profit = 0,count = 0,madl = -1;

    for(int i=0;i<n;++i)
        if(ar[i]->deadline > madl)
            madl = ar[i]->deadline;

    int hash[madl+1];
    memset(hash,-1,sizeof(hash));

    for(int i=0;i<n;++i){
        int d = ar[i]->deadline;
        for(int j=d ; j>=1 ; --j){
            if(hash[j] == -1){
                count++;
                hash[j] = ar[i]->id;
                total_profit += ar[i]->profit;
                break;
            }
        }
    }
    return {count,total_profit};  
}
int main(){
    int n;
    cin >> n;
    job* ar[n];
    int id,deadline,profit;
    for(int i=0;i<n;++i){
        ar[i] = new job();
        cin >> ar[i]->id >> ar[i]->deadline >> ar[i]->profit;
    } 
    
    pair<int,int> ans = jobSequencing(ar,n);

    cout << ans.first << " " <<  ans.second << '\n';
    return 0;
}