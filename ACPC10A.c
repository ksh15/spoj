#include <stdio.h>

int main()
{
        int a1[100000], a2[100000], a3[100000];
        int i, j;

        i = 0;
        while (1) {
                scanf("%d%d%d", &a1[i], &a2[i], &a3[i]);
                if (a1[i] == 0 && a2[i] == 0)
                        break;
                i++;
        }

        for (j = 0; j < i; j++) {
                if (a2[j] - a1[j] == a3[j] - a2[j])
                        printf("AP %d\n", a3[j] + a2[j] - a1[j]);
                else
                        printf("GP %d\n", a3[j] * a2[j] / a1[j]);
        }

        return 0;
}
