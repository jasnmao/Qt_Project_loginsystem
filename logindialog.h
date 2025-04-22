#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

class QLabel;
class QLineEdit;
class QPushButton;

class LoginDialog : public QDialog
{
    Q_OBJECT
public:
    explicit LoginDialog(QWidget *parent=0);
    ~LoginDialog();

private slots:
    void login();
private:
    QLabel *user_label;
    QLabel *pwd_label;
    QLineEdit *user_editline;
    QLineEdit *pwd_editline;
    QPushButton *login_btn;
    QPushButton *exit_btn;
};

#endif // LOGINDIALOG_H
