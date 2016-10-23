//
//  BinaryTreeSearch.cpp
//  DFS and BFS
//
//  Created by DuanYolanda on 06/10/16.
//  Copyright © 2016 Yolanda. All rights reserved.
//

#include "binarytree.h"

int main() {
    //Build tree in preorder traversal
    Element data[15] = {'A', 'B','D', '#','#', 'E','#', '#','C', 'F','#', '#','G', '#','#'};
    Tree tree;
    treeNodeConstructor(tree, data);
    printf("The result of DFS：");
    depthFirstSearch(tree);
    printf("\n\nThe result of BFS：");
    breadthFirstSearch(tree);
    printf("\n\n");

    return 0;
}
