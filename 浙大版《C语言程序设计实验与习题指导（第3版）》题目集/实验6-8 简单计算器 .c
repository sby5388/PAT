/*
ʵ��6-8 �򵥼����� ��20 �֣�
ģ����������Ĺ�����
���������ֻ�ܽ��мӼ��˳����㣬�������ͽ������������
��������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ:
������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ:
��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

��������:
1+2*10-10/2=
�������:
10
*/
#include<stdio.h>
int main() {
	char c;
	int result;
	int temp;
	int first = 1;
	int error = 0;


	do {
		scanf("%d",&temp);
		if(first) {
			result = temp;
			first = 0;
		} else {
			if(!error) {
				if(c=='+') {
					result +=temp;
				} else if(c=='-') {
					result-=temp;
				} else if(c=='*') {
					result *= temp;
				} else if(c=='/') {
					if(temp == 0) {
						error = 1;
					} else {
						//printf("result = %d\n",result);
					//	printf("temp   = %d\n",temp);
						result = result / temp;
					}
				} else {
					error = 1;
				}
			}
		}
	//	printf("%d\n",result);
		scanf("%c",&c);
	} while(c!='=');
	if(error) {
		printf("ERROR");
	} else {
		printf("%d",result);
	}
	return 0;
}


