#include "Designer.h"

using namespace std;

Designer::Designer(const string& name, const string& email) 
    : nameD(name), emailD(email) {}

string Designer::getName() const { return nameD; }
string Designer::getEmail() const { return emailD; }

Article Designer::createLayout(Article& article, const string& layout) {
    article.setLayout(layout);
    return article;
}

Article Designer::editLayout(Article& article, const string& newLayout) {
    article.setLayout(newLayout);
    return article;
}