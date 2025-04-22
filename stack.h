#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : private std::vector<T>
{
public:
    Stack() = default;
    ~Stack() = default;

    bool empty() const{
        return this -> std::vector<T>::empty();
    }
    size_t size() const{
        return this->std::vector<T>::size();
    }
    void push(const T& item){
        this->std::vector<T>::push_back(item);
    }
    void pop(){  // throws std::underflow_error if empty
        if(this->empty()){
            throw std::underflow_error("stack is empty");
        }
        this->std::vector<T>::pop_back();
    }
    const T& top() const{ // throws std::underflow_error if empty
        if(this->empty()){
            throw std::underflow_error("Stack is empty");
        }
        return this->std::vector<T>::back();
    }
    // Add other members only if necessary
};


#endif