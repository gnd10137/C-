//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//}

//#include <stdio.h>
//struct Coordi{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Coordi p1;
//	struct Coordi p2={5,9};
//	struct Coordi p3;
//	struct Coordi p4;
//	
//	p1.x = 2;
//	p1.y = 3;
//	
//	scanf("%d %d", &p3.x, &p3.y);
//	
//	p4 = p2;
//
//	printf("p1의 좌표( %d , %d)\n",p1.x, p1.y);
//	printf("p2의 좌표( %d , %d)/n",p2.x, p2.y);
//	printf("p3의 좌표( %d , %d)/n",p3.x, p3.y);
//	printf("p4의 좌표( %d , %d)\n",p4.x, p4.y);
//	return 0;
//}

//#include <stdio.h>
//
//struct Circle {
//	int x;
//	int y;
//	double r;
//};
//
//int main()
//{
//	struct Circle c1, c3, c4;
//	
//	c1.x = 5;
//	c1.y = 9;
//	c1.r = 2.5;
//	
//	struct Circle c2 = {-1, -8, 10.2};
//	c3 = c1;
//	c4.x = c2.y;
//	c4.y = c2.x;
//	
//	printf("c1의 좌표(%d %d), 반지름 : %lf\n",c1.x,c1.y,c1.r);
//	printf("c2의 좌표(%d %d), 반지름 : %lf\n",c2.x,c2.y,c2.r);
//	printf("c3의 좌표(%d %d), 반지름 : %lf\n",c3.x,c3.y,c3.r);
//	printf("c4의 좌표(%d %d), 반지름 : %lf",c4.x,c4.y,c4.r);
//}

//#include <stdio.h>
//#include <string.h>
//
//struct Person {
//	char name[10];
//	int age;
//	double height;
//};
//
//int main()
//{
//	struct Person m1;
//	struct Person m2 = {"허난설헌", 13 ,159.9};
//	
//	strcpy (m1.name, "허균");
//	m1.age = 19;
//	m1. height = 168.34;
//	
//	struct Person m3;
//	scanf("%s %d %lf", &m3.name, &m3.age,&m3.height);
//	
//	printf("이름 : %s\n나이 : %d\n키 : %.1lf", m1.name,m1.age,m1.height);
//	printf("이름 : %s\n나이 : %d\n키 : %.1lf", m2.name,m2.age,m2.height);
//	printf("이름 : %s\n나이 : %d\n키 : %.1lf", m3.name,m3.age,m3.height); 
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct Address {
//	char name[10];
//	char phone[20];
//	char home[50];
//};
//
//int main()
//{
//	struct Address man1;
//	strcpy(man1.name,"홍길동");
//	strcpy(man1.phone,"010-1234-5678");
//	strcpy(man1.home, "서울시 강남구");
//	
//	struct Address man2 = {"홍길동","010-1234-5678","서울시 강남구"};
//	
//	struct Address man3;
//	scanf("%s %s %s", &man3.name, &man3.phone, &man3.home);
//	
//	printf("이름 : %s 연락처 : %s\n 주소 : %s\n",man1.name , man1.phone, man1.home);
//	printf("이름 : %s 연락처 : %s\n 주소 : %s\n",man2.name , man2.phone, man2.home);
//	printf("이름 : %s 연락처 : %s\n 주소 : %s\n",man3.name , man3.phone, man3.home);
//}

//#include <stdio.h>
//#include <string.h>
//
//struct Person {
//	char name[10];
//	int age;
//	double height;
//};
//
//int main()
//{
//	struct Person list[5] = {{"김유신", 15, 178.3}, {"김춘추", 13, 173.3}, {"사다함", 17, 183.2},{"원효", 19, 168.9},{"장보고", 13, 187.3}};
//	
//	for (int i = 0; i < 5; i++){
//		printf("이름 : %s\n 나이 : %d\n 키 : %.1lf",list[i].name, list[i].age, list[i].height);
//	}
//	
//	return 0; 
//}
