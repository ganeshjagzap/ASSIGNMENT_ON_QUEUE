#include<iostream>
#define max 50
using namespace std;
class queues{
int front;
int rear;
int arr[max];
public:
queues(){
    front =-1;
    rear=-1;
}
bool isempty(){
    if(front==-1 && rear==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isfull(int maxqueue){
    if(rear==maxqueue){
        return true;
    }
    else{
        return false;
    }
}
void insertnum(int a,int maxqueue){
if(isfull(maxqueue)==true){
    cout<<"Queue already full"<<endl;
}
else{
    if(isempty()==true){
        front++;
        rear++;
        arr[rear]=a;
        cout<<arr[rear]<<" is in the queue"<<endl;
    }
    else{
        rear++;
        arr[rear]=a;
        cout<<arr[rear]<<" is in the queue"<<endl;
    }
}
}
void deletenum(){
    if(isempty()==true){
        cout<<"Queue already empty"<<endl;
    }
    else{
        int s=arr[front];
        front++;
        cout<<s<<" is deleted from the queue"<<endl;
    }
}
void displayqueue(int n){
    if(isempty()==true){
        cout<<"Queue is empty cannot display"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
};
int main(){
int n,num;
queues q1;
cout<<"Enter number of items in the queue ";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter number ";
    cin>>num;
    q1.insertnum(num,n);
}
q1.displayqueue(n);
q1.deletenum();
q1.displayqueue(n);

}