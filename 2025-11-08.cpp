//#include <bits/stdc++.h>
//using namespace std;
//const int INF = 1e9;
//
//int main() {
//    ios::sync_with_stdio(0); cin.tie(0);
//    int v, e; cin >> v >> e;
//    vector<vector<int>> d(v+1, vector<int>(v+1, INF));
//
//    for (int i = 0; i < e; i++) {
//        int a, b, c; cin >> a >> b >> c;
//        d[a][b] = c;
//    }
//
//    for (int k = 1; k <= v; k++)
//        for (int i = 1; i <= v; i++)
//            for (int j = 1; j <= v; j++)
//                if (d[i][j] > d[i][k] + d[k][j])
//                    d[i][j] = d[i][k] + d[k][j];
//
//    int ans = INF;
//    for (int i = 1; i <= v; i++)
//        ans = min(ans, d[i][i]);
//
//    cout << (ans == INF ? -1 : ans);
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n, m;
//    cin >> n >> m;
//
//    vector<vector<int>> d(n + 1, vector<int>(n + 1, 0));
//
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//        d[a][b] = 1;
//    }
//
//    for (int k = 1; k <= n; k++)
//        for (int i = 1; i <= n; i++)
//            for (int j = 1; j <= n; j++)
//                if (d[i][k] && d[k][j])
//                    d[i][j] = 1;
//
//    for (int i = 1; i <= n; i++) {
//        int cnt = 0;
//        for (int j = 1; j <= n; j++) {
//            if (i == j) continue;
//            if (!d[i][j] && !d[j][i]) cnt++;
//        }
//        cout << cnt << '\n';
//    }
//}

//#include <bits/stdc++.h>
//#define INF 1000000000)
//
//int main(void) {
//    int n, m;
//    scanf("%d", &n);
//    scanf("%d", &m);
//
//    int d[101][101];
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i == j) d[i][j] = 0;
//            else d[i][j] = INF;
//        }
//    }
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        if (d[a][b] > c) d[a][b] = c;
//    }
//
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (d[i][j] > d[i][k] + d[k][j]) {
//                    d[i][j] = d[i][k] + d[k][j];
//                }
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (d[i][j] == INF)
//                printf("0 ");
//            else
//                printf("%d ", d[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
