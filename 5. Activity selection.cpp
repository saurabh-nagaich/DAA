#include<bits/stdc++.h>
using namespace std;

bool sorted(const pair<int,int>&a, const pair<int,int> &b){
	return(a.second<b.second);
}

vector<pair<int,int>> activity(vector<pair<int,int>>& v, int n){
	vector<pair<int,int>>ans;
	pair<int,int> p=v[0];
	ans.push_back(p);
	for(int i=1; i<n; i++){
		if(p.second<=v[i].first){
			ans.push_back(v[i]);
			p=v[i];
		}
	}
	return ans;
}
int main(){
	int n; cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int s,f;
		cin>>s>>f;
		v.push_back({s,f});
	}
	sort(v.begin(), v.end(), sorted);
	vector<pair<int,int>>ans = activity(v,n);
	for(auto i:ans){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
