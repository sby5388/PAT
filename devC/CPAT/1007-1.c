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
dd: 前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；

mm: 第2对相同的字符是'E'，那是第5个英文字母，
代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；

yy: 后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟
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
