#include "gallerymanager.h"
#include <iostream>
using namespace std;

void GalleryManager::displayGallery() {
    Gallery::displayGallery();
}

void GalleryManager::searchItem(string name) {
    Gallery::searchItem(name);
}

void GalleryManager::deleteItem(string name) {
    Gallery::deleteItem(name);
}

void GalleryManager::countItems() {
    Gallery::countItems();
}
