/*
 * qt4-fsarchiver: Filesystem Archiver
 * 
* Copyright (C) 2008-2014 Dieter Baum.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License v2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */

#ifndef MBR_H
#define MBR_H
#include <QtGui>
#include <string.h>
#include "ui_mbr_dialog.h"
using namespace std;

class DialogMBR : public QWidget, private Ui::mbr_dialog
{
	Q_OBJECT

public:
	DialogMBR(QWidget *parent = 0);

public slots:
	int mbr();
	int folder_einlesen();
        int questionMessage(QString frage);
        void sektor_auslesen();
        void Ubuntuversion_auslesen();
        int is_gpt(QString partition_efi);
        void rdbutton_sda();
        void rdbutton_sdb();
        void rdbutton_sdc();
        void rdbutton_sdd();
private:
    QDirModel *dirModel;
    QItemSelectionModel *selModel;
    QLabel *questionLabel;
    string mtab_einlesen(string partition_if_home);
	
};

#endif






