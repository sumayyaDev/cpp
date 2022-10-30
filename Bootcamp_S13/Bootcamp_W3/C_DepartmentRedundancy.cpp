#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;    //for taking input
    map<int, int> mp; //for output as pair

    int num;
    while(cin>>num){    //put any non-integer character to terminate input taking
        if(mp.find(num) != mp.end()){   //num is found on the map
            ++mp[num];  //num's second element of the pair will be incremented(the occurence)
        }
        else{   //num is not found in map, now set the occurence 1 and push num to vector
            mp[num] = 1;    //occurence is set to 1 as a pair of num, here map is being formed
            v.push_back(num);
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " << mp[v[i]] <<endl;
    }


  return 0;
}

