#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
    int t, n;

    vector<int> arr(3001, -1);

    for(int a = 3; a<3000; a++){
        for(int b = a+1; b<3000-a; b++){
            int c2 = a*a + b*b;
            int c = sqrt(c2);
            if(c*c != c2) continue;

            if(a+b+c > 3000){
                break;
            }
            if(arr[a+b+c] < a*b*c){
                arr[a+b+c] = a*b*c;
            }
        }
    }
    
    cin>>t;
    while(t--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}


