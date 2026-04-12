#ifndef UNDOREDO_H
#define UNDOREDO_H

#include "gallerymanager.h"
#include <stack>
#include <string>
using namespace std;

class UndoRedo : public GalleryManager {
    stack<string> undoStack;
    stack<string> redoStack;

public:
    void addItemWithHistory(string name);
    void deleteItemWithHistory(string name);
    void undo();
    void redo();
};

#endif
