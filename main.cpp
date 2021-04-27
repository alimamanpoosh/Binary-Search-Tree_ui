#include <bits/stdc++.h>
using namespace std;

class node{
    private:
        int data;
        node *parent;
        node *right;
        node *left;
    public:
        node * getParent(){
            return parent;
        }
        void setParent(node * parent){
            this->parent = parent;
        }
        node * getRight(){
            return right;
        }
        void setRight(node * right){
            this->right = right;
        }
        node * getLeft(){
            return left;
        }
        void setLeft(node * left){
            this->left = left;
        }
};
class Binary_Search_Tree{
    private:
        node* root;
        int size;
    public:
        int getSize(){
            return size;
        }

        Binary_Search_Tree(){
            root = nullptr;
            size = 0;
        }

        ~Binary_Search_Tree();
        void insert(int data);
        void remove(int data);
        node *find(int data);
        //search about bfs
        void print();


};
int main(){


    return 0;
}
