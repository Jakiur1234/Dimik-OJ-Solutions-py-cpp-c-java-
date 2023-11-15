#include <iostream>
#include <string>
#include <cmath>
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
        int number, sum, number2;
        vector<int> digits;
        cin>>number;

        number2 = number;

        while(number>0){
            digits.push_back(number%10);
            number = number/10;
        }

        int power = digits.size();
        sum = 0;

        for(int j = 0; j < digits.size(); j++){
            sum+= pow(digits[j],power);
        }

        if(sum == number2){
            cout<<number2<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<number2<<" is not an armstrong number!"<<endl;
        }
    }
    return 0;
}