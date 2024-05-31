#pragma once
#include <QMainWindow>

class qt_test : public QMainWindow {
    Q_OBJECT

public:
    qt_test(QWidget* parent = nullptr);
    ~qt_test();
};