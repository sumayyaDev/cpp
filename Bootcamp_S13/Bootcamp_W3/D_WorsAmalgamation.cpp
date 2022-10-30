#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, string> dictionary;
    map<string, string>::iterator it;
    string word, sword;

    while(true){   //taking input for dictionary
        cin>>word;
        if(word == "XXXXXX") break;
        sword = word;
        sort(sword.begin(), sword.end());
        dictionary[word] = sword;
    }

    while(true){ //taking input for scrambled words
        cin>>word;
        if(word == "XXXXXX")  break;
        sword = word;
        sort(sword.begin(), sword.end());

        bool dicemp = true; //if no dictionary word can be formed

        for(it=dictionary.begin(); it!=dictionary.end(); it++){
            if((*it).second == sword){
                cout<< (*it).first <<endl;
                dicemp = false;
            }
        }
        if(dicemp){
            cout << "NOT A VALID WORD" << endl;
        }
        cout<< "******" <<endl;
    }

  return 0;
}
