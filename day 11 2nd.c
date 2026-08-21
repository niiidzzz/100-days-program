#include <stdio.h>
int main() {
float costprice ,sellingprice , profit , loss , percentage;
printf("enter costprice:");
scanf("%f", &costprice);
printf("enter sellingprice:");
scanf("%f", &sellingprice);
if (sellingprice > costprice) {
profit = sellingprice - costprice;
percentage = (profit/costprice)*100;

printf("profit is : %.2f\n", profit);
printf("percentage is : %.2f\n", percentage);

} 
else if (costprice > sellingprice) {
loss = costprice - sellingprice;
percentage = (loss/costprice)*100;

printf("profit is: %.2f\n", loss);
printf("percentage is : %.2f\n", percentage);
} 
else {
printf("no profit,no loss:");
} 
return 0;
}



