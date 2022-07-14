#include<iostream>
#include<cstdio>
using namespace std;
int main(){

   string s1, s2;
   cin>>s1>>s2;
   cout<<s1.size()<<" "<<s2.size()<<endl;
   string s = s1+s2;
   cout<<s<<endl;
   char f1 = s1[0];
   char f2 = s2[0];
   s1[0]= f2;
   s2[0]= f1;
   cout<<s1 << " " <<s2<<endl;

   return 0;
}
