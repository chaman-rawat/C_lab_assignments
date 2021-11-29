int is_armstrong(int);
int cube_of(int);

int is_armstrong(int number)
{
    int sum = 0,
        temp = number;
    do
        sum += cube_of(temp % 10);
    while ((temp /= 10) != 0);

    return sum == number;
}

int cube_of(int number)
{
    return number * number * number;
}