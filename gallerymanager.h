#ifndef GALLERYMANAGER_H
#define GALLERYMANAGER_H

#include "gallery.h"

class GalleryManager : public Gallery {
public:
    void searchItem(string name);
    void deleteItem(string name);
    void displayGallery();
    void countItems();
};

#endif
