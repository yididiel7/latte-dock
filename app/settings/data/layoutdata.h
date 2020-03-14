/*
 * Copyright 2020  Michail Vourlakos <mvourlakos@gmail.com>
 *
 * This file is part of Latte-Dock
 *
 * Latte-Dock is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * Latte-Dock is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SETTINGSDATALAYOUT_H
#define SETTINGSDATALAYOUT_H

#include <QMetaType>
#include <QString>
#include <QStringList>

namespace Latte {
namespace Settings {
namespace Data {

class Layout
{

public:
    Layout();
    Layout(Layout &&o);
    Layout(const Layout &o);

    //! Layout data
    QString id;
    QString color;
    QString background;
    QString textColor;
    bool isActive{false};
    bool isLocked{false};
    bool isShownInMenu{false};
    bool hasDisabledBorders{false};
    QStringList activities;
    QStringList shares;

    QString currentName() const;
    void setCurrentName(const QString name);

    QString originalName() const;
    void setOriginalName(const QString name);

    //! Functionality
    bool isShared() const;
    bool nameWasEdited() const;

    //! Operators
    Layout &operator=(const Layout &rhs);
    Layout &operator=(Layout &&rhs);
    bool operator==(const Layout &rhs) const;
    bool operator!=(const Layout &rhs) const;

protected:
    QString m_currentName;
    QString m_originalName;

};

}
}
}

Q_DECLARE_METATYPE(Latte::Settings::Data::Layout)

#endif