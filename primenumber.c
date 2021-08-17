#include<stdio.h>
 
int Primeno(int,int);
 
int main(){
 
    int num,prime;
 
    printf("Enter a positive number: ");
     
    scanf("%d",&num);
 
    prime = Primeno(num,num/2);
 
   if(prime==1)
    
        printf("%d is a prime number",num);
    
   else
    
      printf("%d is not a prime number",num);
 
   return 0;
}
 
int Primeno(int num,int i){
 
    if(i==1){
    
        return 1;
    
    }else{
    
       if(num%i==0)
    
         return 0;
    
       else
    
         Primeno(num,i-1);
    }
 
}
