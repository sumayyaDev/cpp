#include<bits/stdc++.h>
using namespace std;

int ask(vector<int> k)
{
    //cout<<"ask--enter"<<endl;
    cout<< "? " << k[0] << " " << k[2] <<endl;
    int x;
    cin>> x;
    if(x==1){
        cout<< "? " << k[0] << " " << k[3] <<endl;
        cin>> x;
        if(x==1)  return k[0];
        else      return k[3];
    }
    else if(x==2){
        cout<< "? " << k[1] << " " << k[2] <<endl;
        cin>> x;
        if(x==1)  return k[1];
        else      return k[2];
    }
    else{
        cout<< "? " << k[1] << " " << k[3] <<endl;
        cin>> x;
        if(x==1)  return k[1];
        else      return k[3];
    }
     //cout<<"ask--out"<<endl;
}

void solve()
{
    int n; cin>> n;
    vector<int> a, b;
    for(int i=1; i <= (1<<n); i++){
        a.push_back(i);
    }

    while(a.size()>2){
        while(!a.empty()){
            vector<int> k(4);
            k[0]=a.back();
            a.pop_back();
            k[1]=a.back();
            a.pop_back();
            k[2]=a.back();
            a.pop_back();
            k[3]=a.back();
            a.pop_back();

            int win = ask(k);
            b.push_back(win);
        }
        a = b;
        b.clear();
    }

    //cout<< "gonna finish" <<endl;
    if(a.size() == 2){
        cout<< "? " << a[0] << " " << a[1] <<endl;
        int x;
        cin>> x;
        if(x==2)  a[0]=a[1];
    }
    cout<< "! " << a[0] <<endl;
}

int main(){   //int argc, char **argv
    int t; cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
