#include <stdio.h>
#include <string.h>
int table[12][12] = {
{0   ,1108,708 ,1430,732 ,791 ,2191,663 ,854 ,748 ,2483,2625},
{1108,0   ,994 ,1998,799 ,1830,3017,1520,222 ,315 ,3128,3016},
{708 ,994 ,0   ,1021,279 ,1091,2048,1397,809 ,785 ,2173,2052},
{1430,1998,1021,0   ,1283,1034,1031,2107,1794,1739,1255,1341},
{732 ,799 ,279 ,1283,0   ,1276,2288,1385,649 ,609 ,2399,2327},
{791 ,1830,1091,1034,1276,0   ,1541,1190,1610,1511,1911,2369},
{2191,3017,2048,1031,2288,1541,0   ,2716,2794,2703,387 ,1134},
{663 ,1520,1397,2107,1385,1190,2716,0   ,1334,1230,3093,3303},
{854 ,222 ,809 ,1794,649 ,1610,2794,1334,0   ,101 ,2930,2841},
{748 ,315 ,785 ,1739,609 ,1511,2703,1230,101 ,0   ,2902,2816},
{2483,3128,2173,1255,2399,1911,387 ,3093,2930,2902,0   ,810 },
{2625,3016,2052,1341,2327,2369,1134,3303,2841,2816,810 ,0   },
                };
typedef struct{
    char name[20];
    int ind;
}City;
City citys[12]={{"Atlanta",0},{"Boston",1},{"Chicago",2},{"Denver",3},{"Detroit",4},
         {"Houston",5},{"Los Angeles",6},{"Miami",7},{"New York",8},
         {"Philadelphia",9},{"San Francisco",10},{"Seattle",11}   };
int findind(const char *str){
    int ret = -1;
    for (int i=0;i<sizeof(citys)/sizeof(City); i++){
        if (strcmp(str,citys[i].name)==0){
            ret = citys[i].ind;
            break;
        }
    }
    return ret;
}
int main() {
    char name1[20];
    char name2[20];
    printf("请输入第一个城市的名字\n"); 
    gets(name1);
    printf("请输入第二个城市的名字\n"); 
    gets(name2);
    printf("%s与%s有%dkm的距离",name1,name2,table[findind(name1)][findind(name2)]);
}   

