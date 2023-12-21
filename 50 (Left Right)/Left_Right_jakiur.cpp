/* Bismillahir Rahmanir Raheem */
#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Make simpler to be faster
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pci pair<char, int>
#define psi pair<string, int>
#define psl pair<string, ll>
#define pss pair<string, string>
#define vpii vector<pii>
#define vpll vector<pll>
#define vpci vector<pci>
#define vpsi vector<psi>
#define vpsl vector<psl>
#define vpss vector<pss>
#define mii map<int, int>
#define mll map<ll, ll>
#define mci map<char, int>
#define msi map<string, int>
#define msl map<string, ll>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define umsl unordered_map<string, ll>
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define SC(a) cin >> (a)
#define SC2(a,b) cin >> (a) >> (b)
#define SC3(a,b,c) cin >> (a) >> (b) >> (c)
#define SC4(a,b,c,d) cin >> (a) >> (b) >> (c) >> (d)
#define SIG() cin.ignore()
#define SS(s) getline(cin, (s))
#define memzero(x) memset(x, 0, sizeof(x))
#define mem(a, b) memset(a, b, sizeof(a))
#define even(x) !(x & 1)
#define odd(x) x & 1
#define MAX(a) *max_element(all(a))
#define MIN(a) *min_element(all(a))

#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define mp make_pair
#define ins insert
#define last back()
#define leng length()

#define br cout<<endl
#define pf(a) cout<<a
#define pfn(a) cout<<a<<endl
#define pfd(d,a) cout<<setprecision(d)<<a
#define pfdn(d,a) cout<<setprecision(d)<<a<<endl
#define pfs(s,a) cout<<s<<a
#define pfsn(s,a) cout<<s<<a<<endl
#define pfsd(s,d,a) cout<<s<<setprecision(d)<<a
#define pfsdn(s,d,a) cout<<s<<setprecision(d)<<a<<endl

#define PI 3.1415926535897932384626433832795
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// Find the max
#define max3(a, b, c) max(max(a, b), c)
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define min3(a, b, c) min(min(a, b), c)
#define min4(a, b, c, d) min(min(a, b), min(c, d))

// RNG
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define SHUF(v) shuffle(all(v), RNG);
// Use mt19937_64 for 64 bit random numbers.

void solve() {
    string str;
    SS(str);
    for(int i =0; i<str.length(); i++){
        if(str[i] == 'L'){
            str[i] = str[i-1];
        }
        else if(str[i] == 'R'){
            str[i] = str[i+1];
        }
    }
    pfn(str);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    SIG();
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}