#ifndef TABLEINMIANWINDOW_H
#define TABLEINMIANWINDOW_H

#include <QTabWidget>

namespace Ui {
class tableinmianwindow;
}

class tableinmianwindow : public QTabWidget
{
    Q_OBJECT

public:
    explicit tableinmianwindow(QWidget *parent = nullptr);
    ~tableinmianwindow();

private:
    Ui::tableinmianwindow *ui;
};

#endif // TABLEINMIANWINDOW_H
