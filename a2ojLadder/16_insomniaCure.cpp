/**
 *      file    :  16_insomniaCure.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 10 14:02:42 
 *      lastMod :  Thu 10 Jun 14:02:42 2021 
 **/

//#define LOCAL 1
#include						<bits/stdc++.h>
#ifdef LOCAL
#include						 "/Users/r00tdk/.vim/headers/pprint.hpp"
#else
#define trace 					//
#endif

#define ar array
#define ll						long long
#define sz(x)         (int)(x).size()
#define pii						pair<int, int>
#define pli						pair<ll, int>
#define pil						pair<int, ll>
#define pll						pair<ll, ll>
#define vi						vector<int>
#define vll						vector<ll>
#define vb						vector<bool>
#define vd						vector<double>
#define vs						vector<string>
#define ff						first
#define ss						second
#define pb						push_back
#define eb						emplace_back
#define ppb						pop_back
#define pf						push_front
#define ppf						pop_front
#define vpii					vector<pii>
#define umap					unordered_map
#define all(x)			 	x.begin(),x.end()
#define clr(a,b)			memset(a,b,sizeof a)
#define fr(i, n)			for(int i=0; i<n;++i)
#define fr1(i, n)			for(int i=1; i<=n; ++i)
#define rfr(i, n)			for(int i=n-1; i>=0; --i)
#define precise(x)		cout<<fixed<<setprecision(x)
typedef double				f80;

using namespace std;

#ifdef PBDS
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#endif

template <typename Arg1>
void prn(Arg1&& arg1)
{ cout << arg1 << "\n";}

template <typename Arg1, typename... Args>
void prn(Arg1&& arg1, Args&&... args)
{ cout << arg1 << " "; prn(args...); }

template <typename Arg1>
void prs(Arg1&& arg1)
{ cout << arg1 << " ";}

template <typename Arg1, typename... Args>
void prs(Arg1&& arg1, Args&&... args)
{ cout << arg1 << " "; prs(args...); }

template <typename Arg1>
void read(Arg1&& arg1)
{ cin >> arg1; }

template <typename Arg1, typename... Args>
void read(Arg1&& arg1, Args&&... args)
{ cin >> arg1; read(args...); }

template <typename A, typename B>
string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string& s) {
  return '"' + s + '"';
}

string to_string(const char* s) {
  return to_string((string) s);
}

string to_string(bool b) {
  return (b ? "true" : "false");
}

string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}

template <size_t N>
string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) {
    res += static_cast<char>('0' + v[i]);
  }
  return res;
}

template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

const long long MAX = (long long) 360 * (long long) 1e9;
const long double pi = acos((long double) -1.0);
const long double q = pi / MAX;

inline void solve2();
int main() {
#ifdef LOCAL
  freopen("in.txt" , "r" , stdin);
  //freopen("out.txt" , "w" , stdout);
#else	
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#endif
  int t = 1;
  fr1 (tc, t) {
    solve2();
  }
  return 0;
}

inline int get_element(int i, tuple<int, int, int, int>& t) {
  switch(i) {
    case 0: return get<0>(t);
    case 1: return get<1>(t);
    case 2: return get<2>(t);
    case 3: return get<3>(t);
  }
  return 0;
}
inline void solve1() {
  int k, l, m, n, d = 0;
  int res = 0;
  
  read(k, l, m, n, d);
  vector<int>arr(d+1); // for maintaining counter 
  tuple<int, int, int,int>t = make_tuple(k, l, m, n);
  for(int i =1; i <= d; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (arr[i] != 0) break;
      if (i % get_element(j,t) == 0) {
        res+=1;
        arr[i] = 1;
      }
    }
  }
  cout << res;
}

inline void solve2() {
  int d = 0;
  int res = 0;
  
  int in[4] = {0};
  for (int i = 0; i < 4; ++i)
    read(in[i]);

  read(d);
  vector<int>arr(d+1, 0); // for maintaining counter 
  for(int i =1; i <= d; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (i % in[j] == 0) {
        res+=1;
        arr[i] = 1;
        break;
      }
    }
  }
  cout << res;
}
