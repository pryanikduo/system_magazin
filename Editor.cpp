#include "Editor.h"

using namespace std;

Editor::Editor(const string& name, const string& email) 
    : nameE(name), emailE(email) {}

string Editor::getName() const { return nameE; }
string Editor::getEmail() const { return emailE; }

Article Editor::changeState(Article& article, const string& newStatus) {
    article.setStatus(newStatus);
    return article;
}

Article Editor::createArticle(int id, const string& title, Journalist* author) {
    return Article(id, title, author);
}