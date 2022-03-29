#include <iostream>
#include "bst.h"


void IntTree()
{

//    BST<int> bst;
	BST bst; 

    bst.insert(8);
    bst.insert(4);
    bst.insert(12);
    bst.insert(2);
    bst.insert(6);
    bst.insert(10);
    bst.insert(14);
    bst.insert(1);
    bst.insert(3);
    bst.insert(5);
    bst.insert(7);
    bst.insert(9);
    bst.insert(11);
    bst.insert(13);
    bst.insert(15);
    bst.insert(16);
    bst.insert(0);
    bst.traverse();
  //  bst.remove(15);  // test all cases yourself !
    bst.traverse();
    
}

void StringTree()
{
    /*
    BST<std::string> bst;
    bst.insert("hoi");
    bst.insert("aap");
    bst.insert("noot");
    bst.insert("mies");
    bst.traverse();
    bst.remove("hoi");
    bst.traverse();
    bst.remove("bla");
    */
}

void DoubleTree()
{
    /*
    BST<double> bst;
    bst.insert(1.2);
    bst.insert(2.4);
    bst.insert(3);
    bst.insert(0.5);
    bst.insert(0.7);
    bst.traverse();
    bst.remove(0.5);
    bst.traverse();
    */
}

int main()
{
    IntTree();
    StringTree();
    DoubleTree();
    return 0;
}
