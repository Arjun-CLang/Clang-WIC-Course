#include<stdio.h>
int main()
{
    int rl,phy,che,ca,total,per;
    char nm;
    printf("\n Input the roll number of the student: ");
    scanf("%d",&rl);
    printf("\n Input the Name of student:");
    scanf("%d",&nm);
    printf("\n Input the mark of physics,chemistry and computer application");
    scanf("%d %d %d",&phy,&che,&ca);
    total=phy+che+ca;
    per=total/3;
    printf("\n roll number:%d\n Name of student:%d\n",rl,nm);
    printf("Marks in physics:%d\n Marks in chemistry:%d\n Marks in computer application:%d\n",phy,che,ca);
    printf("Total marks=%d\n percentage=%d\n",total,per);
    switch(per)
    {
       case 1 ... 34:
           {
               break;
           }
       case 35 ... 44:
           {
           printf("Pass class\n");
           break;
           }
       case 45 ... 60:
           {
            printf("Grade:Third class/Third division/B\n");
           break;
           }
       case 61 ... 80:
           {
             printf("Grade:Second class/Second division/A\n");
             break;
           }
       case 81 ... 100:
        {
            printf("Grade:First class/First division/A+\n");
            break;
        }
       default:
        {
            printf("Number is out of range!!!\n");
            break;
        }
    }
    return 0;

}
