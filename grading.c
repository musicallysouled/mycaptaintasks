#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks received: ");
    scanf("%d", &marks);
    //grading conditions
    if ( marks<=100 && marks>=85)
    {
        printf("Congrats!! Grade A");
    }
    else if (marks<= 84 && marks >=70)
    {
        printf("Well done!Grade B");
    }
    else if (marks<=54 && marks >= 69)
    {
        printf("Grade C");
    }
    else if (marks<=40 && marks >= 54)
    {
        printf("Grade D");
    }
    else if (marks <40)
    {
        printf("Grade F");
    }
    else{
        printf("Error in input");
    }
    return 0;   
}
