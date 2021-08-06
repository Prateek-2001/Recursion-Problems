 #include<stdio.h>

int Fibonacci(int n)
    {
       if ( n == 0 )
          return 0;
       else if ( n == 1 )
          return 1;
       else
          return ( Fibonacci(n-1) + Fibonacci(n-2) );
}


int main()
    {
       int n, i;
     
        printf("Enter number of elements in Fibonacci Series: ");
        scanf("%d",&n);
     
        printf("n = %d \n", n/3);
        
        printf("Elements of Fibonacci that are in the 3rd position: \n");
        for ( i = 1 ; i <= n ; i++ )
        {
            if (i%3 == 0){
                printf("%d\n", Fibonacci(i));
            }
                                
        }
     
       return 0;
    }
     




