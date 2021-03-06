#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int t=1;
    unsigned int n=100;
    //cin>>t;

    while(t--){
        
        cin>>n;

        vector<unsigned int> last(1);
        cin>>last[0];

        for(unsigned int row=1; row<n;row++){
            unsigned int nx = row + 1;
            vector<unsigned int> current;
            for(unsigned int col =0; col<nx; col++){
                unsigned int x;
                cin>>x;

                unsigned int left_parent = 0;
                if(col >0){ //if left parent is available
                    left_parent = last[col-1];
                }

                unsigned int right_parent = 0;
                if(col < last.size()){ //only if right parent is available
                    right_parent = last[col];
                }

                //adding larger parent to current input
                unsigned int sum = x + max(left_parent, right_parent);
                current.push_back(sum);
            }

            //Now this row is finished, it becames the root now.

            last = current;
        }
        cout<<*max_element(last.begin(), last.end())<<endl;
    }
    return 0;
}
