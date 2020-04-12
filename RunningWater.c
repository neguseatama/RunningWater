/*
 C言語による流水算
 https://neguse-atama.hatenablog.com
*/
#include <stdio.h>
int main(void){
    int nobohaya,kudahaya,funehaya,kawahaya,kyori,bangou,tuzuki,zikan,sentaku;
    do{
        printf("流水算の計算をします。\n");
        printf("船の速さと川の流れの速さを入力してください。\n");
        printf("船の速さ:");  scanf("%d",&funehaya);
        printf("川の流れの速さ:");  scanf("%d",&kawahaya);
        printf("1.船が上る場合の速さ\n2.船が下る場合の速さ\n");
        printf("以上から1,2のどちらかを選び、入力してください:");
        scanf("%d",&bangou);
        if(bangou==1){
            nobohaya=funehaya-kawahaya;
            printf("求める船の速さは%dです。\n",nobohaya);
        }else if(bangou==2){
            kudahaya=funehaya+kawahaya;
            printf("求める船の速さは%dです。\n",kudahaya);
        }else{
            printf("1,2以外の数を入力しないでください。\n");
            goto yarinaosikeisan;
        }
        printf("所要時間を求めますか。それとも船が進む距離を求めますか。・・・0.所要時間　1.船が進む距離:");
        scanf("%d",&sentaku);
        if(sentaku==0 && bangou==1){
            printf("船が進む距離を入力してください:");
            scanf("%d",&kyori);
            zikan=kyori/(funehaya-kawahaya);
            printf("所要時間は%dです。\n",zikan);
        }else if(sentaku==0 && bangou==2){
            printf("船が進む距離を入力してください。");
            scanf("%d",&kyori);
            zikan=kyori/(funehaya+kawahaya);
            printf("所要時間は%dです。\n",zikan);
        }else if(sentaku==1 && bangou==1){
            printf("所要時間を入力してください:");
            scanf("%d",&zikan);
            kyori=(funehaya-kawahaya)*zikan;
            printf("船が進む距離は%dです。\n",kyori);
        }else if(sentaku==1 && bangou==2){
            printf("所要時間を入力してください。");
            scanf("%d",&zikan);
            kyori=(funehaya+kawahaya)*zikan;
            printf("船が進む距離は%dです。\n",kyori);
        }else{
            printf("0,1以外の数を入力しないでください。\n");
        }
        yarinaosikeisan:
        printf("計算をやり直しますか。・・・(0)はい (1)いいえ:");
        scanf("%d",&tuzuki);
    }while(tuzuki==0);
    return (0);
}