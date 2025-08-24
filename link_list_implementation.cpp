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
          ~node(){
              if(next!=NULL){
                  delete next;
                  next=NULL;
                  cout<<"node "<<data<<" \n";
              }
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
              ~list(){
              if(head!=NULL){
                  delete head;
                  head=NULL;
                  cout<<"head";
              }}
              void front_push(int val){
                   node *newnode = new node(val);
                  if(head==NULL){
                  head=newnode;
                  tail=newnode;
                //  cout<< "inserted in front "<< val<<endl;
              }else{
                  newnode->next=head;
                  head=newnode;
                //   cout<< "inserted in front "<< val<<endl;
              }
              }
              void back_push(int val){
                  node *newnode = new node(val);
                 
                  if(head==NULL){
                      head=newnode;
                      tail=newnode;
                      // cout<< "inserted in back "<< val<<endl;
                  }else{
                      node *temp = head;
                      while(temp!=NULL){
                          if(temp->next==NULL){
                              temp->next=newnode;
                              tail=newnode;
                             //  cout<< "inserted in back "<< val<<endl;
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
                      cout<<d<<"->";
                      temp=temp->next;
                  }
                  cout<<"NULL\n";
              }
              void insert(int val, int pos){
                  node* newnode= new node(val);
                  node* temp=head;
                  for(int i=0; i<pos-1; i++){
                      temp=temp->next;
                  }
                  newnode->next=temp->next;
                  temp->next=newnode;
              }
              void pop_front(){
                  node* temp=head;
                  head=head->next;
                  temp->next=NULL;
                  delete temp;
              }
              void pop_back(){
                  node* temp=head;
                  while(temp->next->next!=NULL){
                      temp=temp->next;
                  }
                  temp->next=NULL;
                  delete tail;
                  tail=temp;
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
	 ll.pop_front();
	 ll.pop_front();
	 ll.print();
	 ll.insert(5,3);
	 	 ll.print();
	 	 ll.pop_back();
	 	 ll.pop_back();
	 	 ll.print();
	  }
