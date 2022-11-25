#include <iostream>
#include <vector>
using namespace std;

// IMPLEMENTATION OF PRIORITY QUEUE USING MAX_HEAP
void heapify(vector<int> &PQ, int i) {
  int size = PQ.size();
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < size && PQ[l] > PQ[largest])
    largest = l;
  if (r < size && PQ[r] > PQ[largest])
    largest = r;

  if (largest != i) {
    // swap PQ[i] & PQ[largest]
    int temp = PQ[largest];
    PQ[largest] = PQ[i];
    PQ[i] = temp;
    heapify(PQ, largest);
  }
}

void insert(vector<int> &PQ, int newNum) {
  int size = PQ.size();
  if (size == 0) {
    PQ.push_back(newNum);
  } else {
    PQ.push_back(newNum);
    for (int i = size / 2 - 1; i >= 0; i--) {
      heapify(PQ, i);
    }
  }
}

void deleteNode(vector<int> &PQ, int num) {
  int size = PQ.size();
  int i;
  for (i = 0; i < size; i++) {
    if (num == PQ[i])
      break;
  }
  //swap PQ[i] & PQ[size - 1]
  int temp =PQ[size-1];
  PQ[size-1]=PQ[i];
  PQ[i]=temp;

  PQ.pop_back();
  for (int i = size / 2 - 1; i >= 0; i--) {
    heapify(PQ, i);
  }
}

// Print the tree
void printArray(vector<int> &PQ) {
  for (int i = 0; i < PQ.size(); i++)
    cout << PQ[i] << ", ";
  cout << "\n";
}

// Driver code
int main() {
    vector<int> PQ;
    int n, node;
    cout<<"Enter a number element to be inserted in a piority queue\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>node;
        insert(PQ,node);
    }

  cout << "Piority Queue[Max-heap] : ";
  printArray(PQ);

  cout<<"\nEnter a node to be deleted \n";
  cin>>node;
  deleteNode(PQ, node);

  cout << "\nAfter deleting an element  ";
  printArray(PQ);
}
