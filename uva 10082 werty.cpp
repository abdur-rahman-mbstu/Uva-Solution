#include<stdio.h>
main()
{
    char c;
    while(scanf("%c",&c)==1)
    {
        if(c=='/') printf(".");
        if(c=='.') printf(",");
        if(c==',') printf("M");
        if(c=='M') printf("N");
        if(c=='N') printf("B");
        if(c=='B') printf("V");
        if(c=='V') printf("C");
        if(c=='C') printf("X");
        if(c=='X') printf("Z");
        if(c=='Z') printf("Z");

        if(c=='\'') printf(";");
        if(c==';') printf("L");
        if(c=='L') printf("K");
        if(c=='K') printf("J");
        if(c=='J') printf("H");
        if(c=='H') printf("G");
        if(c=='G') printf("F");
        if(c=='F') printf("D");
        if(c=='D') printf("S");
        if(c=='S') printf("A");
        if(c=='A') printf("A");

        if(c=='\\') printf("]");
        if(c==']') printf("[");
        if(c=='[') printf("P");
        if(c=='P') printf("O");
        if(c=='O') printf("I");
        if(c=='I') printf("U");
        if(c=='U') printf("Y");
        if(c=='Y') printf("T");
        if(c=='T') printf("R");
        if(c=='R') printf("E");
        if(c=='E') printf("W");
        if(c=='W') printf("Q");
        if(c=='Q') printf("Q");

        if(c==' ') printf(" ");
        if(c=='\n') printf("\n");
        if(c=='=') printf("-");
        if(c=='-') printf("0");
        if(c>='2'&&c<='9')
        {
            c=c-'1';
            printf("%d",c);
        }
        if(c=='0') printf("9");
        if(c=='1') printf("`");
        if(c=='`') printf("`");

    }
    return 0;
}
