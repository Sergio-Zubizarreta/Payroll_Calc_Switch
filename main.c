#include <stdio.h>

int main() {
    int payCode;
    double pay;

    while (1) {
        printf("\nEnter employee's pay code (1: Manager, 2: Hourly, 3: Commission, 4: Pieceworker)\n");
        printf("Type 0 to quit.\n");
        printf("Pay Code: ");
        scanf("%d", &payCode);

        if (payCode == 0) {
            printf("Exiting payroll calculation.\n");
            break;
        }

        switch(payCode) {
            case 1: {
                double weeklySalary;
                printf("Enter manager's fixed weekly salary: ");
                scanf("%lf", &weeklySalary);
                pay = weeklySalary;
                printf("Manager's weekly pay: $%.2lf\n", pay);
                break;
            }
            case 2: {
                double hourlyWage, hoursWorked;
                printf("Enter hourly wage: ");
                scanf("%lf", &hourlyWage);
                printf("Enter hours worked: ");
                scanf("%lf", &hoursWorked);

                if (hoursWorked <= 40) {
                    pay = hourlyWage * hoursWorked;
                } else {
                    pay = hourlyWage * 40 + (hoursWorked - 40) * hourlyWage * 1.5;
                }
                printf("Hourly worker's weekly pay: $%.2lf\n", pay);
                break;
            }
            case 3: {
                double grossSales;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &grossSales);
                pay = 250 + 0.057 * grossSales;
                printf("Commission worker's weekly pay: $%.2lf\n", pay);
                break;
            }
            case 4: {
                int piecesMade;
                double payPerPiece;
                printf("Enter number of pieces made: ");
                scanf("%d", &piecesMade);
                printf("Enter pay per piece: ");
                scanf("%lf", &payPerPiece);

                pay = piecesMade * payPerPiece;
                printf("Pieceworker's weekly pay: $%.2lf\n", pay);
                break;
            }
            default:
                printf("Invalid pay code. Please try again.\n");
        }
    }
    return 0;
}
