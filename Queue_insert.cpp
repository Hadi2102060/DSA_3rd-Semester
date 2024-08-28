#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int queue[MAX_SIZE];
    int front, rear, n;

public:
    
    Queue(int size = MAX_SIZE) {
        front = -1;
        rear = -1;
        n = size;
    }

    
    void enqueue(int item) {
        
        if ((front == 1 && rear == n) || (front == rear + 1)) {
            cout << "OVERFLOW" << endl;
            return;
        }

        
        if (front == -1) {  
            front = 1;
            rear = 1;
        } else if (rear == n) {
            rear = 1;
        } else {
            rear = rear + 1;
        }

        
        queue[rear] = item;
    }

    
    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i % n) + 1;
        }
        cout << endl;
    }
};

int main() {
    Queue q;  
     
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

   
    q.display();

    return 0;
}
