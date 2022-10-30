#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        //Alice make 1st move(index->0,2,4,6..), make small(a/b)
        //Bob(index->1,3,5,7...), make large(y/z)
        string s;
        cin>> s;
        for(int i=0; i<s.size(); i++){
            if(i%2==0){ //Alice
                if(s[i]!='a') s[i]='a';
                else s[i]='b';
            }
            else{ //Bob
                if(s[i]!='z') s[i]='z';
                else s[i]='y';
            }
        }
        cout<< s <<endl;
    }


    return 0;
}
