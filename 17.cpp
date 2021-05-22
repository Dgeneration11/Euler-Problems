#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

string convert(ll x){
    string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
            "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if(x>=0 && x<20){
        return ones[x];
    }
    //2-digt names
    if(x>=20 && x<=99){
        auto unit = x%10;
        auto tenth = x/10;

        if(x%10==0){
            return tens[tenth];
        }
        return tens[tenth]+" "+ones[unit];
    }
    //3-digit names
    if(x>=100 && x<=999){
        auto unit = x%100;
        auto tenth = x/100;
        if(x%100==0){
            return ones[tenth] + " Hundred";
        }
        return ones[tenth] + " Hundred " + convert(unit);
    }
    //4-6 digit names
    if(x>=1000 && x<=999999){
        auto unit = x%1000;
        auto tenth = x/1000;
        if(x%1000==0){
            return convert(tenth)+" Thousand";
        }
        return convert(tenth) + " Thousand " + convert(unit);
    }
    //7-9 digit name
    if(x>=1000000 && x<=999999999){
        auto unit = x%1000000;
        auto tenth = x/1000000;
        if(x%1000000==0){
            return convert(tenth)+" Million"; 
        }
        return convert(tenth) + " Million " + convert(unit); 
    }
    if()
} 

int main() {
    int t;
    cin>>t;
    while(t--){
        unsigned ll x;
        cin>>x;
        cout<<convert(x)<<endl;
    }
    return 0;
}
