#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;

//===========================================================
void feel_the_world()
{   auto sign = [&](int x){if(x>0)return 1;else return -1;};
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
        cin >> it;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
            int cur = vec[i];
			int j = i;
			while (j < n && sign(vec[i]) == sign(vec[j])) {
				cur = max(cur, vec[j]);
				++j;
			}
			sum += cur;
			i = j - 1;
    }
    cout<<sum<<"\n";
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
