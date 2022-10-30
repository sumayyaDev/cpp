#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pi acos(-1)

void solve()
{
    int n; cin>> n;
    vector<ll> heights(n);
    for(int i=0; i<n; i++){
        cin>> heights[i];
    }

    vector<ll> left(n), right(n);
    stack<ll> mystack;
    //For determining left side limit
    for(int i=0; i<n; i++){
        if(mystack.empty()){
            left[i]=0;
            mystack.push(i);
        }else{
            while(!mystack.empty() && heights[mystack.top()]>=heights[i]){
                mystack.pop(); //finding limit on left side
            }
            left[i]=mystack.empty()? 0 : mystack.top()+1;
            mystack.push(i);
        }
    }
    //clearing the stack to work with right limit
    while(!mystack.empty()){
        mystack.pop();
    }

    //Finding right limits, so traverse it from the last
    for(int i=n-1; i>=0; i--){
        if(mystack.empty()){
            right[i]=n-1;
            mystack.push(i);
        }else{
            while(!mystack.empty() && heights[mystack.top()]>=heights[i]){
                mystack.pop();
            }
            right[i]=mystack.empty()? n-1 : mystack.top()-1;
            mystack.push(i);
        }
    }

    //calculating area
    ll max_area = 0;
    for(int i=0; i<n; i++){
        max_area = max(max_area, heights[i]*(right[i]-left[i]+1));
    }

    cout<< max_area <<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        cout<< "Case " << cs++ << ": ";
        solve();
    }

   return 0;
}

