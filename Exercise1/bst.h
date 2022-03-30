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
	typename Node<T>* root;
	BST() {
		root = nullptr;
	};
	BST(Node<T> root) {
		*this->root = root;
	};
	~BST() {
		destroyTree(root);
	};
	void destroyTree(Node<T>* node) {
		if (node != nullptr) {
			destroyTree(node->left);
			destroyTree(node->right);
			delete node;
		}
	};
	void insert(T x) {
		if (root == nullptr) {
			root = new Node<T>();
			root->info = x;
		}
		else {
			Node<T>* current = root;
			while (current) {
				if (x == current->info) {
					break;
				}
				if (x < current->info) {
					if (current->left == nullptr) {
						current->left = new Node<T>();
						current->left->info = x;
						break;
					}
					else {
						current = current->left;
					}
				}
				if (x > current->info) {
					if (current->right == nullptr) {
						current->right = new Node<T>();
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
	void printRecursive(Node<T>* node) {
		if (node != nullptr)
		{
			printRecursive(node->left);
			std::cout << node->info << " ";
			printRecursive(node->right);
		}
	};
	void remove(int value) {
		removeNode(root, value);
	}
	void removeNode(Node<T>* node, int value) {
		if (node != nullptr) {
			if (node->info == value) {
				removeHelper(node);
			}
			else if (node->info < value) {
				removeNode(node->right, value);
			}
			else {
				removeNode(node->left, value);
			}
		}
	};

	void removeHelper(Node<T>* node) {
		if (node->left == nullptr && node->right == nullptr) {
			delete node;
		}
		else if (node->left != nullptr && node->right != nullptr) {
			Node<T> node2 = inOrderSuccesor(node);
			node->info = node2.info;
			node->left = node2.left;
			node->right = node2.right;
			removeHelper(&node2);
		}
		else {
			if (node->left != nullptr) {
				Node<T>* node2 = node->left;
				node->info = node2->info;
				node->left = node2->left;
				node->right = node2->right;
				removeHelper(node2);
			}
			else {
				Node<T>* node2 = node->right;
				node->info = node2->info;
				node->left = node2->left;
				node->right = node2->right;
				removeHelper(node2);
			}
		}
	};

	Node<T> inOrderSuccesor(Node<T>* node) {
		Node<T>* minv = node;
		while (node->left != nullptr) {
			minv = node->left;
			node = node->left;
		}
		return *minv;
	};
};