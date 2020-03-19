#include "MyLabel.h"

MyLabel::MyLabel(Ui::Form ui, QWidget *parent ) : QLabel(parent)
{
    this->ui = ui;
}
MyLabel::~MyLabel()
{
}

//when the system calls setImage, we'll set the label's pixmap
void MyLabel::setImage(QImage image) {

  QPixmap pixmap = QPixmap::fromImage(image);
  pixmap = pixmap.transformed(QTransform().scale(-1, 1));
  int w = this->width();
  int h = this->height();
  setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
}

void MyLabel::UpdateTemperature(float value)
{
    //convert
    this->ui.Status->setText(QString::number(value));
}
