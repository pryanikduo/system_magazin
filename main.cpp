#include <iostream>
#include "Journalist.h"
#include "Designer.h"
#include "Editor.h"
#include "Article.h"

using namespace std;

int main() {
    // Создаем участников процесса
    Journalist john("John Smith", "john@example.com");
    Designer alice("Alice Brown", "alice@example.com");
    Editor mike("Mike Johnson", "mike@example.com");
    
    cout << "=== Creating a new article ===" << endl;
    Article article = mike.createArticle(1, "New Technology Trends", &john);
    cout << article.viewing() << endl << endl;
    
    cout << "=== Journalist edits the article ===" << endl;
    article = john.editArticle(article, "This is the first draft of the article about new technology trends...");
    john.sendForCheck(article);
    cout << article.viewing() << endl << endl;
    
    cout << "=== Editor reviews the article ===" << endl;
    article = mike.changeState(article, "In Design");
    cout << article.viewing() << endl << endl;
    
    cout << "=== Designer works on layout ===" << endl;
    article = alice.createLayout(article, "Two-column layout with images");
    cout << article.viewing() << endl << endl;
    
    cout << "=== Editor approves the article ===" << endl;
    article = mike.changeState(article, "Approved");
    cout << article.viewing() << endl << endl;
    
    cout << "=== Final article details ===" << endl;
    cout << "Author: " << article.getAuthor()->getName() << " (" << article.getAuthor()->getEmail() << ")" << endl;
    cout << "Status: " << article.getStatus() << endl;
    
    // Тест редактирования макета
    cout << "\n=== Designer edits layout ===" << endl;
    article = alice.editLayout(article, "Three-column responsive layout");
    cout << "New layout: " << article.getLayout() << endl;

    // Тест изменения статуса обратно на доработку
    cout << "\n=== Editor requests revisions ===" << endl;
    article = mike.changeState(article, "Needs Revision");
    cout << "New status: " << article.getStatus() << endl;

    // Тест информации о журналисте
    cout << "\n=== Journalist info ===" << endl;
    cout << "Name: " << john.getName() << "\nEmail: " << john.getEmail() << endl;
    
    return 0;
}