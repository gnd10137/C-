//#include <cstdio>
//int n;
//int arr[10];
//int used[10];
//
//void dfs(int depth)
//{
//    if (depth == n)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            printf("%d", arr[i]);
//            if (i < n - 1) printf(" ");
//        }
//        printf("\n");
//        return;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (!used[i])
//        {
//            used[i] = 1;
//            arr[depth] = i;
//            dfs(depth + 1);
//            used[i] = 0;
//        }
//    }
//}
//
//int main()
//{
//    scanf("%d", &n);
//    dfs(0);
//    return 0;
//}

//#include <cstdio>
//int n, m;
//int arr[10];
//int used[10];
//
//void dfs(int depth)
//{
//	if (depth == m)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			printf("%d", arr[i]);
//			if (i < m - 1) printf(" ");
//		}
//		printf("\n");
//		return;
//	}	
//	for (int i = 1; i <= n; i++)
//	{
//		if (!used[i])
//		{
//			used[i] = 1;
//			arr[depth] = i;
//			dfs(depth + 1);
//			used[i] = 0;
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d", &n, &m);
//	dfs(0);
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n, s;
//int a[20];
//int cnt;
//
//void dfs(int idx, int sum) {
//    if (idx == n) {
//        if (sum == s) cnt++;
//        return;
//    }
//    dfs(idx + 1, sum + a[idx]);
//    dfs(idx + 1, sum);
//}
//
//int main() {
//    cin >> n >> s;
//    for (int i = 0; i < n; i++) cin >> a[i];
//    dfs(0, 0);
//    if (s == 0) cnt--; 
//    cout << cnt;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int r, c;
//char board[20][20];
//int check[26];
//int ans = 0;
//int dx[] = {0, 0, 1, -1};
//int dy[] = {1, -1, 0, 0};
//
//void dfs(int x, int y, int depth) {
//    ans = max(ans, depth);
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
//        int idx = board[nx][ny] - 'A';
//        if (!check[idx]) {
//            check[idx] = 1;
//            dfs(nx, ny, depth + 1);
//            check[idx] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> r >> c;
//    for (int i = 0; i < r; i++)
//        for (int j = 0; j < c; j++)
//            cin >> board[i][j];
//    check[board[0][0] - 'A'] = 1;
//    dfs(0, 0, 1);
//    cout << ans;
//}
