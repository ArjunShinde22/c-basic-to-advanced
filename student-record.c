#include <stdio.h>

int main() {
    char name[50];
    int roll_no;
    float a,b,c;
    float total;
    float avg;
    printf("enter name of student:");
    scanf("%s",&name);
printf("enter roll_no:");
    scanf("%d",&roll_no);
    printf("enter 3 sub marks:");
    scanf("%f %f %f",&a,&b,&c);
total=a+b+c;
    printf("total of 3 sub:%f\n",total);
avg=total/3;
    printf("avg of 3 sub:%f\n",avg);
    return 0;
}