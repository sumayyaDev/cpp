#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t; int cs=1;
    int n, m;
    string s;
    int D, K;

    while(t--){
        cin>> n >> m; //n->size of array, m->no. of commands
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        while(m--){
            cin>> s;
            if(s=="S"){
                cin>> D;
               for(int i=0; i<n; i++){
                   arr[i] = arr[i]+D;
               }

            }
            else if(s=="M"){
                cin>> D;
               for(int i=0; i<n; i++){
                   arr[i] = arr[i]*D;
               }

            }
            else if(s=="D"){
                cin>> K;
               for(int i=0; i<n; i++){
                   arr[i] = arr[i]/K;
               }

            }
            else if(s=="P"){
                int y, z;
                cin>> y >> z;
                swap(arr[y], arr[z]);

            }
            else if(s=="R"){
                int j=0;
                int arr2[n];
                for(int i=n-1; i>=0; i--){
                    arr2[j++]=arr[i];
                }
                for(int i=0; i<n; i++){
                    arr[i]=arr2[i];
                }
            }
        }
        cout<< "Case " << cs++ << ":\n";
        for(auto l : arr){
            cout<< l << " ";
        }  cout<<endl;
    }

   return 0;
}
