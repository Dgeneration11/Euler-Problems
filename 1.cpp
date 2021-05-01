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

long long sum(long long x){
    return (x*(x+1))/2;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;

        n--;
        
        long long s3 = 3 * sum(n/3);
        long long s5 = 5 * sum(n/5);
        long long s15 = 15 * sum(n/15);

        cout<<(s3+s5-s15)<<endl;
    }
    return 0;
}

