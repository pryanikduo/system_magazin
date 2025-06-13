#include "Journalist.h"

using namespace std;

Journalist::Journalist(const string& name, const string& email) 
    : nameJ(name), emailJ(email) {}

string Journalist::getName() const { return nameJ; }
string Journalist::getEmail() const { return emailJ; }

Article Journalist::editArticle(Article& article, const string& newText) {
    article.setText(newText);
    return article;
}

void Journalist::sendForCheck(Article& article) {
    article.setStatus("Under Review");
}