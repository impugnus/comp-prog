#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 505

using namespace std;

vector<int> adjlist[MAXN];
int age[MAXN], pos_of_worker[MAXN], age_of_youngest_boss[MAXN], direct_bosses_of_position[MAXN], counter[MAXN], n,m,inst;

void bfs(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		age_of_youngest_boss[i]=0x7f7f7f7f;
		if(direct_bosses_of_position[i]==0) q.push(i);
		else counter[i]=0;
	}
	
	while(q.size()>0){
		int curr = q.front();
		q.pop();
		
		for(int next : adjlist[curr]){
			age_of_youngest_boss[next] = min(age_of_youngest_boss[next], min(age_of_youngest_boss[curr], age[curr]));
			
			counter[next]++;
			
			if(counter[next] == direct_bosses_of_position[next]) q.push(next);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m >> inst;
	
	for(int i = 1; i <= n; i++){
		cin >> age[i];
		pos_of_worker[i]= i;
	}
	
	for(int i =0 ; i < m; i++){
		int a,b; cin >> a >> b;
		adjlist[a].pb(b);
		direct_bosses_of_position[b]++;
	}
	
	bool update = true;
	
	for(int i = 0; i < inst; i++){
		char op; int a, b;
		
		cin >> op;
		if(op=='T'){
			cin >>a >> b;
			swap(age[pos_of_worker[a]], age[pos_of_worker[b]]);
			swap(pos_of_worker[a], pos_of_worker[b]);
			update=true;
		} else if(op=='P'){
			cin >> a;
			if(update){
				bfs();
				update=false;
			}
			
			if(direct_bosses_of_position[pos_of_worker[a]] == 0) cout << "*\n";
			else cout << age_of_youngest_boss[pos_of_worker[a]] << "\n";
		}
	}
	

	return 0;
}
