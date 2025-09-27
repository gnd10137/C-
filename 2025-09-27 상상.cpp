//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int map_[501][501];
//bool check[501][501];
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//
//int bfs(int x, int y) {
//    queue<pair<int,int>> q;
//    q.push({x, y});
//    check[x][y] = true;
//    int area = 1;
//
//    while(!q.empty()) {
//        int a = q.front().first;
//        int b = q.front().second;
//        q.pop();
//
//        for(int i=0; i<4; i++) {
//            int ax = a + dx[i];
//            int by = b + dy[i];
//            if(ax < 0 || ax >= n || by < 0 || by >= m) continue;
//            
//            if(check[ax][by] || map_[ax][by] == 0) continue;
//
//            q.push({ax, by});
//            check[ax][by] = true;
//            area++;
//        }
//    }
//    return area;
//}
//
//int main() {
//
//    cin >> n >> m;
//    for(int i=0; i<n; i++)
//        for(int j=0; j<m; j++)
//            cin >> map_[i][j];
//
//    int count = 0;
//    int max_area = 0;
//
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            if(map_[i][j] == 1 && !check[i][j]) {
//                int area = bfs(i, j);
//                max_area = max(max_area, area);
//                count++;
//            }
//        }
//    }
//
//    cout << count << "\n" << max_area << "\n";
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int n, m;
int map_[501][501];
int dist[501][501];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x, y});
    dist[x][y] = 1;

    while(!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for(int i=0; i<4; i++) {
            int ax = a + dx[i];
            int by = b + dy[i];

            if(ax < 0 || ax >= n || by < 0 || by >= m) continue;
            if(map_[ax][by] == 0 || dist[ax][by] != 0) continue;

            dist[ax][by] = dist[a][b] + 1;
            q.push({ax, by});
        }
    }

    return dist[n-1][m-1];
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < m; i++)
		{
			map_[i][j] = s[j] - '0';
		}
	}
	cout << bfs(0, 0) << "\n";
}
