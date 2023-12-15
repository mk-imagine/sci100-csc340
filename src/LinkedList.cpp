//
// Created by Mark Kim on 3/30/23.
//

#include "LinkedList.h"
#include <string>

using namespace std;

template<class T>
struct Node{
    Node<T>* next;
    Node<T>* prev;
    T data;

    ~ Node(){
      next = NULL;
      prev = NULL;
      delete data; // do we need to delete data? is it on the runtime stack?
    }
};

template<class T>
class LinkedList {
    public:
        Node<T>* firstNode;
        Node<T>* lastNode;
        int size;

        LinkedList<T>() {
            firstNode = NULL;
            lastNode = NULL;
            size = 0;
        }

        void add(T data) {
            if(!firstNode) {
                firstNode = new Node<T>;
                lastNode = firstNode;
                firstNode->data = data;
                firstNode->next = NULL;
                firstNode->prev = NULL;
                size++;
            } else {
                Node<T>* newNode = new Node<T>;
                newNode->data = data;
                lastNode->next = newNode;
                newNode->prev = lastNode;
                lastNode = newNode;
                newNode = NULL;
                size++;
            }
        }

        void removeLast() {

        }

        string to_string() {
          string ret = "Linked List:\n";
          Node<T>* curr_node = firstNode;
          cout << std::to_string(size);
          for (int i = 0; i < size; i++) {
            ret = ret + "index: " + std::to_string(i) + " " + curr_node->data + "\n";
            curr_node = curr_node->next;
          }
          return ret;
        }
};

int main() {
    LinkedList<LinkedList<>> myList;
    myList.add("Hello");
    myList.add("My");
    myList.add("Name");
    cout << myList.to_string();
}