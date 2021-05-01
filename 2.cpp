#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;

        long long fib = 0;
        long long f1 = 1;
        long long f2 = 2;

        while(f2<=n){
            if(f2%2==0){
                fib = fib + f2;
            }

            long long next = f1 + f2;
            f1 = f2;
            f2 = next;
        }
        cout<<fib<<endl;
    }
    
    return 0;
}