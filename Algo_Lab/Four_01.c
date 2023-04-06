#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

int n;
int t[501][501]; // For memoization

int solve(int nums[], int i, int j){
    // BASE CASES
    if(i > j)
        return 0;
    if(i == j){    // Only one element exists
        int temp = nums[i];
        if(i - 1 >= 0)
            temp *= nums[i - 1];
        if(i + 1 < n)
            temp *= nums[i + 1];
        return temp;
    }
    if(t[i][j] != -1)  // Check if the solution is already stored for this subproblem
        return t[i][j];
    int ans = 0;
    for(int k = i; k <= j; k++){
        int temp = nums[k];
            temp *= nums[j + 1];

        if(i - 1 >= 0) // As balloon i- 1 will become adjacent to k after bursting  i  to k -1 balloons
            temp *= nums[i - 1];

        // Recursively solve the left and right subproblems and add their contribution
        temp += (solve(nums, i, k - 1) + solve(nums, k + 1, j));

        // If this choice of k yields a better answer
        ans = max(ans, temp);
    }
    return t[i][j] = ans;
}

int maxCoins(int nums[], int numsSize) {
    memset(t, -1, sizeof(t));

    
    int arr[503] = {1};
    for(int i=0; i<numsSize; i++) 
        arr[i+1] = nums[i];
    arr[numsSize+1] = 1;
    n = numsSize + 2;

    return solve(arr, 1, n - 2);
}

int main() {
    int nums[] = {1,5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result = maxCoins(nums, numsSize);
    printf("ans is :  %d\n", result); 
    return 0;
}