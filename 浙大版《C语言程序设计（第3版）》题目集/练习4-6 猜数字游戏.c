/*
��ϰ4-6 ��������Ϸ ��15 �֣�
��������Ϸ������Ϸ���������һ��100���ڵ���������
�û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�
����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�
����µ������������
����Ҫ��ͳ�ƲµĴ��������1�β³���������ʾ��Bingo!����
���3�����ڲµ�����������ʾ��Lucky You!����
�������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!����
�������N�ζ�û�вµ�������ʾ��Game Over��������������
����ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ:
�����һ���и�������������100����������
�ֱ�����Ϸ����������������Լ��²��������N��
���ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ:
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

��������:
58 4
70
50
56
58
60
-2
�������:
Too big
Too small
Too small
Good Guess!
*/

#include <stdio.h>
int main(){
    int count=-1, N=-1;
    int number=-1, guess=-1;
    count = 0;
    scanf("%d%d", &number, &N);
    while(count<N){
        scanf("%d", &guess);
        count++;
        if(guess<0){
            break;
        }
        if(guess==number){
            if(count==1){
                printf("Bingo!\n");
                break;
            }
            else if(count<=3){
                printf("Lucky You!\n");
                break;
            }
            else{
                printf("Good Guess!\n");
                break;
            }
        }
        else if(guess<number){
            printf("Too small\n");
        }
        else{
            printf("Too big\n");
        }
    }
    if(guess<0 || count==N&&guess!=number){
        printf("Game Over\n");
    }

    return 0;
}
//---------------------
//���ߣ���������
//��Դ��CSDN
//ԭ�ģ�https://blog.csdn.net/qq_36913610/article/details/81117435
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
