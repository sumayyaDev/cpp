#include<bits/stdc++.h>
using namespace std;

const int N=1e5 + 5;
int n, ans[N];

void recurse(int r)
{
    if(r<0)  return;
    int s = sqrt(2*r);
    //cout<< "\ni-s=" << s <<" ";
    s *= s;
    //cout<< "ii-s=" << s <<" ";
    int l = s-r;
     //cout<< "l=" << l <<" ";
    recurse(l-1);
    //cout<<"\n****"<<endl;
    for(; l<=r; l++, r--){
        //cout<< "\nloop-->l=" << l << "  r=" << r <<endl;
        ans[l]=r;
        ans[r]=l;
        //cout<< "ans[" << l << "]=" << ans[l] <<endl;
        //cout<< "ans[" << r << "]=" << ans[r] <<endl;
    }
}

int main(){
    int t; cin>> t;
    while(t--){
       cin>> n;
       recurse(n-1);

       for(int i=0; i<n; i++){
          cout<< ans[i] << " ";
       } cout<<endl;
    }

    return 0;
}
