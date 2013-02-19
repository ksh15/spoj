#include <stdio.h>
 
#define min(a, b) ((a) < (b) ? (a) : (b))
 
int main()
{
    int a[100000];
        int t, n;
        unsigned long long int i, j, m, x;
 
        scanf("%d", &t);
 
        while (t--) {
                scanf("%d", &n);
 
                for (i = 0; i < n; i++) {
                        scanf("%d", &a[i]);
                }
 
                i = 0;
                j = n - 1;
                m = 0;
 
                while (i < j) {
                        x = min(a[i], a[j]);
                        if (m < x * (j - i)) {
                                m = x * (j - i);
                        }
                        if (a[i] < a[j]) {
                                i++;
                        } else {
                                j--;
                        }
                }
 
                printf("%lld\n", m);
        }
 
        return 0;
}
