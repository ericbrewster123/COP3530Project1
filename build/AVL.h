#pragma once
#include <string>
using namespace std;


struct Node {
    string name;
    string ufid;
    Node* left;
    Node* right;
    Node() : name(""), ufid(""), left(nullptr), right(nullptr) {}
};

class AVLTree {
public:
    Node* root;
    Node* Insert(Node* node, string name, string ufid);
    AVLTree() :  root() {}
};