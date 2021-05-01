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

int Palin(int x){
    int result = x*1000;
    result += x/100;
    result += ((x/10)%10) * 10;
    result += (x%10)*100;

    return result;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        int flag=0;
        for(int i=n/1000; i>=100 && !flag; i--){ //6 digit ka number bana ke liye
            auto palindrome = Palin(i);

            if (palindrome >= n){
                continue;
            }
            
            //check divisible 
            for(int j=100; j <=999; j++){
                if(palindrome % j==0){
                    auto other = palindrome / j;
                    if(other>=100 && other<=999){
                        cout<<palindrome<<endl;
                        flag =1;
                        break;
                    }

                }           
            }
        }
    }
}