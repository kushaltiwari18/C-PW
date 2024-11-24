// ! Today's Checklist :-
// Bubble Sort Algorithm.
// Bubble Sort Time and space complexity.
// Maximum number of swap in worst case in Bubble Sort.
// How to optimize the bubble sort in the case of nearly sorted array?
// Stable and unstable sort.

// ? #Sorting --> ordering of element in increasing or decreasing order.

// ! Bubble Sort Algorithm
// ? " Repeatedly swap two adjacent element if in wrong order"
// x<y  --> right
// x>y  --> wrong order

// ! How to know how many passes are required?
// n elements  --> n - 1 elements at correct position

// ? Bubble Sort Code :-
/*  for( int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j]>v[j+1]){
                swap{v[j],v[j+1]}
            }
        }
    }
*/

// ! Bubble Sort is the stable sorting algorithm

// ! Selection Sort Algorithm
// ? "Repeatedly find minimum element in unsorted array and place it at beginning"
// Selection Sort is the unstable sorting algorithm


// ! Insertion Sort Algorithm
// ? "Repeatedly take elements from unsorted subarray & insert in sorted subarray"
// Insertion Sort is the stable sorting algorithm
// Application:- where array is almost sorted

