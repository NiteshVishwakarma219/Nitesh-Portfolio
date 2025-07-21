#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int hour,minute,second;
    // hour=minute=second=0;
    printf("Enter time:");
    scanf("%d %d %d",&hour,&minute,&second);
    while(1){
        //clear system display
        system("cls");

        // //print time in HH : MM : SS format
       
       printf("%02d : %02d : %02d ",hour,minute,second);

        //clear output buffer in gcc
        fflush(stdout);

        //increase second
        second++;

        //update hour minute and second
        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
         if(hour>12) {
            printf("PM");
        }
        else{ 
            printf("AM");
        }

        sleep(1); //valid till 1 second
    }
    return 0;
}


// 2nd Method

#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int h,m,sec;
    printf("set time : ");
    scanf("%d %d %d",&h,&m,&sec);
    if(h>12 || m>60 || sec>60){
        printf("Error :\n");
        exit(0);
    }
    while(1){
        sec++;
        if(sec>59){
            m++;
            sec=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\n clock :");
        printf("\n %2d:%2d:%2d",h,m,sec);
        sleep(1);
        system("cls");
    }
    return 0;
}