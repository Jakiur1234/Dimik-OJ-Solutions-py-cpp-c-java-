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
void solve()
{
}

/**************************************/

/********** Main()  function **********/
int main()
{

#ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
#endif

    int tc;
    scanf("%d", &tc);
    cin.ignore();

    for (int i = 0; i < tc; i++)
    {
        string str;
        getline(cin, str);
        vector<char> vowels;
        vector<char> consonents;

        for (char c : str)
        {
            if(c != ' '){
                if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
                {
                    vowels.push_back(c);
                }
                else
                {
                    consonents.push_back(c);
                }
            }
        }

        for (vector<char>::iterator it = vowels.begin(); it != vowels.end(); it++)
        {
            cout << *it;
        }
        cout<<endl;
        for (vector<char>::iterator its = consonents.begin(); its != consonents.end(); its++)
        {
            cout << *its;
        }
        cout<<endl;
    }
    return 0;
}