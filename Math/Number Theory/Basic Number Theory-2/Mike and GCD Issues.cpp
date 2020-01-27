#include <bits/stdc++.h>
using namespace std;
 
int mp[200001];
int ans[200001],n;
int sp[200001];
void sieve(int n)
{
    long long int i,j;
    float temp=sqrt(n);
    for(i=2;i<=n;i+=2)
        sp[i]=2;
    for(i=1;i<=n;i+=2)
        sp[i]=i;
    for(i=3;i<=temp;i+=2)
        if(sp[i]==i)
            for(j=i*i;j<=n;j+=i)
                if(sp[j]==j)
                  sp[j]=i;
}
void factor(int a[])
{
    int i,j;
    for(j=1;j<=n;j++)
    {
            while(sp[a[j]]!=a[j])
            {
                i=sp[a[j]];
                if(mp[i])
                {
                    if(ans[mp[i]]==-1||(abs(ans[mp[i]]-mp[i])>j-mp[i]))
                        ans[mp[i]]=j;
                    if(ans[j]==-1||(abs(ans[j]-j)>j-mp[i]))
                        ans[j]=mp[i];
                }
                mp[i]=j;
                while(sp[a[j]]==i)
                    a[j]/=sp[a[j]];
            }
            if(a[j]>1)
            {
                i=a[j];
                if(mp[i])
                {
                    
                    if(ans[mp[i]]==-1||(abs(ans[mp[i]]-mp[i])>j-mp[i]))
                        ans[mp[i]]=j;
                    if(ans[j]==-1||(abs(ans[j]-j)>j-mp[i]))
                        ans[j]=mp[i];
                }
                mp[i]=j;
            }
    }
}
 
int main()
{
    int a[200005],i,j;
    cin>>n;
    sieve(200000);
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        ans[i]=-1;
        mp[i]=0;
    }
    factor(a);
   for(i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
