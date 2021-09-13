// que link: https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1/
class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                count++;
            }
        }
        int ans = count*(count-1)/2;
        return ans;
    }

};
