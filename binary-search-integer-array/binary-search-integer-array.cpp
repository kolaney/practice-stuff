// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool binary_search(int arr[], int size, int n)
{
    // Add your code below this line. Do not modify any other code.                   
    int mid = size/2;
    int left = 0;
    int right = size-1;
    while(left <= right){
        mid = (left+right)/2;
        if(arr[mid] == n){
            return true;
        }
        if(arr[mid] < n){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return false;
    // Add your code above this line. Do not modify any other code.
}