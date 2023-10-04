#include <stdio.h>

int main()
{
  long long int n;
  scanf("%lld",&n);

   if (n>=2 && n<=100000)
   {
      long long int a[n];
      long long int b[n];
      for(int i=0; i<n;  i++){
         scanf("%lld",&a[i]);
         
      }
      /* for(int i=0; i<n;  i++){
          if(0<= b[i]){
            if (b[i]<=1000000000000000000)
            {
               b[i]= a[i];
            }
            
             
         }
      }
 */
      long long int mul=1;
      for(int i=0; i<n;  i++){
         if(0<= a[i] && a[i]<=1000000000000000000){
            mul = mul*a[i];
         }
          
      }

      if(mul<=1000000000000000000 && mul>=0 ){
         printf("%lld",mul);

      }else{
         printf("%d",-1);
      }
   }
   



  return 0; 
   }
