#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect( &m_city, SIGNAL( singnalObjectIsReady( ) ),
             this, SLOT( slotFillTable( ) ) );

    QString nameOfCity = ui->citiesComboBox->currentText( );
    m_city.initObject( nameOfCity );
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::slotFillTable( )
{
    // Create the table
    m_model = std::unique_ptr<QStandardItemModel>( new QStandardItemModel( 2, 2, this ) );
    ui->tableView->setModel( m_model.get( ) );

    // Set the name of the city
    QModelIndex index;
    index = m_model->index( 0, 0 );
    m_model->setData( index, "Name" );
    index = m_model->index( 0, 1 );
    m_model->setData( index, m_city.name( ) );

    // Set the temperature
    index = m_model->index( 1, 0 );
    m_model->setData( index, "Temperature" );
    index = m_model->index( 1, 1 );
    m_model->setData( index, m_city.currentCondition.temp_C( ) );
}

void Dialog::on_citiesComboBox_currentTextChanged(const QString &nameOfCity)
{
    m_city.initObject( nameOfCity );
}
