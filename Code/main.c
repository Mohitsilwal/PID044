#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int Purpose();
int Index();
int Index(){
    printf("\n\n\t\tPortal to Finalize Hostel Warden as well as Hostel Rector\n\n\n");
    printf("---------------------------------------------------------------------------------------\n\n");
    printf("Press <1> to login for Admin Use:\n");
    printf("Press <2> for Contact details:\n");
    printf("Press <3> for Personal Details:\n");
    printf("Press <4> to Try a Game:\n");
    printf("Press <5> to Exit the Main Function:\n\n");
}
int Login();
int Login(){
    char name[20],pass[20];
    fflush(stdin);
    printf("Enter Your Username:\n");
    scanf("%s",&name);
    printf("\n");
    printf("Enter Your Password:\n");
    scanf("%s",&pass);
    int cmp,cmp1;
    cmp=strcmp(name,"Admin");
    cmp1=strcmp(pass,"12345");
    if(cmp!=0||cmp1!=0){
        printf("Invalid Username or Password\n");
    }
    else{
        printf("Login Confirmed\n");
        Purpose();
    }
}
int Contact_Us();
int Contact_Us(){
    printf("Contact Number:\n");
    printf("9898xxxxxx\n");
    printf("Email Address:\n");
    printf("abc@gmail.com");
}
int Abput_Us();
int About_Us(){
    printf("I'm Mohit Silwal just a fresher or Rookie to programming language\n");
}

int Game();
int Game(){
    int n,g,c=0;
    srand(time(0));
    n=rand()%100+1;
    printf("Try to Guess this Random Number between 1 to 100:\n");
    do{
        scanf("%d",&g);
        if(g>n){
            printf("Try a Lower Number\n");
            c++;
        }
        else if(g<n){
            printf("Try a Higher Number\n");
            c++;
        }
        else if(g==n){
            printf("It's just a Hunch\n");
            printf("You barely made it in %d guesses\n",c);
        }
    }while(g!=n);
}
int Purpose(){
    int Rating;
    FILE *f;
    char a;
    printf("Press 1 to Add Data in File\n");
    printf("Press 2 to Exchange Data in File\n");
    printf("Press 3 to Display Data in File\n");
    scanf("%d",&Rating);
    switch (Rating)
    {
    case 1:
    f=fopen("D:\\PID.txt","a");
    while((a=getchar())!=EOF){
        putc(a,f);
    }
    fclose(f);
        break;
    
    case 2:
    f=fopen("D:\\PID.txt","w");
    while((a=getchar())!=EOF){
        putc(a,f);
    }
    fclose(f);
    break;

    case 3:
    f=fopen("D:\\PID.txt","r");
    while((a=getc(f))!=EOF){
        printf("%c",a);
    }
    fclose(f);
    break;

    default:
    printf("Enter Correct Operation\n");
    Purpose();
        break;
    }
}
int Choice(int n);
int Choice(int n){
    switch(n){
        case 1:
        Login();
        break;

        case 2:
        Contact_Us();
        break;

        case 3:
        About_Us();
        break;

        case 4:
        Game();
        break;

        case 5:
        return 0;

        default:
        printf("Please Enter Correct Operation");
    }
    main();
}
int Data();
int Data(){
    int g;
}
int main(void){
    Index();
    int t;
    printf("Enter the Number as per choice:\n");
    scanf("%d",&t);
    Choice(t);
}
