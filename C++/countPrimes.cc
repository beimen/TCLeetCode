class Solution {
public:
	int countPrimes(int n) {
		int counter = 0;
		bool *Del = new bool[n];
		Del[1] = true;
		Del[2] = false;
		for(int k = 3; k < n; k = k + 2) {//only set value for odd numbers [3, n)
			Del[k] = false;
		}
		for(int i = 3; i * i < n; i = i + 2) {
			if(!Del[i]) {
				for(int j = 3; i * j < n; j = j + 2) {//only excute odd numbers
                    Del[i * j]=true;
				}
			}
		}
		if(n >= 3) {
			counter ++;//counter plus one for '2'
			for(int i = 3; i < n; i = i + 2) {//only count primes in odd numbers [3, n)
				if(!Del[i]) {
					counter ++;
				}
			}
		}
		return counter;
	}
};