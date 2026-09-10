class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    //    vector<int> res(m+n);
    //    int i=0;
    //    int j=0;
    //    int k=0;

    //    while(i<m && j<n){
    //     if (nums1[i]<nums2[j]){
    //         res[k]= nums1[i];
    //         i++;
    //     }
    //     else{
    //         res[k]= nums2[j];
    //         j++;
    //     }
    //     k++;
    //    }
    //    if(i==m){
    //     while(j<n){
    //         res[k]=nums2[j];
    //         k++;
    //         j++;
    //     }
    //    }
    //    if(j==n){
    //     while(i<m){
    //         res[k]=nums1[i];
    //         k++;
    //         i++;
    //     }
    //    }
    //    for(int x = 0; x < m + n; x++){
    //         nums1[x] = res[x];
    //     }


    int i= m-1;
    int j= n-1;
    int k= n+m-1;

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
        }else{
            nums1[k]= nums2[j];
            j--;
        }
        k--;
    }
    while (j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
    }

    }   
};