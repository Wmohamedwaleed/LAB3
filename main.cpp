#include <iostream>
#include "LinkedList.h"
using namespace std;

int* linearSearch( int *items , int size, int search,int &itteration){
    int j=0;
    int* arr = new int[size];
    for(int i=0; i<size; i++){
        if(items[i]==search){
             arr[j]=i;
              j++;}
    }
    itteration=j;
    return arr;
}
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1;
}


   void LinkedList::bubbleSort()  {
        if (!head){
         return;
         }

        bool swapped;
        Node* current;

        do {
            swapped = false;
            current = head;

            while (current->Next) {

                 if (current->Data  >  current->Next->Data) {
                    int temp = current->Data;
                    current->Data = current->Next->Data;
                    current->Next->Data = temp;

                    swapped = true;
                }
                current = current->Next;
            }
        } while (swapped);
    }


int main()
{  ////////////////////////////////////////////////////////////////////////////
    int arr[6]={1,2,0,0,0,7};
    int itteration ;
    int* arr2 = linearSearch(arr, 6, 3,itteration);
    if(itteration==0)
    {
        cout<<"not found";
    }
    else{
    for (int i = 0; i < itteration; i++) {
            cout << arr2[i] << " ";
        }
    }
    //////////////////////////////////////////////////////////////////////////
    LinkedList list;

    list.add(9);
    list.add(8);
    list.add(7);
    list.add(6);
    list.add(5);


    list.display();

    list.bubbleSort();

    list.display();
    return 0;
}
