#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

   string s;
   cin>>s;
   int num = 0;
   for(int i=0; i<4; i++){
    if(s[i] == '+') num++;
    if(s[i] == '-') num--;
   }

   cout << num <<endl;

  return 0;
}
