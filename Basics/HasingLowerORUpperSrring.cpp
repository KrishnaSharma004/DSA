#include <iostream>
using namespace std;

int main(){
    //string is in lower case 
    string s;
    cin >> s;

    //Pre-computation :
    int hashh[26]={0};
    for(int i=0;i<s.size();++i){
        hashh[s[i]-'a']++;// if string is in upper case use s[i]-'A'
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch :
        cout << "No. of times " << ch << " Appears is :";
        cout << hashh[ch-'a'] << endl;
    }
    return 0;
}
