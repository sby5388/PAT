/*
1003 ��Ҫͨ����
����ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ���
�������� PAT �ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

�ַ����б������ P�� A�� T�������ַ��������԰��������ַ���
�������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a�� b�� c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
���ھ�����Ϊ PAT дһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�

�����ʽ��
ÿ������������� 1 ������������
�� 1 �и���һ�������� n (<10)������Ҫ�����ַ���������
������ÿ���ַ���ռһ�У��ַ������Ȳ����� 100���Ҳ������ո�

�����ʽ��
ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ��������� YES��������� NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO
*/
#include<stdio.h>
void isTrue(char *chars,int len);
int main() {
	int N;
	scanf("%d\n",&N);
	for(int i = 0; i<N; i++) {
		char c[101];
		int len = 0;
		while((c[len]=getchar())!='\n') {
			len++;
		}
		c[len]  = '\0';
		isTrue(c,len);
	}
	return 0;
}

void isTrue(char *chars,int len) {
	int error = 0;
	int iP = -1;
	int iA = -1;
	int iT = -1;
	for(int i = 0; i<len; i++) {
		if(error==1) {
			break;
		}
		char c = chars[i];
		if(c=='P') {
			iP= i;
		} else if(c=='A') {
			iA = i;
		} else if(c=='T') {
			iT = i;
		} else {
			error = 1;
		}

	}

	if(iP==-1||iA==-1|| iT==-1) {
		error = 1;
	}
	if(error==1){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
}













