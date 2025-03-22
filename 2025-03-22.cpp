//#include <cstdio>
//int main()
//{
//	int day,car,ans = 0;
//	scanf("%d", &day);
//	for (int i=0; i < 5; i++) {
//		scanf("%d",&car);
//		if (day == car) {
//			ans++;
//		}
//	}
//	printf("%d",ans);
//}

//#include <cstdio>
//int main()
//{
//	int on, off;
//	int now=0;
//	int max=0;
//	for (int i = 0; i < 4; i++) {
//		scanf ("%d %d",&off, &on);
//		now += on - off;
//		printf("%d\n",now);
//	}
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	for (int i=0; i<10; i++) {
//		int temp;
//		scanf("%d",&temp);
//		v.push_back(temp);
//	}
//	for (int i=v.size() - 1; i>=0; i--) {
//		printf("%d", v[i]);
//	}
//}

//#include <cstdio>
//int main()
//{
//	int n, score;
//	int max = 0, min, sum=0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &score);
//		if (max < score) max = score;
//		if (max > score) max = score;
//		sum += score;
//	}
//	printf("%d", (sum - (max + min)) / (n - 2));
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int> h;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int temp;
//		scanf("%d",&temp);
//		h.push_back(temp);
//	}
//	int max_h=0;
//	int index=0;
//	for (int i = 1; i < n; i++) {
//		if (max_h < (h[i] - h[i-1])) {
//			max_h = (h[i] - h[i-1]);
//			index = i;
//		}
//	}
//	if (index) printf("%d %d", index, index + 1);
//	else printf("0");
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	vector <int>score;
//	vector <int>rank;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		scanf("%d",&temp);
//		score.push_back(temp);
//		rank.push_back(0);
//	}
//	for (int i = 0; i < n; i++) {
//		rank[i] = 1;
//		for (int j = 0; j < n; j++) {
//			if (score[i] > score[j]) rank[i]++;
//		}
//		
//		printf("%d ",rank[i]);
//	}	
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//int main()
//{
//	int tell;
//	int count[10] = { 0, };
//	scanf("%d", &tell);
//	for (int i = 0; i < 8; i++) {
//		count[tell % 10]++;
//		tell /= 10;
//	}
//	count[6] += (count[9] + 1);
//	count[6] /= 2;
//	count[9] = count[6];
//	int max_count = 0;
//	for (int i = 0; i < 10; i++) {
//		if (max_count < count[i]) max_count = count[i];
//	}
//	printf("%d",max_count);
//}

#include <cstdio>
#include <cstdio>
using namespace std;

int main()
{
	int N;
	vector <int>score;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int temp;
		scanf("%d",&temp);
		score.push_back(temp);
	}
	for (int i = N - 2; i >= 0; i--) {
		if (score[i] > score[i + 1]) {
			score[i] -= (score[i] - score[i +1] + 1);
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d",score[i]);
	}
}
