#include "gallerydisplay.h"
#include <iostream>
using namespace std;

void GalleryDisplay::displayGallery() {
    if (head == nullptr) {
        cout << "Gallery is empty." << endl;
        return;
    }
    cout << "Gallery items:" << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << "- " << temp->name << endl;
        temp = temp->next;
    }
}
