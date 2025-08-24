   #include<iostream>
   #include<string>
	using namespace std;
	
      class node{
          int data; 
          node* next;
          public:
          node(int val){
              data=val;
              next=NULL;
          }
          friend class list;
      };
          
      class list{
              node* head;
              node* tail;
              public:
              list(){
                 head=NULL;
                 tail=NULL;
              }
              void front_push(int val){
                   node *newnode = new node(val);
                  if(head==NULL){
                  head=newnode;
                  tail=newnode;
                  cout<< "inserted in front "<< val<<endl;
              }else{
                  newnode->next=head;
                  head=newnode;
                   cout<< "inserted in front "<< val<<endl;
              }
              }
              void back_push(int val){
                  node *newnode = new node(val);
                 
                  if(head==NULL){
                      head=newnode;
                      tail=newnode;
                       cout<< "inserted in back "<< val<<endl;
                  }else{
                      node *temp = head;
                      while(temp!=NULL){
                          if(temp->next==NULL){
                              temp->next=newnode;
                              tail=newnode;
                               cout<< "inserted in back "<< val<<endl;
                              break;
                          }
                          temp=temp->next;
                      }
                  }
              }
              void print(){
                  node* temp=head;
                  while(temp!=NULL){
                      int d=temp->data;
                      cout<<d<<endl;
                      temp=temp->next;
                  }
              }
          };
      
	int main(){
	 list ll;
	 ll.front_push(1);
	 ll.back_push(3);
	  ll.back_push(3);
	  ll.front_push(1);
	   ll.back_push(3);
	    ll.back_push(3);
	 ll.print();
	  }
