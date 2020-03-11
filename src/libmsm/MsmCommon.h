/*
 *  This file is part of Ctlos Settings Manager.
 *
 *  Ramon Buldó <ramon@manjaro.org>
 *
 *  Ctlos Settings Manager is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Ctlos Settings Manager is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Ctlos Settings Manager.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MSMCOMMON_H
#define MSMCOMMON_H

#include <QtCore/QString>
#include <QtCore/QObject>

class MsmCommon : public QObject
{
    Q_OBJECT
public:
    static QString getBugReportLink();
};

#endif // MSMCOMMON_H
