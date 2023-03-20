/* library function void rewind(FILE *stream) sets the file position to the beginning of the file of the given stream.*/
#include <stdio.h>
int main () {
   char str[] = "This is tutorialspoint.com";
   FILE *fp;
   int ch;
   /* First let's write some content in the file */
   fp = fopen( "file.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );
   fclose(fp);
   fp = fopen( "file.txt" , "r" );
   while(1) {
      ch = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", ch);
   }
   rewind(fp);
   printf("\n");
   while(1) {
      ch = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", ch);    
   }
   fclose(fp);
   return(0);
}
