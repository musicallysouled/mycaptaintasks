#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char empname[30];
    char dept[15];
    int empno;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<=n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",&employees[i].empname);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].empno);
        //Department
        printf("Department: ");
        scanf("%s",&employees[i].dept);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].empname);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].empno);
        
        printf("Department: ");
        printf("%s\n",employees[i].dept);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
