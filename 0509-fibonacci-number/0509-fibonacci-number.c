int fib(int n) {
    int num1 = 0 ;
    int num2 = 1 ;
    int sum = 0 ;

    if (n==1) 
        return 1 ;
    
    else {
        for (int i=0 ; i<n-1 ; i++) {
            sum = num1 + num2 ;
            num1 = num2 ;
            num2 = sum ;
        }
    }

    return sum ;
}