/*
*  Copyright 2017-2018 Michail Vourlakos <mvourlakos@gmail.com>
*
*  This file is part of Latte-Dock
*
*  Latte-Dock is free software; you can redistribute it and/or
*  modify it under the terms of the GNU General Public License as
*  published by the Free Software Foundation; either version 2 of
*  the License, or (at your option) any later version.
*
*  Latte-Dock is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef LAYOUTBACKGROUNDDELEGATE_H
#define LAYOUTBACKGROUNDDELEGATE_H

// local
#include "../../data/layouticondata.h"

// Qt
#include <QStyledItemDelegate>

class QModelIndex;
class QWidget;

namespace Latte {
namespace Settings {
namespace Layout {
namespace Delegate {

class BackgroundDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    BackgroundDelegate(QObject *parent = 0);

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;

private:
    void drawIcon(QPainter *painter, const QStyleOptionViewItem &option, const QRect &target, const Data::LayoutIcon &icon) const;

};

}
}
}
}

#endif
