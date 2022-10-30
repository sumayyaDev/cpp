#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+5;

int main(){
     ll n, k, q;
     cin>> n >> k >> q;
     vector<ll> v(N);
     vector<ll> vq(N);
     ll l, r, a, b;

     for(ll i=0; i<n; i++){
         cin>> l >> r;
         v[l] += 1;
         v[r+1] -= 1;
         //cout<<"-->"<<v[l] << "  " <<v[r+1]<<endl;
         //cout<< "v[92]=" << v[92] <<endl;
     }
     cout<< "Here--"<<endl;
     for(ll i=90; i<=101; i++){
        cout<< "v[" << i << "]=" << v[i] <<endl;
     }

     ll sum=0;
     for(ll i=0; i<v.size(); i++){
        if(i>=91 && i<=99)
               cout<<"\nbefore-->sum="<<sum<< "  "<< v[i] <<endl;
         sum += v[i];

         if(i>=91 && i<=99)                                     //if(i==95) cout<< "95-->" << sum <<endl;
               cout<<"after-->sum="<<sum<< "  "<< v[i] <<endl;
         if(sum>=k){
            cout<<"sum="<<sum<<endl;
            v[i]=1;
            cout<< "v[" << i << "]=" << v[i] <<endl;
         }
         else{
            v[i]=0;
            //cout<< "v[" << i << "]=" << v[i] <<endl;
         }
     }

     for(ll i=0; i<N; q++){
         vq[i] = v[i-1] + vq[i-1];
     }
     while(q--){
        cin>> a >> b;
        cout<< vq[b+1]-vq[a] <<endl;
     }

   return 0;
}



