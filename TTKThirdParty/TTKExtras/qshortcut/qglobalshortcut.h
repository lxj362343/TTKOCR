#ifndef QGLOBALSHORTCUT_H
#define QGLOBALSHORTCUT_H

/* =================================================
 * This file is part of the TTK OCR project
 * Copyright (C) 2015 - 2020 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QObject>
#include <QKeySequence>
#include "ocrextrasglobaldefine.h"

class QGlobalShortcutPrivate;

/*! @brief The namespace of the qglobal shortcut.
 * @author libqxt <foundation@libqxt.org>
 */
class OCR_EXTRAS_EXPORT QGlobalShortcut : public QObject
{
    Q_OBJECT
    TTK_DECLARE_PRIVATE(QGlobalShortcut)
    Q_PROPERTY(bool enabled READ isEnabled WRITE setEnabled)
    Q_PROPERTY(QKeySequence shortcut READ shortcut WRITE setShortcut)
public:
    explicit QGlobalShortcut(QObject* parent = nullptr);
    explicit QGlobalShortcut(const QKeySequence& shortcut, QObject* parent = nullptr);

    virtual ~QGlobalShortcut();

    QKeySequence shortcut() const;
    bool setShortcut(const QKeySequence& shortcut);

    bool isEnabled() const;

Q_SIGNALS:
    void activated();

public Q_SLOTS:
    void setEnabled(bool enabled = true);
    void setDisabled(bool disabled = true);

};

#endif // QGLOBALSHORTCUT_H
