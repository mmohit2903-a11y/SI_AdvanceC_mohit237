#include <stdio.h>

int main()
{
    char *Stock[9] = {"Groceries", "Clothes", "Electronic", "Softdrink","Milk", "Footwear", "Paneer", "Dahi", "Stationery"};

    int id[9]    = {101,102,103,104,105,106,107,108,109};
    int price[9] = {10,20,23,15,26,50,30,40,60};

    int choice = 0;
    int qty, total = 0;

    do
    {
        printf("\n========== DMART STORE ==========\n");
        printf("1. Show Menu\n");
        printf("2. Buy Item\n");
        printf("3. Exit (Show Bill)\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Try again.\n");
            while(getchar() != '\n');
            continue;
        }

        if(choice == 1)
        {
            printf("\n----- AVAILABLE ITEMS -----\n");
            printf("Product        ID        Price\n");
            printf("--------------------------------\n");

            for(int i = 0; i < 9; i++)
            {
                printf("%-15s %-10d %d\n", Stock[i], id[i], price[i]);
            }
        }
        else if(choice == 2)
        {
            char again;

            do
            {
                int found = 0;
                int product_id;

                printf("\nEnter Product ID to Buy: ");

                if (scanf("%d", &product_id) != 1)
                {
                    printf("Invalid input!\n");
                    while(getchar() != '\n');
                    continue;
                }

                for(int i = 0; i < 9; i++)
                {
                    if(product_id == id[i])
                    {
                        found = 1;

                        printf("Product : %s\n", Stock[i]);
                        printf("Price   : %d\n", price[i]);

                        printf("Enter Quantity: ");
                        scanf("%d", &qty);

                        total += price[i] * qty;

                        printf("Item Added Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Invalid Product ID!\n");
                }

                printf("Buy More Items? (Y/N): ");
                scanf(" %c", &again);

            } while(again == 'Y' || again == 'y');
        }
        else if(choice == 3)
        {
            printf("\n========== FINAL BILL ==========\n");
            printf("Total Purchase Amount = %d\n", total);
            printf("Thank You For Shopping!\n");
        }
        else
        {
            printf("Invalid Choice! Try Again.\n");
        }

    } while(choice != 3);

    return 0;
}