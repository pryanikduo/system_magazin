#include "Article.h"
#include "Journalist.h"
#include <sstream>

using namespace std;

Article::Article(int id, const string& title, Journalist* author) 
    : id(id), title(title), status("Draft"), text(""), layout(""), author(author) {}

int Article::getId() const { return id; }
string Article::getTitle() const { return title; }
string Article::getStatus() const { return status; }
string Article::getText() const { return text; }
string Article::getLayout() const { return layout; }
Journalist* Article::getAuthor() const { return author; }

void Article::setStatus(const string& newStatus) { status = newStatus; }
void Article::setText(const string& newText) { text = newText; }
void Article::setLayout(const string& newLayout) { layout = newLayout; }

string Article::viewing() const {
    ostringstream oss;
    oss << "Article ID: " << id << "\n"
        << "Title: " << title << "\n"
        << "Status: " << status << "\n"
        << "Author: " << (author ? author->getName() : "Unknown") << "\n"
        << "Text: " << (text.empty() ? "[No text yet]" : text) << "\n"
        << "Layout: " << (layout.empty() ? "[No layout yet]" : layout);
    return oss.str();
}