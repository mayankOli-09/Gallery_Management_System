#include "recent.h"
#include <iostream>
using namespace std;

void RecentItems::accessItem(string name) {
    Node* temp = head;
    while(temp) {
        if(temp->name == name) {
            recent.push_back(name);
            cout << "Accessed: " << name << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Image not found: " << name << endl;
}

void RecentItems::displayRecent() {
    if(recent.empty()) {
        cout << "No recent items\n";
        return;
    }
    cout << "Recently accessed images:\n";
    for(auto &s : recent) cout << "- " << s << endl;
}
