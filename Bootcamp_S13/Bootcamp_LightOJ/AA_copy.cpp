#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    for(int t=1; t<=testcase; t++){
        int n, P, Q;
        cin >> n>> P>> Q;

        int sumOfWeight= 0, counter=0;
        for(int i = 1; i <= n; i++ ){
            int x;
            cin >> x;

            if(counter + 1 <= P && sumOfWeight + x <= Q){ // counter+1<=P ensures that number of eggs never exceeds P. sumOfWeight+x<=Q ensures that total weight of eggs never exceeds Q
              sumOfWeight += x;                           // With the sumOfWeight variable, we are keeping track of the total weight of the eggs
              counter++;                                  // counter variable keeps track of the number of eggs
            }

        }
        cout << "Case " << t << ": " << counter << endl;
    }
}
