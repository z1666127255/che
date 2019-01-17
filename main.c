#include <stdio.h>
#include<math.h>

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
            if(index >0){
                index--;
                printf("shanchuchenggong\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
            else{
                printf("wuchelaingxinxi,shanchushibai\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
        }
        if(code == 3){
            printf("suoyoucheliangweizhi:\n");
            for(int i=0;i<index;i++){
                printf("di%dgecheliangweizhiwei(%d,%d)\n",i+1,arr[i],arr[i].y);
            }
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code == 4){
            printf("qingshurudangqianweizhizuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            double min=100000;
            int carID=0;
            for(int i=0;i<index;i++){
                int dx=x-arr[i].x;
                int dy=y-arr[i].y;
                double l=sqrt(dx*dx+dy*dy);

                if(min>l){
                    min>l;
                    carID=i;
                }
            }
            printf("yonghuiudangqianweizhiyudi%dgechedejuliwei%lf,shizuixiaojuli\n",carID+1,min);

            printf("\ndainjihuichejix\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code == 5){
            printf("tuichu\n");
            break;
        }
    }

    return 0;

}