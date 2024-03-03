#include <stdio.h>

int main()
{
    int nums[] = {1, 3, 4, 6, 7, 9};
    int target = 15;

    int ans[2];
    int get_ans = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans[0] = nums[i];
                ans[1] = nums[j];
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}