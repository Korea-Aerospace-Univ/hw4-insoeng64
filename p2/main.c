#include <stdio.h>

int main()
{
	int length = 0;
	int alphaCount = 0;
	int numberCount = 0;
    int maxAlphaCount = 0;
    int maxNumCount = 0;

    scanf("%d", &length);
    char str[1000000];
    scanf("%s", &str);
	for(int i = 0; i < length; i++){
        if(str[i] <= 'z' && str[i] >= 'a') {
            alphaCount++;
            if(alphaCount > maxAlphaCount)
                maxAlphaCount = alphaCount;
        }
        else 
            alphaCount = 0;
        if(str[i] <= '9' && str[i] >= '0') {
            numberCount++;
            if(numberCount > maxNumCount)
                maxNumCount = numberCount;
        }
        else 
            numberCount = 0;
    }
    printf("%d\n%d", maxAlphaCount, maxNumCount);
	return 0;
}
