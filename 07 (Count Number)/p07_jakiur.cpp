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
        string in;
        int words = 1;
        cin.ignore();
        getline(cin,in);
        for(int j=0;j < in.length(); j++){
            //in[j] == ' ' use to find the space
            //in[j+1] != ' ' use to find if there multiple space
            //j != in.length()-1 use to find is the index is last index or not
            if(in[j]==' ' && in[j+1] != ' ' && j != in.length()-1){
                words++;
            }
        }

        cout<<words<<endl;
    }
    return 0;
}