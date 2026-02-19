#include <stdio.h>



int addnumbers(int a, int b){
    int sum = a + b;
    return sum;
}


int main(){
    int num1 = 5;
    int num2 = 7;

    int result = addnumbers(num1, num2); // Function call
    cout <<"The sum of" << num1 << " and " << num2 << " is " << result << end1;
    return 0;
}