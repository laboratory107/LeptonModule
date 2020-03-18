#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent, Ui::Form ui) : QLabel(parent)
{
    this->ui = ui;
}
MyLabel::~MyLabel()
{
}

//when the system calls setImage, we'll set the label's pixmap
void MyLabel::setImage(QImage image) {
  QPixmap pixmap = QPixmap::fromImage(image);
  int w = this->width();
  int h = this->height();
  setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
}

void MyLabel::UpdateTemperature(float value)
{
    this->ui.Status->setText(QString::number(value));
}
