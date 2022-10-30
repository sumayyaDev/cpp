#include<bits/stdc++.h>
using namespace std;

/*long long int factorial[25];
void generate_Factorial()
{
    long long int curr_value=1;
    factorial[0]=1;

    for(long long int i=1; i<=20; i++){
        factorial[i]= i*curr_value;
        curr_value = factorial[i];
    }
}*/

int main(){
    int t; cin>> t; int cs=1;
    long long int factorial[25];
    long long int curr_value=1;
    factorial[0]=1;

    for(long long int i=1; i<=20; i++){
        factorial[i]= i*curr_value;
        curr_value = factorial[i];
    }

    while(t--){
        long long int n;
        cin>> n;
        vector<int> indx_num;
        for(int i=20; i>=0; i--){
            if(n>=factorial[i]){
                n -= factorial[i];
                indx_num.push_back(i);//pushed in descending order
            }
        }
        cout<< "Case " << cs++ << ": ";
        if(n==0){
            for(int i=indx_num.size()-1; i>0; i--){ //back to ascending order
                cout<< indx_num[i] << "!+";
            }
            cout<< indx_num[0] << "!" <<endl;
        }
        else{
            cout<< "impossible" <<endl;
        }

    }

   return 0;
}
