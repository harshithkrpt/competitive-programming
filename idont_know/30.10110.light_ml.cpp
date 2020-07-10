#include<bits/stdc++.h>
using namespace std;

int main()
{	
    while(scanf("%lld", &a) == 1) {
        if(a == 0) break;
        long long root = sqrt(a);
        printf("%s\n", (root * root) == a? "yes" : "no");
    }
	return 0;
}
