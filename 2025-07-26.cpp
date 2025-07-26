//#include <cstdio>
//using namespace std;
//int gcd(int x, int y)
//{
//	if (y == 0) return x;
//	else return gcd(y, x % y);
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int g = gcd(a, b);
//	printf("%d\n%d", g, a* b / g);
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n, b;
//	scanf("%d %d", &n, &b);
//	string ans = "";
//	while (n > 0)
//	{
//		int r = n % b;
//		if (r < 10)
//		{
//			ans += (char)(r + '0');
//		}
//		else
//		{
//			ans += (char)(r - 10 + 'A');
//		}
//		n /= b;
//	}
//	reverse(ans.begin(), ans.end());
//	cout << ans;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int ans = 0;
//	string s;
//	int b;
//	cin >> s;
//	scanf("%d", &b);
//	for (int i = 0; i < s.size(); i++)
//	{
//		if ('0' <= s[i] && s[i] <= '9')
//		{
//			ans = ans * b + (s[i] - '0');
//		}
//		else
//		{
//			ans = ans * b + (s[i] - 'A' + 10);
//		}
//	}
//	cout << ans << '\n';
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int n = s.size();
//	if (n % 3 == 1)
//	{
//		cout << s[0];
//	}
//	else if (n % 3 == 2)
//	{
//		cout << (s[0] - '0')*2 + (s[1] - '0');
//	}
//	for (int i = n % 3; i < n; i += 3)
//	{
//		cout << (s[i] - '0')*4 + (s[i + 1] - '0')*2 + (s[i + 2] = '0');
//	}
//}

//#include <cstdio>
//void convert(int num, int base)
//{
//	if (num == 0) return;
//	convert(num/base, base);
//	printf("%d ", num%base);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int n;
//	scanf("%d", &n);
//	int ans = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		scanf("%d", &x);
//		ans = ans * a + x;
//	}
//	convert(ans, b);
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string B1, B2;
//	cin >> B1 >>B2;
//	int ans1 = 0; int ans2 = 0;
//	for (int i = 0; i < B1.size(); i++){
//		ans1 = ans1 * 2 + (B1[i] - '0');
//	}
//	for (int i = 0; i < B2.size(); i++){
//		ans2 = ans2 * 2 + (B2[i] - '0');
//	}
//	vector<int> v;
//	int temp = ans1 * ans2;
//	
//	while(temp > 0){
//		v.push_back(temp%2);
//		temp/=2;
//	}
//	reverse(v.begin(), v.end());
//	bool leading_zero = true;
//for (int i = 0; i < v.size(); i++) {
//    if (leading_zero && v[i] == 0) continue;
//    leading_zero = false;
//    cout << v[i];
//}
//if (leading_zero) cout << "0";
//}

//#include <cstdio>
//int main()
//{
//	int p[100];
//	int pn = 0;
//	bool c[101];
//	int n = 100;
//	for (int i = 2; i <= n; i++)
//	{
//		if (c[i] == false)
//		{
//			p[pn++] = i;
//			for (int j = i * i; j <= n; j++)
//			{
//				c[j] = true;
//			}
//		}
//	}
//}
