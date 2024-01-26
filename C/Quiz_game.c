#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int choice, sum=0;
    int ans1, ans2, ans3, ans4, ans5;
    int p1, p2, p3, p4, p5;
    int p01, p02, p03, p04, p05;

    printf("\n\n\n   QUIZ GAME      \n\n\n");
    printf("Press 1 to start game\nPress 0 to quit.");
    printf("\n\nEnter choice: ");
    scanf("%d",&choice);
    
    if(choice==1)
        printf("\nGame has started!!\n");
    else if(choice==0){

        printf("\nQuit\n");
        exit(0);
    }   
    else
        printf("Invalid choice");
    
    printf("\nPress 1 to start: \n");
    scanf("%d",&choice);
    if(choice==1){
        printf("\n1) Who is the inventor of Python language?\n");
        printf("\n1) Guido Van Rossum\t 2) James Gosling\t 3) Dennis Ritchie\t 4) Bjarne Stroustrup");
        printf("\n\nEnter your answer: ");
        scanf("%d",&ans1);
        if(ans1==1){
            printf("\nCORRECT\n");
            p1=5;
            printf("\nYour score is %d\n",p1);
            sum=sum+p1;
        }
        else{
            printf("\nWRONG\n");
            p01=0;
            printf("\nYour score is %d\n",p01);
        }
        printf("\n2) Where does Firewall is used?\n");
        printf("1) Security\t 2) Database\t 3) Web Development\t 4) Game development\n");
        printf("\nEnter your answer: ");
        scanf("%d",&ans2);
        if(ans2==1){
            printf("\nCORRECT\n");
            p2=5;
            printf("\nYour score is %d\n",p2);
            sum=sum+p2;
        }
        else{
            printf("\nWRONG\n");
            p02=0;
            printf("\nYour score is %d\n",p02);
        }
        printf("\n3) What is the 1st computer virus?\n");
        printf("1)Rabbit\t 2)Creeper Virus\t 3)Elk Cloner\t 4) SCA Virus\n");
        printf("\nEnter your answer: ");
        scanf("%d",&ans3);
        if(ans3==2){
            printf("\nCORRECT\n");
            p3=5;
            printf("\nYour score is %d\n",p3);
            sum=sum+p3; 
        }
        else{
            printf("\nWRONG\n");
            p03=0;
            printf("\nYour score is %d\n",p03);
        }
        printf("\n4) What is the first search engine?\n");
        printf("1)Google\t 2)Mosaic\t 3)Internet Explorer\t 4)Nexus\n");
        printf("\nEnter your answer: ");
        scanf("%d",&ans4);
        if(ans4==4){
            printf("\nCORRECT\n");
            p4=5;
            printf("\nYour score is %d\n",p4);
            sum=sum+p4;
        }
        else{
            printf("\nWRONG\n");
            p04=0;
            printf("\nYour score is %d\n",p04);
        }
        printf("\n5) Which of the following is not a database management software?\n");
        printf("1)Mysql\t 2)Oracle\t 3)Cobal\t 4)Sybase\n");
        printf("\nEnter your answer: ");
        scanf("%d",&ans5);
        if(ans5==3){
           printf("\nCORRECT\n");
            p5=5;
            printf("\nYour score is %d\n",p5);
            sum=sum+p5; 
        }
        else{
            printf("\nWRONG\n");
            p05=0;
            printf("\nYour score is %d\n",p05);
        }
        printf("\nYour total score is %d",sum);
    }
}