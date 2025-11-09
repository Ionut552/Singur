#include <bits/stdc++.h>
#define NMAX 1005
#define ll long long

std::ifstream f("singur.in");
std::ofstream g("singur.out");

using namespace std;

int n;
int a[NMAX];
ll ans;

int main() {
    f >> n;
    for(int i=1;i<=n;i++)f >> a[i], ans+=a[i];
    sort(a+1, a+n+1);
    for(int i=1;i<=n;i++)g << a[i] << " ";
}
