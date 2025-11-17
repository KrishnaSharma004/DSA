#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    //Pre-computation :
    int hashh[256]={0};
    for(int i=0;i<s.size();++i){
        hashh[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch :
        cout << "No. of times " << ch << " Appears is :";
        cout << hashh[ch] << endl;
    }
    return 0;
}
