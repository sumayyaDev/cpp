#include<bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){

    int l, q;  //l-->length, q-->no. of queries
    cin>> l >> q;

    vector<int> cutX;

    for(int i=0; i<q; i++){
        int c, x;
        cin>> c >> x; //c-->query type(1 or 2), x-->at mark x

        if(c == 1){
           auto lower_index = lower_bound(cutX.begin(), cutX.end(), x);
           cutX.insert(lower_index, x);

           cout <<"cutX vector: ";
           for(auto m : cutX){
            cout<< m << " ";
           } cout<<endl;

        }else{
            int ans=0;
            if(cutX.size() == 0){
                ans = l;
                cout<<"1/ ans= "<<ans<<endl;
            }
            else if(x < cutX[0]){
                ans = cutX[0];
                cout<<"2/ ans= "<<ans<<endl;
            }
            else if(cutX[cutX.size()-1] < x){
                ans = l - cutX[cutX.size()-1];
                cout<<"3/ ans= "<<ans<<endl;
            }
            else{
                auto lower_index = lower_bound(cutX.begin(), cutX.end(), x);
                auto upper_index = upper_bound(cutX.begin(), cutX.end(), x);
                cout<<"low= "<<*lower_index<<"  up= "<<*upper_index<<endl;
                ans = *upper_index -  *(lower_index-1);
                cout<<"4/ ans= "<<ans<<endl;
            }
            cout<< "Final= " << ans << endl;
        }
    }

  return 0;
}
