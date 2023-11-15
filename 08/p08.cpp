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

    for (int i = 0; i < tc; i++)
    {
        int a, b, c;
        int max, mid, min;

        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            max = a;
        }
        else if (b > c)
        {
            max = b;
        }
        else
            max = c;

        if (a < b && a < c)
        {
            min = a;
        }
        else if (b < c)
        {
            min = b;
        }
        else
            min = c;

        if ((max == a && min == b) || (min == a && max == b))
        {
            mid = c;
        }
        else if ((max == b && min == c) || (min == b && max == c))
        {
            mid = a;
        }
        else
            mid = b;

        cout << "Case " << i + 1 << ": " << min << " " << mid << " " << max << endl;
    }
    return 0;
}