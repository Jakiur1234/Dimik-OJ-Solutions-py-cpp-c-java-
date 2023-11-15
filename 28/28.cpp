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
        int count=0,size;
        cin>>size;
        int *arr = (int *) malloc(sizeof(int) * size);
        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        count=0;
        for(int i=1;i<=size-1;i++){
            if(arr[i] < arr[i-1]){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=1;i<=size-1;i++){
                if(arr[i] > arr[i-1]){
                    count--;
                    break;
                }
            }
            if(count==0)
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}