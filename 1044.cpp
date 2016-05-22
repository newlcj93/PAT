#include <cstdio>
#include <algorithm>
using namespace std;
//#define LOCAL
const int maxn=1e5+5;
typedef long long ll;
ll n,m,sum[maxn],ans;
int a[maxn];
int main(){
#ifdef LOCAL
    freopen("/Users/jy/input.txt","r",stdin);
#endif
    scanf("%d%d",&n,&m);
    sum[0]=0;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]),sum[i]=sum[i-1]+a[i];
    ans=sum[n];
    for(int i=0,j=1;i<=n;i++){
        while(sum[j]-sum[i]<m && j<=n) j++;
        if(sum[j]-sum[i]>=m) ans=min(ans,sum[j]-sum[i]);
    }
    for(int i=0,j=1;i<=n;i++){
        while(sum[j]-sum[i]<ans && j<=n) j++;
        if(sum[j]-sum[i]==ans) printf("%d-%d\n",i+1,j);
    }
    return 0;
}
