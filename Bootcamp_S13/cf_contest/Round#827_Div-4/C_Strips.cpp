#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    char a[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>> a[i][j];
        }
    }
    char ans;

    //int flag=0;
    int cnt;
    int final_cnt=0;
    for(int i=0; i<8; i++){
        cnt=1;
        for(int j=0; j<7; j++){
            if(a[i][j]=='.') break;
            else if(a[i][j]==a[i][j+1]){
                ++cnt;
                if(cnt==8){
                    ans=a[i][j];
                    final_cnt=cnt;
                    //cout<< "i=" << i << "  j=" << j << "  ans=" << ans <<endl;
                }
            }
        }
        /*if(cnt==8){
            cout<< ans << "\n";
            flag=1;
            break;
        }*/
    }
    if(final_cnt==8){
       cout<< ans << "\n";
    }

    else{
        //flag=-1;
        for(int i=0; i<8; i++){
        cnt=1;
        for(int j=0; j<7; j++){
            if(a[j][i]=='.') break;
            else if(a[j][i]==a[j+1][i]){
                cnt++;
                if(cnt==8){
                  ans=a[j][i];
                  final_cnt=cnt;
                }
            }
        }
        /*if(cnt==8){
            cout<< ans << "\n";
            //flag=1;
            break;
        }*/
      }
      if(final_cnt==8){
       cout<< ans << "\n";
    }
  }



}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
