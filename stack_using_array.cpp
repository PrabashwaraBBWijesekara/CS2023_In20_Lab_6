#include <iostream>
#include <ctime>

#define MAX_SIZE 100 

using namespace std;


struct Stack {
    int top;
    int arr[MAX_SIZE];

    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void Push(int value) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
    }

    int Pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    int topMost() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    void Display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    
    
    Stack s;
    
    clock_t start_time = clock();
    
    s.Push(8);
    s.Push(10);
    s.Push(5);
    s.Push(11);
    s.Push(15);
    s.Push(23);
    s.Push(6);
    s.Push(18);
    s.Push(20);
    s.Push(17);
    
    s.Display();

    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    
    s.Display();
    
    s.Push(4);
    s.Push(30);
    s.Push(3);
    s.Push(1);
    
    s.Display();
    
    clock_t end_time = clock();
    double duration = double(end_time - start_time) / CLOCKS_PER_SEC;
    cout << "Time taken: " << duration/1.0 << " seconds." << endl;

  

    return 0;
}