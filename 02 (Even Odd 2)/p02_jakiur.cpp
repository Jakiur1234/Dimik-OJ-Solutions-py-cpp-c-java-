#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007



/******** User-defined Function *******/
void solve(){

}

/**************************************/

/********** Main()  function **********/
int main()
{

    #ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int tc;
    scanf("%d",&tc);

    for(int i = 0; i <tc ; i++){
        string s;
        int lastNumber;
        //get and string as input
        cin>>s;

        //convert string to stringstream
        stringstream x;

        //get the last number of the string
        x<<s[s.length()-1];

        //convert the string into integer
        x>>lastNumber;
        /*
        Let's clear with an example.
        If you have a number 345345455. If 
        the number last digit is divide by 2 then it is even.
        Otherwise it is odd the number 345345455 is odd because
        5 is not divisible by 2. But the number 3242352345324534
        is even beacuse the last digit 4 is divisible by 2.
        */

       //now if the integer is divide by 2 then the whole number will be even otherwise odd
        if(lastNumber%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}