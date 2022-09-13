/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char student[10];
    struct info_student{
        char name[10];
        int num_mat;
        int age;
        int grades;
        
        
        
    };
    while(true){
    char choos[1];
    printf("enter name of ab of new student :");
    scanf("%s",student);
    if(student){
        struct info_student student;
        printf("enter name :");
        scanf("%s",student.name);
        printf("enter name of matricule :");
        scanf("%d",&student.num_mat);
        printf("enter age  :");
        scanf("%d",&student.age);
        printf("enter grades  :");
        scanf("%d",&student.grades);
        printf("do you whant to output your data (yes 'y' no 'n'):   ");
        scanf("%s",choos);
        if(choos=="n"){
            continue;
        }
        else{
            printf(" name :  %s \n",student.name);
            printf(" name of matricule :  %d \n",student.num_mat);
            printf(" age :  %d \n",student.age);
            printf(" grades :  %d \n",student.grades);
            
        }
    }
    else{
        continue;
    }
    
    }
    return 0;
}

