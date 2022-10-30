#include<bits/stdc++.h>
using namespace std;

int ask(vector<int> k)
{
   int x;
   cout<< "? " << k[0] << " " << k[2] <<endl;
   cin>> x;
   if(x==1){
      cout<< "? " << k[0] << " " << k[3] <<endl;
      cin>> x;
      if(x==1) return k[0];
      else     return k[3];
   }
   else if(x==2){ //2 change
      cout<< "? " << k[2] << " " << k[1] <<endl;
      cin>> x;
      if(x==1) return k[2];
      else     return k[1];
   }
   else{
      cout<< "? " << k[1] << " " << k[3] <<endl;
      cin>> x;
      if(x==1)  return k[1];
      else      return k[3];
   }

}

void solve()
{
    int n; cin>> n;
    //int contestants = pow(2, n);
    vector<int> a, b;
    for(int i=1; i <= (1<<n); i++){ //1 change
        a.push_back(i);
    }

    while(a.size()>2){
        while(!a.empty()){
            vector<int> temp(4);
            temp[0]=a.back();
            a.pop_back();
            temp[1]=a.back();
            a.pop_back();
            temp[2]=a.back();
            a.pop_back();
            temp[3]=a.back();
            a.pop_back();

            int winner = ask(temp);
            b.push_back(winner);
        }
        a = b;
        b.clear();
    }

    if(a.size()==2){
        int x;
        cout<< "? " << a[0] << " " << a[1] <<endl;
        cin>> x;
        if(x==2) a[0]=a[1];
    }

    cout<< "! " << a[0] <<endl;
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
