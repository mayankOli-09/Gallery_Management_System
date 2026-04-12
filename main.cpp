#include <iostream>
#include "gallery.h"
#include "gallerymanager.h"
#include "undoredo.h"
#include "recent.h"
using namespace std;

int main() {
    UndoRedo gallery;
    RecentItems recent;
    
    int choice;
    string name;

    while (true) {
        cout << "\n--- Gallery Menu ---\n";
        cout << "1. Add Image\n";
        cout << "2. Delete Image\n";
        cout << "3. Display Gallery\n";
        cout << "4. Search Image\n";
        cout << "5. Count Images\n";
        cout << "6. Undo\n";
        cout << "7. Redo\n";
        cout << "8. Access Image (recent)\n";
        cout << "9. Display Recently Accessed\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter image name to add: ";
                getline(cin, name);
                gallery.addItemWithHistory(name);
                break;
            case 2:
                cout << "Enter image name to delete: ";
                getline(cin, name);
                gallery.deleteItemWithHistory(name);
                break;
            case 3:
                gallery.displayGallery();
                break;
            case 4:
                cout << "Enter image name to search: ";
                getline(cin, name);
                gallery.searchItem(name);
                break;
            case 5:
                gallery.countItems();
                break;
            case 6:
                gallery.undo();
                break;
            case 7:
                gallery.redo();
                break;
            case 8:
                cout << "Enter image name to access: ";
                getline(cin, name);
                recent.head = gallery.head;
                recent.accessItem(name);
                break;
            case 9:
                recent.displayRecent();
                break;
            case 0:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
