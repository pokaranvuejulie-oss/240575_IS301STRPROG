#include <stdio.h>
#include <stdlib.h>

int main() {
    // File pointers
    FILE *inFile, *outFile;
    
    // Variables to store employee data
    char empNo[10], exempt;
    int dept, hoursWorked;
    float payRate, basePay;
    
    // Open input file for reading
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1; // terminate program
    }

    // Open output file for writing
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1; // terminate program
    }

    // Read and discard header line
    char header[100];
    fgets(header, sizeof(header), inFile);

    // Write headers to output file
    fprintf(outFile, "%-12s %-10s %-8s %-6s %-13s %-8s\n",
            "Emp No.", "Department", "PayRate", "Exempt", "HoursWorked", "BasePay");

    // Read employee data and calculate base pay
    while (fscanf(inFile, "%s %d %f %c %d", empNo, &dept, &payRate, &exempt, &hoursWorked) == 5) {
        basePay = payRate * hoursWorked;
        fprintf(outFile, "%-12s %-10d %-8.2f %-6c %-13d %-8.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    // Close files
    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}
