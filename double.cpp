
 #include<iostream>
 using namespace std;

  class Node{
    public:
     int data;
     Node*prev;
     Node*next;
     Node( int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;

     }

 };
void print(Node* head){
    Node* temp= head; 
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp-> next;



        /* code */
    }
    cout<<endl;
    

} 
int getlength(Node* head){
     int length=0;
     Node* temp= head;
    while (temp!=NULL)
    {
        length++;
        temp= temp-> next;



    }
    return length;

}
 void insertathead( Node* &head  , int d){
    
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp; 
    

}
 void insertattail( Node* tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    temp = tail;



 }
 void insertatposition( Node* &tail, Node* &head, int position, int d){
      if (position == 1)
    {
        insertathead(head, d);
        return;

        /* code */
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    //   inserting at last position
    if (temp->next == NULL)
    {
        insertattail(tail,  d);
        return;
    }
    Node* nodetoinsert =new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev= nodetoinsert;
    temp->next=nodetoinsert; 
    nodetoinsert->prev=temp;

    

 }

int main(){
        Node *node1 = new Node(10);
           Node*head=node1;
           Node*tail=node1;
           print(head);
           insertathead( head, 11);
    print(head);
           insertathead( head, 11);
    print(head);
           insertathead( head, 11);
    print(head);
           insertathead( head, 11);
    print(head);
           insertattail( tail, 43);
    print(head);
    insertatposition(tail,head,2,33);
    print(head);
    insertatposition(tail,head,8,33);
    print(head);


}