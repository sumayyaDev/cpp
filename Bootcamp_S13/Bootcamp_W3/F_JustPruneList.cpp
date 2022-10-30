#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    int n, m; //n-->length of 1st list, m-->length of second list

    while(t--){
        cin>> n >> m;

        vector<int> fv;
        vector<int> sv;
        map<int, int> mpf;
        map<int, int> mps;

        while(n--){
        int num;
        cin>>num;
        if(mpf.find(num) != mpf.end()){ //num is found in map
            ++mpf[num]; //occurrence of this num is increased by 1
        }else{
            mpf[num] = 1;
            fv.push_back(num);
        }
    }
    sort(fv.begin(), fv.end());

    while(m--){
        int num;
        cin>>num;
        if(mps.find(num) != mps.end()){ //num is found in map
            ++mps[num]; //occurrence of this num is increased by 1
        }else{
            mps[num] = 1;
            sv.push_back(num);
        }
    }
    sort(sv.begin(), sv.end());

    int count = 0;
    int fs = fv.size();
    int ss = sv.size();
    int minSize;
    if(ss>fs){
        minSize = fs;
        for(int i=fs; i<ss; i++){
            count += mps[sv[i]]; //counting the occurrence
        }
    }
    if(fs>ss){
         minSize = ss;
        for(int i=ss; i<fs; i++){
            count += mpf[fv[i]]; //counting the occurrence
        }
    }

    for(int i=0; i<minSize; i++){
        if(fv[i]==sv[i]){

            if(mpf[fv[i]] > mps[sv[i]]){
                while(mpf[fv[i]] != mps[sv[i]]){
                    --mpf[fv[i]];
                    count++;
                }
            }
            if(mpf[fv[i]] < mps[sv[i]]){
                while(mpf[fv[i]] != mps[sv[i]]){
                    --mps[sv[i]];
                    count++;
                }
            }

        }
    }

    cout << count <<endl;

  }

  return 0;
}
