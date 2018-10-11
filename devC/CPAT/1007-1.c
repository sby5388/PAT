#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

char s[4][100];
char star_str[][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};


/*
dd: ǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'�����������ģ�

mm: ��2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ��
����һ����ĵ�14����ͷ������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ����

yy: �������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4����
*/
void solve()
{
    int day = -1, hh = -1, mm = -1;

    for(char *p1 = s[0], *p2 = s[1]; *p1 && *p2; p1 ++, p2 ++){
        if(*p1 == *p2){
            if(day == -1 && *p1 >= 'A' && *p1 <= 'G'){
                day = *p1 - 'A' + 1;
            }
            else if(day != -1 && (isdigit(*p1) || (*p1 >= 'A' && *p1 <= 'N'))){
                if(isdigit(*p1))
                    hh = *p1 - '0';
                else
                    hh = *p1 - 'A' + 10;
                break;
            }
        }
    }

    for(char *p1 = s[2], *p2 = s[3]; *p1 && *p2; p1 ++, p2 ++){
        if(*p1 == *p2 && isalpha(*p1)){
            mm = p1 - s[2];
            break;
        }
    }

    printf("%s %02d:%02d\n", star_str[day - 1] , hh, mm);
}

int main()
{
    for(int i = 0; i < 4; i ++){
        cin >> s[i];
    }
    solve(); 
    return 0;
}
