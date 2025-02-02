#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDialog>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the ui part with the cpp part
    connect(ui->send, &QPushButton::clicked, this, &MainWindow::on_send_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_send_clicked()
{
    // get values from ui
    int math = ui->math->text().toInt();
    int sc = ui->sc->text().toInt();
    int info = ui->info->text().toInt();
    int sport = ui->sport->text().toInt();
    int letter = ui->letter->text().toInt();
    int tec = ui->tec->text().toInt();
    int eco = ui->eco->text().toInt();


    QDialog *chartDialog = new QDialog(this);
    chartDialog->setWindowTitle("Statistics");
    chartDialog->resize(800, 600);

    QBarSet *set_1 = new QBarSet("Students");
    *set_1 << math << sc << eco << tec << sport << letter << info;

    QBarSeries *series = new QBarSeries();
    series->append(set_1);

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Etablissement Data");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Set up X-axis
    QStringList subjectNames;
    subjectNames << "Mathématiques" << "Sciences expérimentales" << "Économie et gestion"
                 << "Sciences techniques" << "Sport" << "Lettres" << "Sciences de l'informatique";

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(subjectNames);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Set up Y-axis
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 100);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);
    chartDialog->setLayout(layout);
    chartDialog->exec();
}
