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

    cin.ignore();

    for(int i = 0; i <tc ; i++){
        string str;
        char ch;
        getline(cin,str);
        cin>>ch;
        cin.ignore();
        int count = 0;

        for(int t = 0; t < str.length(); t++){
            if(str[t] == ch){
                count++;
            }
        }

        if(count == 0){
            cout<<"'"<<ch<<"' is not present"<<endl;
        }
        else{
            cout<<"Occurrence of '"<<ch<<"' in '"<<str<<"' = "<<count<<endl;
        }
    }
    return 0;
}