#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

      vector<int> first;
      vector<int> second;
      vector<int> third;

      first.assign (7,100);             // 7 ints with a value of 100

      vector<int>::iterator it;
      it=first.begin()+1;

      second.assign (it,first.end()-1); // the 5 central values of first

      int myints[] = {1776,7,4};
      third.assign (myints,myints+3);   // assigning from array.

      cout<<"first= ";
      for(auto x : first){
        cout<< x << " ";
      }cout<<endl;

      cout<<"second= ";
      for(auto x : second){
        cout<< x << " ";
      }cout<<endl;

      cout<<"third= ";
      for(auto x : third){
        cout<< x << " ";
      }cout<<endl;

      cout << "Size of first: " << int (first.size()) << '\n';
      cout << "Size of second: " << int (second.size()) << '\n';
      cout << "Size of third: " << int (third.size()) << '\n';

  return 0;
}
