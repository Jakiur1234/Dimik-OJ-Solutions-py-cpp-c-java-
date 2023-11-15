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
bool isprime(int a){
    if(a == 1 || a==0){
        return false;
    }
    int limit = sqrt(a+1);
    for(int i =2; i <= limit; i++){
        if(a % i == 0){
            return false;
        }
    }

    return true;
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
        int start,end,count = 0;
        
        cin>>start>>end;

        for(int j = start; j <= end; j++){
            if(isprime(j)){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}