#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    Node* next;

    Node(int data, int mini, int maxi){
        this->data = data;
        this->next = NULL;
        this->mini = mini;
        this->maxi = maxi;
    }

};

class Stack{
private:
    Node* top;

public: 
    Stack(){
        top = NULL;
    }

    void push(int x){
        if( !top ){
            Node* tNode = new Node(x, x, x);
            tNode->next = top;
            top = tNode;
        }
        else{
            int newMini = min(x, top->mini);
            int newMaxi = max(x, top->maxi);
            Node* tNode = new Node(x, newMini, newMaxi);
            tNode->next = top;
            top = tNode;
        }
    }

    void pop(){
        if( top ){
            cout << "UnderFlow" << endl;
            return;
        }
        Node* tNode = top;
        top = top->next;
        delete(tNode);
        cout << "Element Popped Succesfully.";
    }

    int topVal(){
        if( top )
            return top->data;
        return -1;
    }

    int minElement(){
        return top->mini;
    }

    int maxElement(){
        return top->maxi;
    }

};

int main(){
    int x;
    Stack st;
    int choice = -1;
    do{
        cout << "Choose one of the following options: \n";
        cout << "1. Push an element into the stack.\n";
        cout << "2. Pop the topMost element from the stack.\n";
        cout << "3. Return the topMost element in the stack. \n";
        cout << "4. Return the minimum element in the stack.\n";
        cout << "5. Return the maximum element from the stack.\n";
        cout << "6. Exit.\n";
        cout << "Enter your chpice: ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "Enter the value of the element to be inserted in the stack: ";
            cin >> x;
            st.push(x);
            break;
        
        case 2:
            st.pop();
            break;
        
        case 3:
            x = st.topVal();
            if( x == -1 )
                cout << "Stack is Empty";
            else
                cout << "TopMost Element in the stack is: " << x;
            cout << "\n";
            break;
        
        case 4:
            x = st.minElement();
            cout << "Minimum Element in the stack is: " << x;
            cout << "\n";
            break;
        
        case 5:
            x = st.maxElement();
            cout << "Maximum Element in the stack is: " << x;
            cout << "\n";
            break;
        
        case 6:
            break;
        
        default:
            cout << "Enter a valid choice from 1 to 6.\n";
            break;
        }
    }while(choice != 6);
    cout << "Thanks!! For using our System.";
    return 0;
}