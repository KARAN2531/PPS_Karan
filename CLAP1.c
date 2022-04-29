#include <stdio.h>
int main()
{
    char g;
    scanf("%c",&g);
    switch(g){
        case 'm':
            printf("Male");
            break;
        case 'M':
            printf("Male");
            break;
        case 'f':
            printf("Female");
            break;
        case 'F':
            printf("Female");
            break;
        default:
            printf("Unspecified Gender");

}
return 0;
}
