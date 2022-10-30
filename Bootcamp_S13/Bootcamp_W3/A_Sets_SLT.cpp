#include<bits/stdc++.h>
using namespace std;
int main(){

    int q;
    cin >> q;
    set<int> s;
    for(int i=0; i<q; i++){
        int y, x;
        cin >> y;
        switch(y){

            case 1:
                cin >> x;
                s.insert(x);
                break;
            case 2:
                cin >> x;
                s.erase(x);
                break;
            case 3:
                cin >> x;
                if(s.find(x) == s.end())
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
                break;
        }
    }


  return 0;
}

