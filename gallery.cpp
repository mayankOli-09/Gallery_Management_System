#include "gallery.h"
#include <iostream>
using namespace std;

Node::Node(string n) {
    name = n;
    next = nullptr;
}

Gallery::Gallery() {
    head = nullptr;
}

void Gallery::addItem(string name) {
    Node* newNode = new Node(name);
    if (!head) head = newNode;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    cout << "Image added: " << name << endl;
}

void Gallery::deleteItem(string name) {
    if (!head) {
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
    while (current->next && current->next->name != name)
        current = current->next;
    if (!current->next) {
        cout << "Image not found: " << name << endl;
        return;
    }
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Image deleted: " << name << endl;
}

void Gallery::displayGallery() {
    if (!head) {
        cout << "Gallery is empty." << endl;
        return;
    }
    Node* temp = head;
    cout << "Gallery items:" << endl;
    while (temp) {
        cout << "- " << temp->name << endl;
        temp = temp->next;
    }
}

void Gallery::searchItem(string name) {
    Node* temp = head;
    while (temp) {
        if (temp->name == name) {
            cout << "Image found: " << name << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Image not found: " << name << endl;
}

void Gallery::countItems() {
    int count = 0;
    Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    cout << "Total images: " << count << endl;
}
