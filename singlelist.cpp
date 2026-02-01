// #include<iostream>
// using namespace std;
// class Node{
//     public:
//    int data;
//    Node* next;


//    Node( int data){
//       this->data =data;
//       this->next=NULL;

//    }
  




// };
//  void insertathead(Node* &head, int d){
//      Node* temp = new Node(d);
//      temp->next=head;
//      head= temp;

//  }

// void insertattail(Node* &tail, int d){
//     Node* temp = new Node(d);
//     tail->next = temp;
//     temp= tail;

// }



//  void print(Node* &head){
//    Node* temp =head;
//    while(temp!= NULL){
//       cout<<temp->data<<" ";
//       temp= temp->next;

//    }
//    cout<<endl;

//  }


//  void insertatposition( Node* &tail,Node* &head, int position, int d){
// if(position ==1){
//    insertathead(head,d);
//    return;
// }
//    Node* temp = head;
//     int cnt =1;
//     while(cnt<position-1){
//       temp= temp->next;
//       cnt++;
//     }
//     if(temp->next=NULL){
//       insertattail(tail,d);
//       return;
//     }




//     Node* nodetoinsert= new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next =nodetoinsert;

//  }



//  int main(){




//    Node* node1 = new Node(10);
//    // cout<<node1->data <<endl;
//    // cout<<node1->next <<endl;


//    Node* head = node1;
//    Node* tail= node1;
//    print(head);
// //    insertathead(head,12);
// //    insertattail(tail,12);
// //    print(head);
//    // insertathead(head,15);
// // insertattail(tail,15);

// //    print(head);
// //    insertatposition(tail,head,4,33);
// //    print(head);



//  }

// deletion in  singly linked list





// deletion 

#include<iostream>
using namespace std;
 class Node{
    public:
     int data;
       Node* next;

    //     constructor 

       Node( int data ){
         this->data =data;
         this ->next =NULL;
}
      //  destructor
      ~Node(){
         int value =this ->data;
         if (this->next!=NULL)
         {
            delete next;
            next=NULL;

            /* code */
         }
         cout<<" memory is freee for node with data "<<value <<endl;
         
      }


 };
 void insertathead( Node* &head , int d){
    // new node create 
     Node* temp=new Node(d);
     temp->next=head;
     head=temp;


 }
 void insertattail( Node* &tail, int d){
    Node* temp= new Node(d);
    tail ->next=temp;
    tail=temp;




}
 void print(Node* &head){

    Node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;

        /* code */
    }
    cout<<endl;
    

 }
 void insertatposition( Node* &tail,Node* &head, int position, int d){
    if (position==1)
    {
        insertathead(head,d);
        return;
        /* code */
    }
    
    Node*temp=head;
     int cnt=1;
     while ( cnt< position-1)
     {
        temp=temp->next;
        cnt++;

     }
    //   inserting at last position 
    if (temp->next ==NULL)
    {
        insertattail(tail,d);
        return ;
        /* code */
    }
    
    //  creating a node for d
    Node* nodetoinsert =new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

     
   
 }

 void deletnode(  int position , Node* & head){
   //  delete first or start node 
    if (position==1)
    {
      Node* temp=head;
      head=head ->next;
      // memory free
      temp->next =NULL;
      delete temp;

      /* code */
    }
    else{
      // delete any middle node or last node 

      Node* curr=head;
      Node*prev=NULL;
       int cnt =1;
       while ( cnt<position)
       {
         prev=curr;
         curr= curr->next;
         cnt++;

         
       }


      prev ->next= curr ->next;
       curr->next=NULL;
       delete curr;
       

    }
    

 }


  int main(){
//     //  created a new node

     Node* node1=new Node(10);
//     //  cout<<node1->data<<endl;
//     //  cout<<node1->next<<endl;
//     //   head pointer to node 
      Node* head=node1;
      Node* tail=node1;

//       print( head);
      insertattail(tail,12);

    print(head);
       insertattail(tail,15);
       print(head);
       insertatposition( tail, head,4,22);
       print(head);
       insertatposition( tail, head,5,55);
       print(head);
       deletnode(4, head);
       print(head);







  } 