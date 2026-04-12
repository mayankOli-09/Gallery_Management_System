#include "gallerydelete.h"
#include <iostream>
using namespace std;

void GalleryDelete::deleteItem(string name) {
    if (head == nullptr) {
        cout << "Gallery is empty. Nothing to delete." << endl;
        return;
    }
    if (head->name == name) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Image deleted: " << name << endl;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->name != name) {
        current = current->next;
    }
    if (current->next == nullptr) {
        cout << "Image not found: " << name << endl;
        return;
    }
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Image deleted: " << name << endl;
}
