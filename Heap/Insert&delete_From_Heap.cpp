// insert and delete from Heap
#include<iostream>
using namespace std;

class Heap{
    public: 
        int *arr;
        int size;
        int capacity;

    Heap(int capacity){
        this->arr = new int[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    void insert(int val){
        if(size == capacity){
            cout << "Heap is overflow" << endl;
            return;
        }

        // insert element in the last
        size++;
        int index = size;
        arr[index] = val;

        // check the inserted element is at there correct position
        // if not then place it at there position with Heapify
        while(index > 1){
            int parentIndex = index/2;

            if(parentIndex > 0 && arr[index] > arr[parentIndex]){
                swap(arr[index],arr[parentIndex]); 
                index = parentIndex;
            }
            else{
                return;
            }
        } 
    }

    // Delete Heap root node
    void DeleteFromHeap(){
        if(size == 0){
            cout << "Heap is Underflow" << endl;
            return;
        }

        // step-1 replace root node with last left leaf node
        arr[1] = arr[size];
        // step-2 delete last left node
        size--;

        // step-3 Maintain Heap
        int index = 1;
        while(index < size){
            int leftChildIndex = index*2;
            int rightChildIndex = index*2+1;
            int largestIndex = index;

            if(leftChildIndex <= size && arr[leftChildIndex] > arr[largestIndex]){
                largestIndex = leftChildIndex;
            }
            if(rightChildIndex <= size && arr[rightChildIndex] > arr[largestIndex]){
                largestIndex = rightChildIndex;
            }

            if(index != largestIndex){
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
            else{
                return;
            }
        }
    }

    void print(){
        cout << "Printing Heap:" << endl;
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h(20);
    h.insert(50);
    h.insert(40);
    h.insert(60);
    h.insert(30);
    h.insert(20);
    h.insert(10);

    h.print();

    h.DeleteFromHeap();
    h.print();

    return 0;
}