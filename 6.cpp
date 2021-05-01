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
        long long n;
        cin >> n;

        long long sum = 0;
        long long sumSq = 0;

        for(long long i=0; i<=n; i++){
            sum += i;
            sumSq += i*i;
        }

        long long sqSum = sum * sum;
        cout<< (sqSum - sumSq)<<endl;

    }
    return 0;
}
