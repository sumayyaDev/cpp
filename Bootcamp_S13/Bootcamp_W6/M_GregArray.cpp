#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;
int arr_t[MAX];
int flag[MAX];
struct operation
{
    int x, y, val;
};
operation op[MAX];

int main(){
    int n, m, k;
    cin>> n >> m >> k;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>> a[i];
    }

    for(int i=1; i<=m; i++){
        cin>> op[i].x >> op[i].y >> op[i].val;
    }
    for(int i=1; i<=k; i++){
        int x, y;
        cin>> x >> y;
        arr_t[x]++;
        arr_t[y+1]++;
    }
    int sum=0;
    for(int i=1; i<=m; i++){
        sum += arr_t[i];
        op[i].val *= sum;
    }

    for(int i=1; i<=m; i++){
        flag[op[i].x] += op[i].val;
        flag[op[i].y+1] -= op[i].val;
    }
    sum=0;
    for(int i=1; i<=n; i++){
        sum += flag[i];
        cout<< a[i]+sum << " ";
    } cout<<endl;

    return 0;
}
