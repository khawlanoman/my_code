#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
   /* int a = 6234;
    char *p = (char *)&a;
    p[0] = 57;
    p[1] = 5;
   
    printf("%d t\n", a);
     memset(p, '5', 4);
     memset(p+1, '2', 2);
    //memset(&a, 16, 1);
    
    printf("%s\n", p);
    write(1, p, 4);
    */

   /*char *str = "31";
   int i ;
   if (str != NULL)
       i = atoi(str);
    printf("%d \n", i);
/////
   char *str1 = "31";
   int i1;
   if (str1 != NULL)
      i1 = ft_atoi(str1);
   printf("%d \n", i1);*/

   /*char *src = "hi";
   char *p = "khgd";
   int i =strlcpy(p,src,0);
   printf("dyalthom:%d \n", i);*/
///////////
/*char *src1 = "hi";
   int i1 =ft_strlcpy(p,src1,1);
   printf("dyalti:%d \n", i1);*/



   char *src = "hi";
   char *p = NULL;
   int i =strlcat(p,src,1);
   printf("dyalthom:%d \n", i);
///////////
/*char *src1 = "hi";
   int i1 =ft_strlcat(p,src1,0);
   printf("dyalti:%d \n", i1);*/


    return 0;
}