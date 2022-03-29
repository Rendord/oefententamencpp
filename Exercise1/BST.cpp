//#include "bst.h"
//
//BST::BST() {
//	root = nullptr;
//}
//
//BST::BST(Node root) {
//	*this->root = root;
//}
//
//BST::~BST() {
//	destroyTree(root);
//}
//
//void BST::destroyTree(Node* node) {
//	if (node != nullptr) {
//		destroyTree(node->left);
//		destroyTree(node->right);
//		delete node;
//	}
//}
//
//void BST::insert(int x) {
//	if (root == nullptr) {
//		root = new Node();
//		root->info = x;	
//	}
//	else {
//		Node* current = root;
//		while (current) {
//			if (x == current->info) {
//				break;
//			}
//			if (x < current->info) {
//				if (current->left == nullptr) {
//					current->left = new Node();
//					current->left->info = x;
//					break;
//				}
//				else {
//					current = current->left;
//				}
//			}
//			if (x > current->info) {
//				if (current->right == nullptr) {
//					current->right = new Node();
//					current->right->info = x;
//					break;
//				}
//				else {
//					current = current->right;
//				}
//			}
//		}
//		return;
//	}
//
//}
//
//void BST::traverse() {
//	if (root != nullptr) {
//		printRecursive(root);
//		std::cout << std::endl;
//	}
//}
//
//void BST::printRecursive(Node* node) {
//	if (node != nullptr) 
//	{
//		printRecursive(node->left);
//		std::cout << node->info << " ";
//		printRecursive(node->right);
//	}
//}
//
////void recursiveCheck(Node* node) {
////	if()
////}