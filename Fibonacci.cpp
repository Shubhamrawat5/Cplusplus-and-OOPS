#include <iostream>

//calculating as taking 3 variables 
//one for last value, second for last second value and third for storing current fib
int fibonacci_fast(int n) {
    int a=0,f;
    if(n==0) return(0);
    int b=1;
    if(n==1) return(1);
    for(int i=2;i<=n;++i){
    	f=a+b;
    	a=b;
    	b=f;
    }
    return(f);
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
