// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//     int i=0, j=0;
//     for (int l=0; l<m+n; l++){
//         printf("\n%d %d %d Array:", l, nums1[i], nums2[j]);
//         if ((nums1[i]<=nums2[j])&&(nums1[i]!=0)){
//             i++;
//             continue;
//         }
//         else{
//             for (int k=(m+n)-1; k>i; k--){
//                 nums1[k]=nums1[k-1];
//             }
//             nums1[i++]=nums2[j++];
//         }
//         for (int o=0; o<n+m; o++){
//             printf("%d", nums1[o]);
//         }
//     }
// }
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else if (nums1[i] < nums2[j])
        {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
}