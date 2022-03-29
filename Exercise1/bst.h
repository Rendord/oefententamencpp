#pragma once
#include <iostream>
template <typename T>
struct Node {
	T info;
	Node* right;
	Node* left;
};

template <typename T>
class BST {

public:
	Node* root;
	BST() {
		root = nullptr;
	};
	BST(Node root) {
		*this->root = root;
	};
	~BST() {
		destroyTree(root);
	};
	void destroyTree(Node* node) {
		if (node != nullptr) {
			destroyTree(node->left);
			destroyTree(node->right);
			delete node;
		}
	};
	void insert(T x) {
		if (root == nullptr) {
			root = new Node();
			root->info = x;
		}
		else {
			Node* current = root;
			while (current) {
				if (x == current->info) {
					break;
				}
				if (x < current->info) {
					if (current->left == nullptr) {
						current->left = new Node();
						current->left->info = x;
						break;
					}
					else {
						current = current->left;
					}
				}
				if (x > current->info) {
					if (current->right == nullptr) {
						current->right = new Node();
						current->right->info = x;
						break;
					}
					else {
						current = current->right;
					}
				}
			}
			return;
		}

	};
	void traverse() {
		if (root != nullptr) {
			printRecursive(root);
			std::cout << std::endl;
		}
	};
	void printRecursive(Node* node) {
		if (node != nullptr)
		{
			printRecursive(node->left);
			std::cout << node->info << " ";
			printRecursive(node->right);
		}
	};


};