#ifndef GALLERY_H
#define GALLERY_H

#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next;
    Node(string n);
};

class Gallery {
public:
    Node* head;
    Gallery();
    void addItem(string name);
    void deleteItem(string name);
    void displayGallery();
    void searchItem(string name);
    void countItems();
};

#endif
