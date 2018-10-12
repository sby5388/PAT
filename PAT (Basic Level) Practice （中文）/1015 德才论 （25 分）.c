/*
输入格式：
输入第一行给出 3 个正整数，分别为：N（≤10^5），即考生总数；
L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；
H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；
才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。

随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。

输出格式：
输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，
考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，
按其德分降序排列；若德分也并列，则按准考证号的升序输出。

输入样例：
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
输出样例：
12 
10000013 90 99
10000012 80 100
10000003 85 80
10000011 85 80
10000004 80 85
10000007 90 78
10000006 83 76
10000005 82 77
10000002 90 60
10000014 66 60
10000008 75 79
10000001 64 90
------------
14 60 80
99999901 64 90
99999902 90 60
99999911 85 80
99999903 85 80
99999904 80 85
99999905 82 77
99999906 83 76
99999907 90 78
99999908 75 79
99999909 59 90
99999910 88 45
99999912 80 100
99999913 90 99
99999914 66 60 

*/
#include<stdio.h>
#include<string.h>
int main() {

	//get inputs
	int N,low,high;
	scanf("%d %d %d",&N,&low,&high);
	int id[N];
	int defen[N];
	int caifen[N];
	int zongfen[N];
	/*第一类*/
	int count_best = 0;
	/*第二类，德胜才，*/
	int count_better = 0;
	/*第三类 才德兼亡 */
	int count_good = 0;
	/*第四类 渣渣*/
	int count_zhazha = 0;
	/*通过人数*/
	int count_ok = 0;


	for(int i=0; i<N; i++) {
		scanf("%d %d %d", &id[i], &defen[i], &caifen[i]);
		if(defen[i]>=low && caifen[i]>=low) {
			if(defen[i]>=high) {
				if(caifen[i]>=high) {
					count_best++;
				} else {
					count_better++;
				}
			} else {
				if(defen[i]>=caifen[i]) {
					count_good++;
				} else {
					count_zhazha++;
				}
			}

			zongfen[i] = defen[i]+caifen[i];
			count_ok++;
		} else {
			zongfen[i] = defen[i]=caifen[i] = 0;
		}
	}
	//out ok_number
	printf("%d\n",count_ok);

	//out best
	int maxID =0;
	int maxFen = 0;

	while(count_best>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(defen[i]>=high && caifen[i]>=high) {
					if(zongfen[i]>maxFen) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(zongfen[i]==maxFen) {
						if(defen[i]>defen[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						} else if(defen[i]==defen[maxID]) {
							if(id[i]<id[maxID]) {
								maxFen = zongfen[i];
								maxID = i;
							}
						}
					}
				}
			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_best--;
	}


	//out better
	maxID = 0;
	maxFen = 0;

	while(count_better>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(defen[i]>=high) {
					if(zongfen[i]>maxFen) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(zongfen[i]==maxFen) {
						if(defen[i]>defen[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						} else if(defen[i]==defen[maxID]) {
							if(id[i]<id[maxID]) {
								maxFen = zongfen[i];
								maxID = i;
							}
						}
					}
				}
			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_better--;
	}


	//out good
	maxID = 0;
	maxFen = 0;
	while(count_good>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(defen[i]>=caifen[i]) {
					if(zongfen[i]>maxFen) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(zongfen[i]==maxFen) {
						if(defen[i]>defen[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						} else if(defen[i]==defen[maxID]) {
							if(id[i]<id[maxID]) {
								maxFen = zongfen[i];
								maxID = i;
							}
						}
					}
				}

			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_good--;
	}

	//out zhazha
	maxID = 0;
	maxFen = 0;
	while(count_zhazha>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(zongfen[i]>maxFen) {
					maxFen = zongfen[i];
					maxID = i;
				} else if(zongfen[i]==maxFen) {
					if(defen[i]>defen[maxID]) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(defen[i]==defen[maxID]) {
						if(id[i]<id[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						}
					}
				}
			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_zhazha--;
	}




	return 0;
}
