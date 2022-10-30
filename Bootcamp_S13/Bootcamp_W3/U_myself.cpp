#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int l, q;
    cin>> l >> q;
    vector<int> cutWood;
    while(q--){
        int c, x; //c--type(1 ior 2), x--mark at x
        cin>> c >> x;

        if(c==1){
            auto lower_index = lower_bound(cutWood.begin(), cutWood.end(), x); //for creating a sorted vector
            cutWood.insert(lower_index, x); //inserting x at position lower_index
        }
        else{  //when c==2
            int lengthX;
            if(cutWood.size()==0){ //no cutting has done yet
               lengthX = l;
            }
            else if(x < cutWood[0]){
                lengthX = cutWood[0]; //mark x exists on first piece
            }
            else if(x > cutWood[cutWood.size()-1]){ //mark x exists on last piece
                lengthX = l - cutWood[cutWood.size()-1];
            }
            else{ // mark x exists in middle of somewhere
                auto low_index = lower_bound(cutWood.begin(), cutWood.end(), x);
                auto up_index = upper_bound(cutWood.begin(), cutWood.end(), x);
                if(low_index == up_index)
                lengthX = *up_index - *(low_index-1);

                else lengthX = *low_index - *(low_index-1);
            }
            cout<< lengthX <<endl;
        }
    }

  return 0;
}
