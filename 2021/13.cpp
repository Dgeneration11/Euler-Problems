#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;

    int Dig = 50+10;
    vector<unsigned int> sum(Dig, 0);

    while(n--){
        string str;
        cin>>str;

        vector<unsigned int> add;
        for(auto i=str.rbegin(); i!=str.rend(); i++){
            add.push_back(*i - '0');
        }
        add.resize(sum.size(), 0);


        for(unsigned int i=0; i<add.size(); i++){
            sum[i]+=add[i];

            if(sum[i]>=10){
                sum[i+1]++;
                sum[i] = sum[i] - 10;
            }
        }
    }
    

    auto i = sum.rbegin();
    while(*i == 0)  i++;

    unsigned int numDigits = 10;
    while(numDigits--)
        cout<<*i++;

    return 0;
}
