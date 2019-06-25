#include "Queue.hpp"

Queue::Queue(){
    list = new LinkedList();
}

Queue::~Queue(){
    delete list;
}

unsigned int Queue::size(){
    return list->length();
}

void Queue::push(int data){
    return list->push_back(data);
}

int Queue::pop(){
    return list->pop_front();
}

int Queue::front(){
    return list->at(0);
}

int Queue::back(){
    return list->at(list->length()-1);
}

bool Queue::empty(){
    return (list->length()== 0) ? true: false;
}

void Queue::clear(){
    return list->clear();
}
