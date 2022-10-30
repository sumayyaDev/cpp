#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    string a, b;
    while(t--){
        cin>> a >> b;
        char last_a = a[a.size()-1];
        char last_b = b[b.size()-1];
        //cout<<last_a<<" "<<last_b<<endl;

            int xa=0, xb=0;
            for(int i=0; i<a.size(); i++){
                if(a[i]=='X') xa++;
            }
            for(int i=0; i<b.size(); i++){
                    if(b[i]=='X') xb++;
            }
            if(last_a!=last_b){
               if(last_a<last_b) cout<< ">" << "\n";
               else if(last_a>last_b) cout<< "<" << "\n";
            }
            else{
                if(xa>xb){
                if(last_a=='S') cout<< "<" <<"\n";
                else cout<< ">" <<"\n";
            }
            else if(xa<xb){
                if(last_a=='S') cout<< ">" <<"\n";
                else cout<< "<" <<"\n";
            }
            else cout<< "=" << "\n";
            }

        }




   return 0;
}
