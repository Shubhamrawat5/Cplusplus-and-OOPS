#include <iostream>

int GCD(int a,int b){
	int c;
	if(b%a==0) return a;
	else{
		c=GCD(b%a,a);
	}
	//std::cout<<c<<"\n";
	return(c);
}

//calcluating lcm by the help of gcd (faster)
long long lcm_faster(long long a,long long b){
	if(a%b==0) return a;
	else if(b%a==0) return b;
	return((a*b)/GCD(a,b));
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout<<lcm_faster(a,b)<<std::endl;
  return 0;
}

