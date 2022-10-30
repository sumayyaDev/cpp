#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;  //number of test cases
    cin>>T;
    for(int case_number = 1 ; case_number <= T ; case_number++ )
    {
        cout<<"Case "<<case_number<<":\n";

        int n,m,x;
        string query;
        deque<int>d; //our double ended query.

        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
            cin>>query;

            if( ( query == "pushLeft" || query == "pushRight" ) && ( d.size()>=n ) ) //checking if the double ended queue is full.
            {
                cin>>x;
                cout<<"The queue is full\n";
            }
            else if( (query == "popLeft" || query == "popRight" ) && d.size() == 0 ) //checking if the double ended queue is empty.
            {
                cout<<"The queue is empty\n";
            }
            else if( query == "pushLeft" )
            {
                cin>>x;
                d.push_front(x);
                cout<<"Pushed in left: "<<x<<'\n';
            }
            else if( query == "pushRight" )
            {
                cin>>x;
                d.push_back(x);
                cout<<"Pushed in right: "<<x<<'\n';
            }
            else if( query == "popLeft" )
            {
                x=d.front();
                d.pop_front();
                cout<<"Popped from left: "<<x<<'\n';
            }
            else if( query == "popRight" )
            {
                x = d.back();
                d.pop_back();
                cout<<"Popped from right: "<<x<<'\n';
            }
        }
    }
    return 0;
}
