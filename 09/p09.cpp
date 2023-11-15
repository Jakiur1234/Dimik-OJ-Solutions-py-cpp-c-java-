#include <iostream>
#include <cmath>
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
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
/**********************************************/

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
        int num;
        
        cin>>num;

        int p = sqrt(num);
        
        if(p * p == num){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}