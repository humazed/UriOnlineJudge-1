#include <cstdio>
#include <cmath>

int main(){
    float n, s = 0;
    int c = 0;
    while(scanf("%f", &n) != EOF){
        if (n > 0){
            s += n;
            c++;
        }
    }

    printf("%d valores positivos\n", c);
    printf("%.1f\n", (float) s / c);
    return 0;
}
