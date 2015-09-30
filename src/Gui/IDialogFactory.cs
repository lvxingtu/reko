#region License
/* 
* Copyright (C) 1999-2015 John Källén.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; see the file COPYING.  If not, write to
* the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#endregion

using Reko.Core;
using Reko.Gui.Forms;
using System;

namespace Reko.Gui
{
    public interface IDialogFactory
    {
        IAssembleFileDialog CreateAssembleFileDialog();
        IAssumedRegisterValuesDialog CreateAssumedRegisterValuesDialog(IProcessorArchitecture arch);
        IAddressPromptDialog CreateAddressPromptDialog();
        IFindStringsDialog CreateFindStringDialog();
        IMainForm CreateMainForm();
        IOpenAsDialog CreateOpenAsDialog();
        IProgramPropertiesDialog CreateProgramPropertiesDialog(Program program);
        IResourceEditor CreateResourceEditor();
        ISearchDialog CreateSearchDialog();
        IUserPreferencesDialog CreateUserPreferencesDialog();
    }
}
