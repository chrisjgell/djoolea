#include "ResourceLoader.h"

ResourceLoader::ResourceLoader() {

}


int ResourceLoader::initImageResources() {
    extern int qInitResources_images();
    return qInitResources_images();
}
