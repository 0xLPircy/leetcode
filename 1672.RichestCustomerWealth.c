int maximumWealth(int **accounts, int accountsSize, int *accountsColSize)
{
    int sum, max = 0;
    for (int i = 0; i < accountsSize; i++)
    {
        sum = 0;
        for (int j = 0; j < (*accountsColSize); j++)
        {
            sum = sum + accounts[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    // printf("%d", sum[0]);
    return (max);
}