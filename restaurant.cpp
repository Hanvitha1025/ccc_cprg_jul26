#include <stdio.h>

int main()
{
    int choice = 0;
    puts("Welcome Tanuja Maam");
    do
    {
        puts("1:Veg 2:Non-Veg.  Your choice please: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            puts("1:VadaPaav 2:Mylaari Dosa 3:BisiBeleBath.  Your choice please: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Spicy & hot vada paav Sir");
                break;
            case 2:
                puts("Yummy & tasty Dosa Sir");
                break;
            case 3:
                puts("Tasty Ghee BBB Sir");
                break;
            default:
                puts("Sir, did you say Grass??");
            }
        case 2:
            puts("1:Chick Biryani 2:Fish Fry 3:Mottun Chops.  Your choice please: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Lucknowi Biryani Maam");
                break;
            case 2:
                puts("So Good Fish Maam");
                break;
            case 3:
                puts("Tasty Spicy Chops for you Maam");
                break;
            default:
                puts("For Cockroach Chiully please go to Jantar Mantar Maam");
            }
        default:
            puts("Maamu, this restaurant not Garden");
        }
        puts("Do you wish to have more? Press 1 if Yes");
        scanf("%d", &choice);
    } while (choice == 1);
    puts("Thank you Visit again");
}
