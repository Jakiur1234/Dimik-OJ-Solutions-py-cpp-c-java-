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
        int a;

        //input the number a
        cin>>a;

        //start a loop from 0 to a-1. So the loop will run a times
        for(int i=0;i<a;i++){
            //this inner loop also run a times so the input will be like this
            /*
            ********(a times)
            ********
            ********
            ********
            (a times)
            */
            for(int j=0; j < a ; j++){
                cout<<"*";
            }
            cout<<endl;
        }

        cout<<endl;
    }
    return 0;
}