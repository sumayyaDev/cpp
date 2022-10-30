#include<bits/stdc++.h>
using namespace std;

struct student{
   char name[25];
   int l, w, h;
   int volm;

} c[1005]; //need to create keys

int main(){
    int t; cin>> t; int cs=1;
    while(t--){
        int sum=0;
        int n; cin>> n; //no. of students
        for(int i=0; i<n; i++){
            cin>> c[i].name >> c[i].l >> c[i].w >> c[i].h;
            c[i].volm = c[i].l * c[i].w * c[i].h;
            sum += c[i].volm;
        }
        int averag_volm = sum/n;
        char theif[25], victim[25];
        int cnt=0;
        for(int i=0; i<n; i++){
            if(c[i].volm==averag_volm){
                cnt++;
            }
            else if(c[i].volm>averag_volm){
                strcpy(theif, c[i].name); //got the thief
            }
            else if(c[i].volm<averag_volm){
                strcpy(victim, c[i].name);
            }
        }

        if(cnt==n){
            cout<< "Case " << cs++ << ": no thief" <<endl;
        }
        else{
            cout<< "Case " << cs++ << ": " << theif << " took chocolate from " << victim <<endl;
        }

    }

   return 0;
}
