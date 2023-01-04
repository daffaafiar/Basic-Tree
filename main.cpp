    #include <iostream>
    #include "Tree.h"

    using namespace std;

    int main()
    {
        cout << "\n===================================================================" << endl;
        adrNode root = NULL;
        int x[9] = {5,3,9,10,4,7,1,8,6};

        for (int i=0; i<9; i++){
            adrNode new_node = newNode_1301213215(x[i]);
            root = insertNode_1301213215(root, new_node);
        }

        for (int i = 0; i < 9; i++) {
            cout << x[i] << " ";
        }

        cout << "\n\nPre Order\t\t  : ";
        printPreOrder_1301213215(root);

        cout << "\n\nDescendent of Node 9\t  : ";
        printDescendant_1301213215(root, 9);

        cout << "\n\nSum of BST Info\t\t  : " << sumNode_1301213215(root);
        cout << "\nNumber of Leaves\t  : " << countLeaves_1301213215(root);
        cout << "\nHeight of Tree(ranks)\t  : " << heightTree_1301213215(root)-1;
        cout << "\nDepth of the tree\t  : " << heightTree_1301213215(root);

        cout << "\n===================================================================" << endl;

        return 0;
    }
