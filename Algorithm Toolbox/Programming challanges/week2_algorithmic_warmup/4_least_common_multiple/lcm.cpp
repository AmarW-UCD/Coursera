#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long ged(long long a,long long b){
	if (b==0)
		return a;
	long long temp_a=a%b;
	return ged(b,temp_a);
}
long long fast_lcm(long long  a,long long b){
	return (a*b)/ged(a,b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << fast_lcm(a, b) << std::endl;
  return 0;
}
