/*
6-13 �۰���� ��15 �֣�
��һ���ϸ�������У�����int Search_Bin(SSTable T, KeyType k)�������ֵز���k�������е�λ�á�

�����ӿڶ��壺
int  Search_Bin(SSTable T, KeyType k)
����T�������k�ǲ��ҵ�ֵ��

���в��Գ���������
�����ʽ��
��һ������һ������n����ʾ������Ԫ�ظ�����������һ��n�����֣�����Ϊ����Ԫ��ֵ�� Ȼ������һ��Ҫ���ҵ�ֵ��

�����ʽ��
������ֵ�ڱ��ڵ�λ�ã����û���ҵ������"NOT FOUND"��

����������
5
1 3 5 7 9
7
���������
4
����������
5
1 3 5 7 9
10
���������
NOT FOUND
*/
#include <iostream>
using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef  struct {
	KeyType  key;
} ElemType;

typedef  struct {
	ElemType  *R;
	int  length;
} SSTable;

void  Create(SSTable &T) {
	int i;
	T.R=new ElemType[MAXSIZE+1];
	cin>>T.length;
	for(i=1; i<=T.length; i++)
		cin>>T.R[i].key;
}

int  Search_Bin(SSTable T, KeyType k);

int main () {
	SSTable T;
	KeyType k;
	Create(T);
	cin>>k;
	int pos=Search_Bin(T,k);
	if(pos==0) cout<<"NOT FOUND"<<endl;
	else cout<<pos<<endl;
	return 0;
}

/* ����������д�� */

int  Search_Bin(SSTable T, KeyType k) {
	for(int i=0; i<T.length; i++) {
		if(T.R[i].key==k) {
			return i;
		}
	}
	return 0;
}

