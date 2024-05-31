int main(){
int first_number;
printf("Pls enter a interger number!/n");
scanf("%d", &first_number);

int second_number;
printf("Pls enter a interger number!/n");
scanf("%d", &second_number);

int Min = Minimum(first_number, second_number);
int Max = Maximum(first_number, second_number);
int Mean = Mean(first_number, second_number);

printf("Max{%d, %d} = %d/n",first_number, second_number, Min);
printf("Min{%d, %d} = %d/n",first_number, second_number, Max);
printf("Mean[%d, %d] = %f/n", first_number, second_number, Mean);

}