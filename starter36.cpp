#include<bits/stdc++.h>
using namespace std;

int main(void) {
	int t,N,R,temp;
	cin>>t;
	while(t--)
	{
	    cin>>N>>R;
	    vector< pair<int, pair<int,int>> > p;
	    for(int i=0;i<N;i++)
	    {
	        cin>>temp;
	        p.push_back(make_pair(0,make_pair(temp,0)));
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>p[i].second.second;
	        p[i].first=p[i].second.first-p[i].second.second;
	    }
	    sort(p.begin(),p.end());

        for(int i=0;i<N;i++)
	    {
	        cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<<endl;
	    }
	    p.clear();
	    cout<<endl;

	}

	return 0;
}
