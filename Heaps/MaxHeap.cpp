#include<iostream>
#include<vector>

#include <climits>
using namespace std;

class MaxHeap{
  //Create the heap vector to pushback the elements
  vector<int> heap;
  public:
  void upheapify(int ci){
    
    while(ci>0){//We can only go up to root
    int pi=(ci-1)/2;
      if(heap[pi]<heap[ci]){
        swap(heap[pi],heap[ci]);
        ci=pi;
      }else{
        break;
      }
    }
  }
  void push(int element){
    heap.push_back(element);
    upheapify(heap.size()-1);//calling upheapify function on the last index of vector
  }
  bool isEmpty(){
    return heap.size()==0;
  }
  int peek(){//display the top most ele
  if(isEmpty()) return INT_MIN;
   return heap[0];
  }
  void display(){
    cout<<"[";
    for(int i=0;i<heap.size();i++){
      cout<<heap[i]<<" ";
    }
    cout<<"]"<<endl;
  }
};
int main(){
 MaxHeap heap;
 heap.push(3);
 heap.push(4);
 heap.push(11);
 heap.push(9);
 heap.push(14);
 heap.push(-1);
 heap.push(30);
 heap.push(44);
 heap.push(50);
 heap.display();
 cout<<heap.peek();
 return 0;

}