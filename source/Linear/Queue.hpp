#pragma once
<<<<<<< HEAD
#include "LinkedList.hpp"
=======

#include "LinkedList.hpp"

>>>>>>> upstream/master
/** Queue
 * A container class that stores data using a FIFO
 * (first in, first out) scheme.
 */
class Queue {
 private:
  LinkedList* list;
<<<<<<< HEAD
=======

>>>>>>> upstream/master
 public:
  Queue();
  ~Queue();

  /** size()
   * Returns the size of the queue.
   */
  unsigned int size();

  /** push(int data)
   * Pushes a node containing the given data to the back of the queue.
   */
  void push(int data);

  /** pop()
   * Removes and returns the data at the front of the queue.
   */
  int pop();

  /** front()
   * Returns the data at the front of the queue without changing the queue.
   */
  int front();

  /** back()
   * Returns the data at the back of the queue without changing the queue.
   */
  int back();

  /** empty()
   * Returns whether or not the queue is empty.
   */
  bool empty();

  /** clear()
   * Clears the entire stack.
   */
  void clear();
};