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
    int grid[20][20];

    int best = 0;
    for(int i = 0;i < 20;i++)
    	for(int j = 0;j < 20;j++)
    		cin >> grid[j][i];
    
    for(int i = 0;i < 20;i++){
    	for(int j = 0;j < 20;j++){
            // right
            if(j+3 < 20){
                int cur = grid[j][i] * grid[j+1][i] * grid[j+2][i] * grid[j+3][i];
                if(cur > best){
                    best = cur;
                }
            }
            // down
            if(i+3< 20){
                int cur = grid[j][i] * grid[j][i+1] * grid[j][i+2] * grid[j][i+3];
                if(cur > best){
                    best = cur;
                }
            }
            //right bottom diag.
            if(j+3 < 20 && i+3<20){
                int cur = grid[j][i] * grid[j+1][i+1] * grid[j+2][i+2] * grid[j+3][i+3];
                if(cur > best){
                    best = cur;
                }
            }
            //left bottom diag.
            if(j+3<20 && i>=3){
                int cur = grid[j][i] * grid[j+1][i-1] * grid[j+2][i-2] * grid[j+3][i-3];
                if(cur > best){
                    best = cur;
                }
            }
    	}
    }
    cout<<best<<endl;

    return 0;
}