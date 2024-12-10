#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include <iostream>

// dialog in the form of a tree
struct DialogNode {
    QString text;
    DialogNode* one;
    DialogNode* two;

    DialogNode () {
        text = "placeholder";
        one = nullptr;
        two = nullptr;
    }
};

struct Dialog {
    DialogNode* root;

    Dialog () {
        root = new DialogNode();
    }

    ~Dialog () {
        std::cout << "Dialog destructor called." << std::endl;
        deleteTree(root);
    }

    void deleteTree(DialogNode* deleteThis) {
        if (deleteThis == nullptr) {
            return;
        }

        deleteTree(deleteThis->one);
        deleteTree(deleteThis->two);

        delete deleteThis;
    }
};

class Person {
    public:
        QString name;
        QString info;
        Dialog* dialog;

        Person () {
            name = "placeholder name";
            info = "placeholder info";
            dialog = new Dialog();
        }

        ~Person () {
            std::cout << "Person destructor called." << std::endl;
            delete dialog;
        }
};

#endif // PERSON_H
