/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double *convertTemperature(double celsius, int *returnSize)
{
    *returnSize = 2;
    double *ans = malloc(2 * sizeof(double));
    double kelvin = (double)celsius + 273.15;
    double fah = (double)celsius * 1.80 + 32.00;
    ans[0] = kelvin;
    ans[1] = fah;
    return ans;
}