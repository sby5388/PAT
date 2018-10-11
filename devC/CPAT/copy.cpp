#include<cstdio>  
#include<cmath>  
#include<map>  
#include<string>  
#include<queue>  
#include<cstring>  
#include<algorithm>  
using namespace std;  
const int maxn=1e3+10;  
int n,m,x,y,z;  
char ss[maxn];  
vector<string> s[maxn];  
vector<int> t[maxn];  
map<string,bool> M[maxn];  
int v[maxn];  
  
struct MaxFlow  
{  
    const static int maxe = 2e5 + 10;    //±ßÊý  
    const static int maxp = 1e3 + 10;   //µãÊý  
    const static int INF = 0x7FFFFFFF;  
    struct Edges  
    {  
        int x, f;  
        Edges(){}  
        Edges(int x, int f) :x(x), f(f){}  
    }edge[maxe];  
    int first[maxp], next[maxe], dis[maxp], tot, work[maxp], n;  
  
    void clear(int x){ n = x; tot = 0; for (int i = 0; i <= n; i++) first[i] = -1; }  
  
    void AddEdge(int s, int t, int f)  
    {  
        edge[tot] = Edges(t, 0); next[tot] = first[s]; first[s] = tot++;  
        edge[tot] = Edges(s, f); next[tot] = first[t]; first[t] = tot++;  
    }  
  
    bool bfs(int s, int t)  
    {  
        for (int i = 0; i <= n; i++) dis[i] = -1;  
        queue<int> p;    p.push(s);    dis[s] = 0;  
        while (!p.empty())  
        {  
            int q = p.front();    p.pop();  
            for (int i = first[q]; i != -1; i = next[i])  
            {  
                if (edge[i ^ 1].f&&dis[edge[i].x] == -1)  
                {  
                    p.push(edge[i].x);  
                    dis[edge[i].x] = dis[q] + 1;  
                    if (dis[t] != -1) return true;  
                }  
            }  
        }  
        return false;  
    }  
  
    int dfs(int s, int t, int low)  
    {  
        if (s == t) return low;  
        for (int &i = work[s], x; i >= 0; i = next[i])  
        {  
            if (dis[s] + 1 == dis[edge[i].x] && edge[i ^ 1].f && (x = dfs(edge[i].x, t, min(low, edge[i ^ 1].f))))  
            {  
                edge[i].f += x;    edge[i ^ 1].f -= x;  return x;  
            }  
        }  
        return 0;  
    }  
  
    int dinic(int s, int t)  
    {  
        int maxflow = 0, inc = 0;  
        while (bfs(s, t))  
        {  
            for (int i = 0; i <= n; i++) work[i] = first[i];  
            while (inc = dfs(s, t, INF)) maxflow += inc;  
        }  
        return maxflow;  
    }  
}solve;  
  
int main()  
{  
    while (~scanf("%d%d",&n,&m),n+m)   
    {  
        for (int i=1;i<=n;i++)  
        {  
            scanf("%d%d",&x,&y);  
            t[i].clear();   s[i].clear();  
            while (x--) scanf("%s",ss),s[i].push_back(ss);  
            while (y--) scanf("%d",&z),t[i].push_back(z);  
        }  
        solve.clear(n+m+1);  
        for (int i=1;i<=m;i++)  
        {  
            scanf("%d%d",&v[i],&x); M[i].clear();  
            while (x--) scanf("%s",ss),M[i][ss]=true;  
            solve.AddEdge(i+n,m+n+1,v[i]);  
        }  
        for (int i=1;i<=n;i++)  
        {  
            solve.AddEdge(0,i,1);  
            for (int j=0;j<t[i].size();j++)  
            {  
                for (int k=0;k<s[i].size();k++)  
                {  
                    if (M[t[i][j]][s[i][k]])  
                    {  
                        solve.AddEdge(i,t[i][j]+n,1);  
                        break;  
                    }  
                }  
            }  
        }  
        printf("%d\n",solve.dinic(0,n+m+1));  
    }  
    return 0;  
}  
