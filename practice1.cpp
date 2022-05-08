#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,N,L,R,Q,total;
unsigned long l,h,u,X;
cin>>t;
while(t--)
{
    cin>>N;
    int* p=new unsigned long[N];
    for(int i=0;i<N;i++)cin>>p[i];
    cin>>Q;
    while(Q--)
    {
        total=0;
        cin>>L>>R>>X;
        if(X==0)l=0,h=0;
        else
        {
            u=log2(X);
            l=pow(2,u);
            h=pow(2,u+1)-1;
        }
        for(int i=L;i<=R;i++)
            if(!(p[i]>=l&&p[i]<=h))total++;
        cout<<total<<endl;
    }
    delete[] p;
}

}
