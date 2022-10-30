#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    string s1, s2;
    getline(cin, s1); //in 1st case, for taking 2 inputs, this line is needed
    while(t--){
        getline(cin, s1);
        getline(cin, s2);
        //transforming uppercase to lowercase
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        //removing white spaces
        s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
        s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

        //sorting
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1==s2){
            cout<< "Case " << cs++ << ": Yes\n";
        }
        else{
            cout<< "Case " << cs++ << ": No\n";
        }
    }

   return 0;
}
