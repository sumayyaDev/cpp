#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n, w, x;
        cin>> n >> w;
        int height=1;
        int remaining_space=w;

        multiset<int> ms;
        for(int i=0; i<n; i++){
            cin>> x;
            ms.insert(x);
        }

        while(!ms.empty()){
            auto it = ms.upper_bound(remaining_space);
            //cout<< "upper_bound=" <<*it <<endl;
            if(it!=ms.begin()){
                it--;
                int curr_large_rect=*it;
                //cout<< "curr_large_rect=" << curr_large_rect<<endl;

                remaining_space -= curr_large_rect;
                ms.erase(it);
            }
            else{ //now upper bound of remaining space hits the ms.begin(), that means we need more space
                  // so go upward
                remaining_space = w; //reset
                height++;
            }
        }
        //height=1, rectangle 8,8
        //Height=2,
        cout<< height << '\n';

    }

    return 0;
}
