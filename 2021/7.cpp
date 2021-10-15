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

bool primeCalc(long long n){   

    for(int i=2; i<=n/2; i++){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
long long calc(int n){
    long long  a = 2;
    long long k = 0;

    int flag=1;
    while(a<n){
        flag=1;
        k = k + 6;

        if(primeCalc(k - 1)){
            flag = 0;
            a++;
        }
        if(primeCalc(k + 1)){
            a++;
        }
    }
    if(a>n || flag==0){
        return k-1;
    }
    else if(a==n){
        return k+1;
    }
    else return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(n==1){
            cout<<"2"<<endl;
        }
        else if(n==2){
            cout<<"3"<<endl;
        }
        else{
            long long b = calc(n);
            cout<<b<<endl;
        }
    }
    return 0;
}