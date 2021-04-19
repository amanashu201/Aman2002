class MathUtil {
	
	int factorial(int n) {
		int f=1;
		for(int i=n; i>=1; i--) {
			f=f*i;
		}
		return f;
	}
	int square(int n) {
		return n*n;
	}
}
