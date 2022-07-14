#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
    vector<int> div;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
            if (n / i != i) {
                div.push_back(n / i);
            }
        }
    }

    sort(div.begin(), div.end());
    return div;
}


int main(){

    int n, t;

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        vector<int> divisor;
        divisor = divisors(n);
        int countdiv=0;
        for(int j=0; j<divisor.size(); j++){
            if(divisor[j]%2 == 0){
                countdiv++;
            }
        }
        cout<<countdiv<<endl;
    }

  return 0;
}
