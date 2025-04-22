#include "logindialog.h"
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QMessageBox>
LoginDialog::LoginDialog(QWidget *parent):QDialog(parent) {
    user_label=new QLabel(this);
    user_label->move(70,80);
    user_label->setText(tr("用户名:"));

    user_editline=new QLineEdit(this);
    user_editline->move(140,80);
    user_editline->setPlaceholderText(tr("请输入用户名:"));

    pwd_label=new QLabel(this);
    pwd_label->move(70,130);
    pwd_label->setText(tr("密码:"));

    pwd_editline=new QLineEdit(this);
    pwd_editline->move(140,130);
    pwd_editline->setPlaceholderText(tr("请输入密码:"));

    login_btn=new QPushButton(this);
    login_btn->move(50,200);
    login_btn->setText(tr("登录"));

    exit_btn=new QPushButton(this);
    exit_btn->move(210,200);
    exit_btn->setText(tr("退出"));

    connect(login_btn,&QPushButton::clicked,this,&LoginDialog::login);
    connect(exit_btn,&QPushButton::clicked,this,&LoginDialog::close);
}
LoginDialog::~LoginDialog(){

}
void LoginDialog::login(){
    if(user_editline->text().trimmed()==tr("Jason") && pwd_editline->text()==tr("890743")){
        accept();
    }
    else{
        QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误"),QMessageBox::Yes);
    }
    user_editline->clear();
    pwd_editline->clear();
    user_editline->setFocus();
}
