#include <iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    //Pre-computation :
    map<char,int> hash;
    for(int i=0;i<s.size();++i){
        hash[s[i]]++;
    }
    //itrate through map
    for(auto it:hash){
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch :
        cout << "No. of times " << ch << " Appears is :";
        cout << hash[ch] << endl;
    }
    return 0;
}