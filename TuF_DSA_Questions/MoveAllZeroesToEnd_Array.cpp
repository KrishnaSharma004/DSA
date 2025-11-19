#include <iostream>
#include <vector>
using namespace std;

void zeroesend(vector<int> &a,int n){
    vector<int> temp;
    for(int i=0;i<n;++i){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    int nonzeroes = temp.size();
    for(int i=0;i<nonzeroes;++i){
        a[i]=temp[i];
    }
    for(int i=nonzeroes;i<n;++i){
        a[i]=0;
    }
}

//Optimized one :
void zeroesend2(vector<int> &a,int n){
    int j=-1;
    for(int i=0;i<n;++i){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    //Non zero Array ;
    if(j==-1) return;

    for(int i=j+1;i<n;++i){
        if(a[i]!=0){
            swap(a[i],a[j]); 
            j++;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    zeroesend2(a,n);
    for(int i=0;i<n;++i){
        cout << a[i] << " " ;
    }
    return 0;
}