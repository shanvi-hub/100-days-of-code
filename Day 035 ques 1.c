Q69: Find the second largest element in an array.

  #include <stdio.h>
   int main() {
  
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest element: %d\n", second_largest);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
