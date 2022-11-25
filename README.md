# DAA-Assignment-02
## Problem statement : 
##### Given an application and its implementation to demonstrate the implementation of data structures for handling the "Favorite" contact list in mobiles.
## Suggested Solution: 
##### Data structure which can be used to solve given problem is Priority Queue which being implemented using MAX-HEAP.
## Idea: 
##### We can save a Person’s Phone number in a priority queue along with the frequency of number of time the person is being called. As person’s number is being dial the frequency get incremented by 1. So the Person with highest frequency is placed at the top of the queue. And this way we can maintain a list of ‘Favorite Contact’ who are being called frequently.
##### A priority queue is a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority. That is, higher priority elements are served first. However, if elements with the same priority occur, they are served according to their order in the queue.
### Difference between Priority Queue and Normal Queue
##### In a queue, the first-in-first-out rule is implemented whereas, in a priority queue, the values are removed on the basis of priority. The element with the highest priority is removed first.
##### Priority queue can be implemented using an array, a linked list, a heap data structure, or a binary search tree. Among these data structures, heap data structure provides an efficient implementation of priority queues.
##### MAX-HEAP: Always store the data in descreasing order

# 1)Inserting an Element into the Priority Queue
##### a) Insert the new element at the end of the tree.
##### ![image](https://user-images.githubusercontent.com/102198997/203897722-0e3d3faf-3658-424a-ada8-c69161a65357.png)
##### b) Heapify the tree.
##### ![image](https://user-images.githubusercontent.com/102198997/203897760-191e176b-672a-4f4f-a93d-162f903b0e3f.png)
# 2) Deleting an Element from the Priority Queue
##### a) Select the element to be deleted.
##### ![image](https://user-images.githubusercontent.com/102198997/203897863-bac8c077-85f1-43e5-80b6-e36e25ad6049.png)
##### b) Swap it with the last element.
##### ![image](https://user-images.githubusercontent.com/102198997/203897891-144529d6-e0d0-4506-8263-32517dc1ff48.png)
##### c) Remove the last element.
##### ![image](https://user-images.githubusercontent.com/102198997/203897912-bdd66ba6-402c-430f-8efc-0a46337657fa.png)
##### d) Heapify the tree.
##### ![image](https://user-images.githubusercontent.com/102198997/203897938-312d85a3-922d-43c9-b860-7cd77d9edcd4.png)

# OUTPUT OF SUGGESTED SOLUTION
###### a) We are calling a person and each time when we are calling a person its frequency is incremented by 1
###### ![image](https://user-images.githubusercontent.com/102198997/203898125-4836e80d-d7ec-4a63-8c2b-8425b1c70324.png)
###### ![image](https://user-images.githubusercontent.com/102198997/203898289-fabeda43-ea9c-4535-b7ef-b7df4eb8b859.png)
###### b) We are saving a Person's Name, Mobile number and its frequency as a non primitive data type using class in c++ in a Piority Queue [Max-Heap]
###### c) And we are using frequency as a piority 
###### d) As by default Priority Queue implemented using Max-Heap maintains a data in descending order of their priority therefore, we get a desired result that is "Favorite Contact list" as a output.
###### ![image](https://user-images.githubusercontent.com/102198997/203898720-a475564f-c9f3-4d06-b1db-f613d00810a0.png)
# Priority Queue Applications
##### Dijkstra's algorithm
##### for implementing stack
##### for load balancing and interrupt handling in an operating system
##### for data compression in Huffman code
