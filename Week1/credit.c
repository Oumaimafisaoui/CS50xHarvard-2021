#include <stdio.h>


int main(void)
{
    int total_of_sum = 0;
    int position = 0;
    long credit_number;
    long credit_copy;
    int total_length = 0;
    do
    {
        //enter number of card
        printf("Number: \n");
        scanf("%ld", &credit_number);
        credit_copy = credit_number;
        //Multiply every other digit by 2,
        //starting with the number’s second-to-last digit, and then add those products’ digits together.
        //Add the sum to the sum of the digits that weren’t multiplied by 2.
        //If the total’s last digit is 0 (or, put more formally,
        //if the total modulo 10 is congruent to 0), the number is valid!
        while (credit_number != 0)
        {
            if (position % 2 != 0)
            {
                int temp_num = (credit_number % 10) * 2;
                if (temp_num > 9)
                {
                    total_of_sum += temp_num % 10 + temp_num / 10;
                }
                else
                {
                    total_of_sum += temp_num;
                }
            }
            else
            {
                total_of_sum += credit_number % 10;
            }

            credit_number = credit_number / 10;
            position++;
            total_length++;
        }
    }

    while (credit_number != 0);

    if (total_of_sum % 10 == 0)
    {
        //amex credit card checker
        long amex_start_num = credit_copy / 10000000000000;
        if ((amex_start_num == 34 || amex_start_num == 37) && total_length == 15)
        {
            printf("AMEX\n");
            return 0;
        }
        //Mastercard credit card number checker
        long master_card_start_num = credit_copy / 100000000000000;
        if ((total_length == 16) && (master_card_start_num >= 51 && master_card_start_num <= 55))
        {
            printf("MASTERCARD\n");
            return 0;
        }
        //Visa card credit card number checker
        long visa_start_num = credit_copy / 1000000000000;
        if ((total_length == 16 || total_length == 13) && (visa_start_num == 4 || master_card_start_num / 10 == 4))
        {
            printf("VISA\n");
            return 0;
        }
        printf("INVALID\n");//Other case
    }
    else
    {
        printf("INVALID\n");//Other case

    }
}


