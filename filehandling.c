#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp, *fptr1, *fptr2;
   char filename[100], c;
   char ch, fname[30], newch[500];
   int i=0, j, COUNT=0;
 
   printf("Enter the filename with extension: \n");
   gets(fname);
   scanf("%s",filename);
   // Open one file for reading
   fptr1 = fopen(filename, "r");
   if (fptr1 == NULL){
      printf("Cannot open file %s \n", filename);
      exit(0);
   }
   printf("Enter the filename to open for writing \n");
   scanf("%s", filename);
   // Open another file for writing
   fptr2 = fopen(filename, "w");
   if (fptr2 == NULL){
      printf("Cannot open file %s \n", filename);
      exit(0);
   }
   // Read contents from file
   c = fgetc(fptr1);
   while (c != EOF){
      fputc(c, fptr2);
      c = fgetc(fptr1);
   }
   printf("\nContents copied to %s", filename);
   fclose(fptr1);
   fclose(fptr2);
    
    fp = fopen(fname, "r");
    if(!fp)
    {
        printf("Error in opening the file...\nExiting...");
        getch();
        return 0;
    }
    printf("\nThe original content is:\n\n");
    ch = getc(fp);
    while(ch != EOF)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n\n\n");
    printf("The content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    return 0;
   
}
