#include <stdio.h>

int main()
{
    double price1, price2, price3;
    int quality1, quality2, quality3;
    double score1, score2, score3;

    printf("===== TENDER EVALUATION =====\n\n");

    /* Tender 1 */
    printf("Tender 1 - Enter price: ");
    scanf("%lf", &price1);
    printf("Tender 1 - Enter quality (1-10): ");
    scanf("%d", &quality1);

    /* Tender 2 */
    printf("Tender 2 - Enter price: ");
    scanf("%lf", &price2);
    printf("Tender 2 - Enter quality (1-10): ");
    scanf("%d", &quality2);

    /* Tender 3 */
    printf("Tender 3 - Enter price: ");
    scanf("%lf", &price3);
    printf("Tender 3 - Enter quality (1-10): ");
    scanf("%d", &quality3);

    /* Calculate scores using operators */
    score1 = (1000000.0 / price1) + (quality1 * 10.0);
    score2 = (1000000.0 / price2) + (quality2 * 10.0);
    score3 = (1000000.0 / price3) + (quality3 * 10.0);

    printf("\n---------- RESULTS ----------\n");
    printf("Tender 1 Score: %.2f\n", score1);
    printf("Tender 2 Score: %.2f\n", score2);
    printf("Tender 3 Score: %.2f\n", score3);

    /* Decision making */
    if (score1 >= score2 && score1 >= score3)
    {
        printf("\nWinner: Tender 1\n");
    }
    else if (score2 >= score1 && score2 >= score3)
    {
        printf("\nWinner: Tender 2\n");
    }
    else
    {
        printf("\nWinner: Tender 3\n");
    }

    return 0;
}