#include <stdio.h>
int main()
{
    int i, j;
    char input, alphabet = 'A';

printf("Son sat�rda yazd�rmak istedi�iniz b�y�k karakteri girin: ");
    scanf("%c",&input);

    for(i=1; i <= (input-'A'+1); ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
    return 0;
}
