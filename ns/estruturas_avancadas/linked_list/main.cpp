#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

class Node{
	private:
		int data;
		Node* next;
		
		friend class LinkedList;
	
	public:
		Node(int d = 0) : data(d), next(NULL){}
};

class LinkedList{
	private:
		Node *first, *last;
		int sz;
	
	public:
		LinkedList() : first(NULL), last(NULL), sz(0){}
		
		bool isEmpty() { return (sz==0); }
		
		void insertFront(int data){
			if(isEmpty()){
				first = new Node(data);
				last=first;
			} else {
				Node *newNode = new Node(data);
				newNode->next = first;
				first = newNode;
			}
			sz++;
		}
		
		void insertBack(int data){
			if(isEmpty()){
				last = new Node(data);
				first=last;
			} else {
				last->next = new Node(data);
				last = last->next;
			}
			
			sz++;
		}
		
		void removeFront(){
			if(!isEmpty()){
				Node *tmp = first;
				first = first->next;
				
				delete tmp;
				sz--;
				
				if(isEmpty()) first=NULL, last=NULL;
			}
		}
		
		int front() { return first->data; }
		
		int back() { return last->data; }
		
		int size() { return sz; }
		
		void clear(){
			while(!isEmpty()) removeFront();
		}
		
		bool find(int data){
			Node *cur = first;
			
			while(cur!=NULL){
				if(cur->data == data) return true;
				cur = cur->next;
			}
			
			return false;
		}
};

class Queue{
	private:
		LinkedList q;
	
	public:
		bool empty() { return q.isEmpty(); }
		
		int size() { return q.size(); }
		
		int front() { return q.front(); }
		
		int push_back(int data) { q.insertBack(data); }
		
		void pop_front() { q.removeFront(); }
}

class Stack{
	private:
		LinkedList s;
	
	public:
		bool empty() { return s.isEmpty(); }
		
		int size() { return s.size(); }
		
		int back() { return s.front(); }
		
		void push_back(int data) { s.insertFront(data); }
		
		void pop_back() { s.removeFront(); }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	return 0;
}
