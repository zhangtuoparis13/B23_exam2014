#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
/* Exo1
 * 当 输入12 的时候 输出的值为13 , 当输入21 的时候,结果为23
 * 这个程序的功能就是 偶数加1 奇数加2*/
// fonction 1
int myster1(int m) {
    int i ;
    for(i = 2; i < m; i = i + 1) {
        if ((m % i) == 0) {
            return FALSE;
        } }
    return TRUE;
}
// fonction 2
int myster2(int n) {
    while(! myster1(n)) {
        n = n + 1;
    }
    return n;
}

/* chaines de caracteres*/
// exo 2.1
void inverse(char s[])
{
    char tmp;
    for (int i = 0; i < strlen(s)/2 ; ++i) {
        tmp = s[strlen(s)-i-1];
        s[strlen(s)-i-1] = s[i];
        s[i] = tmp;
    }
}

//exo 2.2
int estTautogramme (char s[])
{
    const char t[10] = " ";
    char *token;
    char tmp;
    int flag=1;

    /* get the first token */
    token = strtok(s, t);
    tmp =token[0];

    /* walk through other tokens */
    while (token != NULL) {
//        printf(" %s\n", token);
//        printf(" %c\n",token[0]);
        if (tmp!=token[0])
            flag=0;
        token = strtok(NULL, t);
    }
    return flag;
}


// La fonction principale
int main() {
//    test exo1
    /*int k;
    printf ("Entrez une valeur pour la variable k : ");
    scanf("%d", &k);
    printf ("%d", myster2(k));*/

/*    char string[] = " This is a test!";
    inverse(string);
    printf("The result of Exo2.1 is : %s",string);*/

    char string2[] = "Hello World !";
    char string3[] = "lait lion lit lire lapin!";
    printf("Is is Tautogramme? : %d\t%d ", estTautogramme(string2),estTautogramme(string3));

    return 0;
}