
/*!
	\file

	\author Igor Mironchik (igor.mironchik at gmail dot com).

	Copyright (c) 2016 Igor Mironchik

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef LICENSECHANGE__OPTS_DIALOG_HPP__INCLUDED
#define LICENSECHANGE__OPTS_DIALOG_HPP__INCLUDED

// Qt include.
#include <QDialog>
#include <QScopedPointer>


//
// OptsDialog
//

class OptsDialogPrivate;

//! Dialog with search settings.
class OptsDialog
	:	public QDialog
{
	Q_OBJECT

public:
	OptsDialog( QWidget * parent );
	~OptsDialog();

	//! \return Should only one license be changed?
	bool onlyOneLicense() const;

	//! \return Is search case sensitive.
	bool isCaseSensitive() const;

private:
	Q_DISABLE_COPY( OptsDialog )

	QScopedPointer< OptsDialogPrivate > d;
}; // class OptsDialog

#endif // LICENSECHANGE__OPTS_DIALOG_HPP__INCLUDED
