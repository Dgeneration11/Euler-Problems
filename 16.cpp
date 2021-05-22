#include<bits/stdc++.h>
using namespace std;

typedef vector<int> numbers;

int main(){

    vector<numbers> temp;
    temp.push_back({1}); // adding 2^0 = 1

    int t;
    cin>>t;
    while(t--){
        unsigned int n;
        cin>>n;

        for(unsigned int c = temp.size(); c<=n; c++){
            auto expo = temp.back();
            unsigned int carry = 0;

            for(auto i : expo){
                i = i*2 + carry;  //2 times all....

                if(i>=10){ //normal maths if it is 2 digit, we will carry one 
                    i = i - 10;
                    carry = 1;
                }
                else{
                    carry = 0;
                }
            }

            if(carry != 0){  //if some carry left 
                expo.push_back(carry);
            }
            
            temp.push_back(expo); //put the result
        }
        
        int sum=0;
        for(auto i: temp[n]){
            sum = sum + i;
        }
        cout<<sum<<endl;

    }
    return 0;
}