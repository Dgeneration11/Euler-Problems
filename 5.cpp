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

long long gcd(long long a, long long b){
    while(a!=0){
        long long c = a;
        a = b%a;
        b=c;
    }
    return b;
}

long long lcm(long long a, long long b){
    return a * b / gcd(a,b);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        long long result = 1;
        for(int i =2; i<=n; i++){
            result = lcm(result, i);
        }

        cout<<result<<endl;
    }
    return 0;
}

