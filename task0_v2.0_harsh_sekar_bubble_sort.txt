----------------------------------------------------BUBBLE SORT ALGORITHM AND CODE---------------------------------------------------------

Notion Of Bubble Sort

-Bubble sort is a sorting algorithm that compares adjacent elements of an array and swaps them if they are in wrong order.Using this algorithm the elements can be arranged either in ascending or descending order. It is the simplest way to sort the elements in an array.

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx---------BUBBLESORT ALGORITHM--------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

Step 1: Start
Step 2: Enter The Number Of Elements 'n' You Want To Store Into The Array And Input The Array Elements.
Step 3: Display The Unsorted Array.
Step 4: bubblesort Function Is Called.
Step 5: In the bubblesort(), the outer loop represents the index position of the element 'i'. It iterates from 0 to n-1.
Step 6: An inner loop is implemented that assigns index 'j' to the current element and index 'j+1' to the next element.
        For Ascending Order (if(ar[j]>ar[j+1]) : If The current element (jth) is greater than the next element (j+1 th), then the elements are swapped.
                             - t=ar[j];
                             - ar[j]=ar[j+1];
                             - ar[j+1}=t;
        For Descending Order (if(ar[j]<ar[j+1]): If the current element (jth) is lesser than the next element (j+1 th), then the elements are swapped as shown above.
Step 7: Repeat step 6 until one pass is complete.
Step 8: Repeat steps 5 and 6 until the index position navigates through the whole array and all necessary swaps have been completed to yield the array in ascending or descending order.
Step 9:disp_sort() is called and the sorted array is displayed.
Step 10: Stop



xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx-------BUBBLESORT CODE----xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include<iostream.h>
#include<conio.h>
int i,j;                                                        // global variables to be used in the functions 
void bubblesort(int a[20],int num)                             // function to carry out the bubble sorting operation
{
  for(int i=0;i<num;i++)
     {
            int t=a[i];
        for(int j=0;j<num-1-i;j++)
           {
              if(a[j]>a[j+1]) 
                {
                   t=a[j];
                   a[j]=a[j+1];
                   a[j+1]=t;
                }
           }
     }
}
void disp_sort(int arr[20],int no)                           // function to display the sorted array 
{
   cout<<"\n The Sorted Array Is:";
   for(int i=0;i<no;i++)
       cout<<arr[i]<<" ";
}
void main()
{
   int ar[100],n;
   cout<<"\n Enter The Number Of Elements In The Array:";
   cin>>n;
   cout<<"\n Input The Array Elements:";
   for(int i=0;i<n;i++)
      cin>>ar[i];
   cout<<"\n The Unsorted Array Is:";
   for(i=0;i<n;i++)
   cout<<ar[i]<<" ";
   bubblesort(ar,n);
   disp_sort(ar,n);
   getch();
}
