#ifndef GALLERYDELETE_H
#define GALLERYDELETE_H

#include <string>
#include "gallery.cpp"
using namespace std;

class GalleryDelete : public Gallery {
public:
    void deleteItem(string name);
};

#endif
