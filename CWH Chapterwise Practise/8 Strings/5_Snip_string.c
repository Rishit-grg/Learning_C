  

#include <stdio.h>
#include <string.h>

void snip(char sent[], char new_sent[], int start, int length);

int main()
{
    int n, m;
    char sentence[100], new_sent[100];
    char *old = sentence;
    char *new = new_sent;

    //input string
    printf("Enter the sentence - ");
    fgets(sentence, sizeof(sentence), stdin);

    //input snipping details 
    printf("snip must start after the posn - ");
    scanf("%d", &m);
    printf("Snip must be of length - ");
    scanf("%d", &n);

    //Function
    snip(old, new, m, n); 
    puts(new_sent);

    return 0;
}

void snip(char *sent, char *new_sent, int start, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        new_sent[i] = sent[start + i];
    }
    new_sent[i] = '\0';
}