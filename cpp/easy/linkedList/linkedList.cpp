#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

// BUG everytime I delete something, weird things happen, either it is a
// segfault or it just prints in an infinite loop

struct node {
  string nodeName;
  node *next;
  node *prev;
};

node *createNewNode(node *root, node *current) {
  string nameInput;
  cout << "input new node name: ";
  cin >> nameInput;
  node *newNode = new node;
  newNode->nodeName = nameInput;
  newNode->next = nullptr;
  if (root->next == nullptr) {
    root->next = newNode;
    newNode->prev = root;
    newNode->next = nullptr;
  } else {
    while (true) {
      if (current->next == nullptr) {
        break;
      }
      current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
    newNode->next = nullptr;
  }
  return newNode;
}

void printCurrentNode(node *currentNode) {
  if (currentNode == NULL) {
    cout << "no current node, create a new node\n";
  } else {
    cout << "this is current node name: " << currentNode->nodeName << '\n';
  }
}

node *nextNode(node *currentNode) {
  node *curr = currentNode;
  if (currentNode == NULL) {
    cout << "no current node, create a new node\n";
  } else if (currentNode->next == nullptr) {
    cout << "no next node, create a new node\n";
  } else {
    curr = currentNode->next;
    cout << "current  node: " << curr->nodeName << '\n';
  }
  return curr;
}

node *previousNode(node *currentNode) {
  node *curr = currentNode;
  if (currentNode == NULL) {
    cout << "no current node, create a new node\n";
  } else if (currentNode->prev == nullptr) {
    cout << "at the root node\n";
  } else {
    curr = currentNode->prev;
    cout << "current  node: " << curr->nodeName << '\n';
  }
  return curr;
}

// BUG runs into segfault after deleteWholeList and then calling printWholeList
void printWholeList(node *root) {
  node *currentNode = root;
  while (true) {
    if (currentNode == NULL) {
      break;
    }
    cout << currentNode->nodeName << ", ";
    currentNode = currentNode->next;
  }
  cout << '\n';
  delete currentNode;
}

// BUG runs into segfault when deleting last node
// TODO make it so that it doesn't delete root node, unless user presists
node *deleteNode(node *currentNode) {
  if (currentNode == NULL) {
    cout << "no current node, create new node";
    return currentNode;
  }
  node *prev = currentNode->prev;
  cout << "set prev: " << prev->nodeName << '\n';
  node *next;
  if (currentNode->next != nullptr) {
    next = currentNode->next;
    cout << "set next: " << next->nodeName << '\n';
    prev->next = next;
    next->prev = prev;
  }
  delete currentNode;
  cout << "current node: " << prev->nodeName << '\n';
  return prev;
}

node *deleteWholeList(node *root) {
  node *temp = root->next;
  cout << "deleting all nodes except root\n";
  while (temp != NULL) {
    node *deleteMe = temp;
    temp = temp->next;
    delete deleteMe;
  }
  return root;
}

int main() {
  node *root = new node;
  root->next = nullptr;
  root->prev = nullptr;
  root->nodeName = "root node";

  node *currentNode = new node;

  while (true) {
    char input;
    cout << "linked list traversal\n";
    cout << "insert new node (i)\n";
    cout << "current node (c)\n";
    cout << "next node (n)\n";
    cout << "previous node (p)\n";
    cout << "delete node (d)\n";
    cout << "print whole list (P)\n";
    cout << "delete whole list (D)\n";
    cout << "quit (q)\n";
    cout << ": ";
    cin >> input;

    bool quitFlag = false;
    switch (input) {
    case 'q':
      quitFlag = true;
      break;
    case 'i':
      currentNode = createNewNode(root, currentNode);
      break;
    case 'c':
      printCurrentNode(currentNode);
      break;
    case 'n':
      currentNode = nextNode(currentNode);
      break;
    case 'p':
      currentNode = previousNode(currentNode);
      break;
    case 'P':
      printWholeList(root);
      break;
    case 'd':
      currentNode = deleteNode(currentNode);
      break;
    case 'D':
      currentNode = deleteWholeList(root);
      break;
    default:
      cout << "invalid input\n";
      break;
    }
    if (quitFlag) {
      break;
    }
  }
  return 0;
}
