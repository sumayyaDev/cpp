#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n, width; //n-->no. of rectangles, width-->width of the given box to fit in
        cin>> n >> width;

        multiset<int> mst;
        int w;
        for(int i=0; i<n; i++){
            cin>> w;
            mst.insert(w); //width of all n no. of rectangles
        }
        /*for(auto t : mst){
        cout << t << " ";
        }*/

        int height = 1; //each box have a height of 1
        int space_left = width;
        //cout << "\n" << "space_left= " <<space_left<<endl;

        while(!mst.empty()){
            //cout<<"upper= " <<*mst.upper_bound(space_left)<<endl;

            auto it = mst.upper_bound(space_left);

            //cout<< "1/ it= " <<*it<<endl;
            //cout<<"mst.begin()= " << *mst.begin() <<endl;

            if(it != mst.begin()){
                it--;
                //cout<<"2/ it= "<<*it<<endl;
                int value = *it;
                //cout<<"value= "<<value<<endl;
                //cout<<"before--space_left= "<<space_left<<endl;
                space_left -= value;
                //cout<<"after--space_left= "<<space_left<<endl;
                //cout<<"erase it= "<<*it<<endl;
                mst.erase(it);

                /*for(auto t : mst){
                cout << t << " ";
                 }cout<<endl;*/

            }else{
                space_left = width;
                //cout<<"else--space_left= "<<space_left<<endl;
                height++;
            }
        }
        cout<< height << endl;
    }

  return 0;
}
