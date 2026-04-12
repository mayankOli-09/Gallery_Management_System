#include "undoredo.h"
#include <iostream>
using namespace std;

void UndoRedo::addItemWithHistory(string name) {
    addItem(name);
    undoStack.push("add:" + name);
    while(!redoStack.empty()) redoStack.pop();
}

void UndoRedo::deleteItemWithHistory(string name) {
    deleteItem(name);
    undoStack.push("del:" + name);
    while(!redoStack.empty()) redoStack.pop();
}

void UndoRedo::undo() {
    if(undoStack.empty()) {
        cout << "Nothing to undo\n";
        return;
    }
    string action = undoStack.top(); undoStack.pop();
    string type = action.substr(0,3);
    string name = action.substr(4);

    if(type == "add") {
        deleteItem(name);
        redoStack.push(action);
    } else if(type == "del") {
        addItem(name);
        redoStack.push(action);
    }
}

void UndoRedo::redo() {
    if(redoStack.empty()) {
        cout << "Nothing to redo\n";
        return;
    }
    string action = redoStack.top(); redoStack.pop();
    string type = action.substr(0,3);
    string name = action.substr(4);

    if(type == "add") {
        addItem(name);
        undoStack.push(action);
    } else if(type == "del") {
        deleteItem(name);
        undoStack.push(action);
    }
}
