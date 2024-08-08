#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define int long long
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; 
    cin>>t; 

    while(t--){
        int n, m; 
        cin>>n>>m; 
        string s, c;
        set <int> v; 
        cin>>s; 
        for(int i = 0; i < m; i++) {
            int x; cin>>x;
            v.insert(x);
        } 
        cin>>c; 
        
        sorta(c); 
        int idx = 0;
        for(auto it : v){
            s[it - 1] = c[idx];
            idx++;
        }

        cout << s << endl;

    }
    return 0; 
}