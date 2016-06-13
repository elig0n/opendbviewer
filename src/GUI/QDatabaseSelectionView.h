/*
 * QDatabaseSelectionView.h
 *
 *  Created on: 10 juin 2016
 *      Author: echopin
 */

#ifndef SRC_GUI_QDATABASESELECTIONVIEW_H_
#define SRC_GUI_QDATABASESELECTIONVIEW_H_

#include <QObject>
#include <QWidget>
#include <QDialog>
#include <QTabWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QToolButton>
#include <QFileDialog>
#include <QString>
#include <QToolBar>
#include <QLabel>
#include <QAction>

class QDatabaseSelectionView : public QWidget
{
public:
	QDatabaseSelectionView(QWidget* parent = 0);
	virtual ~QDatabaseSelectionView();
	QPushButton* getFileSelectionButton() const;
	QPushButton* getCancelButton() const;

private:
	QWidget* makeTab();

private:
	QPushButton* m_pFileSelectionButton;
	QPushButton* m_pCancelButton;
};

#endif /* SRC_GUI_QDATABASESELECTIONVIEW_H_ */