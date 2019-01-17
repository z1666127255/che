#include <stdio.h>

struct Point{
    int x;
    int y;
};

int main(){
    int index = 0;
    struct Point arr[100];

    printf("huanyuingjinruzhuanchangweizhiguanlixitong\n");

    while(1){
        printf("1----tianjia\n");
        printf("2----shanchu\n");
        printf("3----xianshiquanbu\n");
        printf("4----fanhuiwodeweizhi\n");
        printf("5----tuichu\n");

        printf("xuanzegongnneng\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("qingshurucheliangqweizhixyzuobiao:\n");
            int x;
            int y;
            scanf("%c",&x);
            scanf("%c",&y);
        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            printf("tuichu\n");
            break;
        }
    }

    return 0;

}