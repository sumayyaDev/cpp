#include<bits/stdc++.h>
using namespace std;

const int MAX = 2e5+10;

int main()
{
    int q; cin>> q;
    vector<int> pos(MAX);
    int curr_l=0, curr_r=0;

    for(int i=0; i<q; i++){
        string type; //L or R or ?
        int id; //index of the current shell
        cin>> type >> id;
        if(i==0){ //Base case
            pos[id]=curr_l; //0
            --curr_l; //-1
            ++curr_r; //1
        }
        else{
            if(type=="L"){
                pos[id]=curr_l;
                --curr_l;
            }
            else if(type=="R"){
                pos[id]=curr_r;
                ++curr_r;
            }
            else{
               int popBooks = min( abs(pos[id]-curr_l), abs(pos[id]-curr_r) ) -1;
               cout<< popBooks <<endl;
            }
        }
    }

}
