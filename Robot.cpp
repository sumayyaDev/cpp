#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int x1, y1, x2, y2, x, y;
    cin>>x1>>y1>>x2>>y2;
    x=abs(x2-x1);
    y=abs(y2-y1);
    int dis = min(x,y);
    int finalDis = dis + abs(x-y);
    cout<<finalDis<<endl;


  return 0;
}
