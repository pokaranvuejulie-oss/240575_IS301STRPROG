#include <stdio.h>

/*  Problem: Write a program to create a customer’s bill for a company.
    Developed by: Julie Pokaran Vue
    Date: 03/03/2026
===========================================================
ALGORITHM / PSEUDOCODE
===========================================================

START

1. Declare constants:
      TV_PRICE = 400.00
      MONITOR_PRICE = 220.00
      FLASH_PRICE = 35.20
      HARD_PRICE = 150.00
      PRINTER_PRICE = 300.00
      TAX_RATE = 0.0835

2. Declare integer variables:
      tvQty, monitorQty, flashQty, hardQty, printerQty

3. Declare float variables:
      tvTotal, monitorTotal, flashTotal, hardTotal, printerTotal
      subtotal, tax, total

4. Prompt user to enter quantity for each product

5. Calculate total price for each product:
      tvTotal = tvQty * TV_PRICE
      monitorTotal = monitorQty * MONITOR_PRICE
      flashTotal = flashQty * FLASH_PRICE
      hardTotal = hardQty * HARD_PRICE
      printerTotal = printerQty * PRINTER_PRICE

6. Calculate subtotal:
      subtotal = sum of all item totals

7. Calculate tax:
      tax = subtotal * TAX_RATE

8. Calculate final total:
      total = subtotal + tax

9. Display formatted bill

END
===========================================================
*/

int main() {

    /* Constants */
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    /* Quantity Variables */
    int tvQty, monitorQty, flashQty, hardQty, printerQty;

    /* Total Variables */
    float tvTotal, monitorTotal, flashTotal, hardTotal, printerTotal;
    float subtotal, tax, total;

    /* Input */
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQty);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitorQty);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flashQty);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hardQty);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &printerQty);

    /* Calculations */
    tvTotal = tvQty * TV_PRICE;
    monitorTotal = monitorQty * MONITOR_PRICE;
    flashTotal = flashQty * FLASH_PRICE;
    hardTotal = hardQty * HARD_PRICE;
    printerTotal = printerQty * PRINTER_PRICE;

    subtotal = tvTotal + monitorTotal + flashTotal + hardTotal + printerTotal;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    /* Output */
    printf("\nQTY  DESCRIPTION         UNIT PRICE   TOTAL PRICE\n");
    printf("----------------------------------------------------------\n");
    printf("%-4d TV                 400.00       %.2f\n", tvQty, tvTotal);
    printf("%-4d Monitor            220.00       %.2f\n", monitorQty, monitorTotal);
    printf("%-4d Flash Drive         35.20       %.2f\n", flashQty, flashTotal);
    printf("%-4d Hard Drive         150.00       %.2f\n", hardQty, hardTotal);
    printf("%-4d Deskjet Printer    300.00       %.2f\n", printerQty, printerTotal);
    printf("----------------------------------------------------------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax: %.2f\n", tax);
    printf("Total: %.2f\n", total);
    printf("----------------------------------------------------------\n");

    return 0;
}
