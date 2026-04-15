#include <stdio.h>

int main()
{
	int length = 0;
	int alphaCount = 0;
	int numberCount = 0;
    int maxAlphaCount = 0;
    int maxNumCount = 0;

    scanf("%d", &length);
    char c;

	for(int i = 0; i <= length; i++){
        scanf("%c", &c);
        if(c <= 'z' && c >= 'a') {
            alphaCount++;
            if(alphaCount > maxAlphaCount)
                maxAlphaCount = alphaCount;
            numberCount = 0;
        }
        else if(c <= '9' && c >= '0') {
            numberCount++;
            if(numberCount > maxNumCount)
                maxNumCount = numberCount;
            alphaCount = 0;
        }
        else {
            alphaCount = 0;
            numberCount = 0;
        }
    }
    printf("%d\n%d", maxAlphaCount, maxNumCount);
	return 0;
}
