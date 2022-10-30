#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int getMinCost(int k, vector<int> c)
{
    int minCost = 0;
    int numFlowers = c.size();
    int numEach = 0;
    int curFlower = numFlowers - 1;
    int curFriend = 0;

    sort(c.begin(), c.end());

    for(int i=0; i<numFlowers; ++i){
        minCost += c[curFlower] * (numEach+1);
        ++curFriend;
        if(curFriend == k){
            curFriend = 0;
            ++numEach;
        }
        --curFlower;
    }

    return minCost;
}

int main(){

    int n ,k;
    cin>>n>>k;
    vector<int> c;
    for(int i=0; i<n; i++){
        int price; cin>>price;
        c.push_back(price);
    }

    int minCost = getMinCost(k, c);
    cout<< minCost <<endl;

  return 0;
}
