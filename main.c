#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a, j, m, n, ch,x;
    clrscr();
    printf("\nDo You want to Print Patterns:");
    printf("\n1.Yes\n2.No\n");
    scanf("%d", &ch);
    do{
    switch (ch)
    {
    case 1:
        printf("\nEnter the type of Pattern you want to print:");
        printf("\n1.Triangle\n2.Square\n3.Rectangle\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\t\tTRIANGLE");
            printf("\nEnter no. of Lines of Triangle:");
            scanf("%d", &n);

            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= (n - i); j++)
                {
                    printf(" ");
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 2:
            printf("\n\t\tSQUARE");
            printf("\nEnter no. of Lines of Square:");
            scanf("%d", &n);
            printf("\n");
            for (i = 1; i <= n; i++)
            {
                printf("\n");
                for (j = 1; j <= n; j++)
                {
                    printf("*");
                }
            }
            break;
        case 3:
            printf("\n\t\tRECTANGLE");
            printf("\nEnter the Length of Rectangle:");
            scanf("%d", &n);
            printf("\nEnter the Breadth of Rectangle:");
            scanf("%d", &m);

            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= m; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                printf("\n");
            }
            break;
        default:
            printf("\nWrong Choice Entered");
            break;
        }
        break;
    case 2:
        printf("\nExited");
        break;
    }
    printf("\nDo you want to print again");
    printf("\n1.Yes\n2.No\n");
    scanf("%d",&x);
    }while(x==1);
    getch();
}
