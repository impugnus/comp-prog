#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

typedef pair<int ,int> pii;

struct Event{
	int y1, y2;
	int x, type;
	
	Event(int _x, int _y1, int _y2, int _type):
		x(_x), y1(_y1), y2(_y2), type(_type) {}
		
	bool operator < (Event& a) const {
		if(x!=a.x) return x<a.x;
		
		return type<a.type;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	
	vector<Event> sweep;
	for(int i =0 ; i < n; i++){
		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
		sweep.pb(Event(x1,y1,y2,1));
		sweep.pb(Event(x2,y1,y2,2));
	}
	
	sort(sweep.begin(), sweep.end());
		
	set<pii> intervals;
	int ans = 0;
	
	for(int i =0 ; i < (int)sweep.size(); i++){
		int type = sweep[i].type;
		int L = sweep[i].y1, R = sweep[i].y2;
		 
		if(type==1) intervals.insert({L, R});
		else {
			if(intervals.erase({L, R})){
				ans++;
			
				if(!intervals.empty()){
					vector<set<pii>::iterator> del;
					set<pii>::iterator it = intervals.lower_bound({L, 0});
					while(it!=intervals.end() && it->first>=L && it->second<=R) del.pb(it++);
					for(int j = 0; j < (int)del.size(); j++) intervals.erase(del[j]);
				}
				
			}
		}
	}
	
	cout << ans << '\n';

	return 0;
}
