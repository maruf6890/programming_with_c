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
#include <stdio.h>

int main() {
    int N,M,O,a,b,c,d,e,f,num=6 ; 
    switch(N){
        case 0:a=0,b=0, c=0;
        case 1:a=1,b=0, c=0;
        case 2:a=0,b=2, c=0;
        case 3:a=1,b=2, c=0;
        case 4:a=0,b=0, c=4;
        case 5:a=1,b=0, c=4;
        case 6:a=0,b=2, c=4;
        case 7:a=1,b=2,c=4;
    }
    switch(M){
        case 0:d=0,e=0, f=0;
        case 1:d=1,e=0, f=0;
        case 2:d=0,e=2, f=0;
        case 3: d=1,e=2, f=0;
        case 4:d=0,e=0, f=4;
        case 5:d=1,e=0, f=4;
        case 6:d=0,e=2, f=4;
        case 7:d=1,e=2,f=4;
    }
     num[0]= a;  num[1]= b;  num[2]= c; num[3]= d; num[4]= e,num[5]=f;
     
    
    
    

    return 0;
}
