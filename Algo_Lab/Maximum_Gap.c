#include <stdio.h>
#include <stdlib.h>

void radix_sort(int arr[], int n)
{

    int maximum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (maximum < arr[i])
            maximum = arr[i];
    }

    int digits = 0;

    while (maximum > 0)
    {
        digits++;
        maximum /= 10;
    }

    int power = 1;

    for (int i = 0; i < digits; i++)
    {

        int new_array[n];

        int count[10];

        for (int j = 0; j < 10; j++)
            count[j] = 0;

        for (int j = 0; j < n; j++)
        {

            int num = (arr[j] / power) % 10;

            count[num]++;
        }

        for (int j = 1; j < 10; j++)
            count[j] += count[j - 1];

        for (int j = n - 1; j >= 0; j--)
        {

            int num = (arr[j] / power) % 10;

            new_array[count[num] - 1] = arr[j];
            count[num]--;
        }

        for (int j = 0; j < n; j++)
            arr[j] = new_array[j];

        power *= 10;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("0\n");
        return 0;
    }

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    radix_sort(nums, n);

    int max_diff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = nums[i + 1] - nums[i];
        if (diff > max_diff)
        {
            max_diff = diff;
        }
    }

    printf("%d\n", max_diff);

    return 0;
}