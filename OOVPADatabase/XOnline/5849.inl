// ******************************************************************
// *
// *   OOVPADatabase->XOnline->5849.inl
// *
// *  XbSymbolDatabase is free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * CXo::XOnlineLogon
// ******************************************************************
OOVPA_XREF(CXo_XOnlineLogon, 5849, 15,

    XREF_CXo_XOnlineLogon,
    XRefZero)

        { 0x02, 0xEC },

        { 0x10, 0xFC },
        { 0x18, 0xE9 },

        { 0x37, 0xA8 },
        { 0x38, 0x01 },
        { 0x39, 0x75 },
        { 0x3A, 0x0C },
        { 0x3B, 0xC7 },
        { 0x3C, 0x45 },
        { 0x3D, 0x0C },
        { 0x3E, 0x00 },
        { 0x3F, 0x10 },
        { 0x40, 0x15 },
        { 0x41, 0x80 },
        { 0x42, 0xE9 },
OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSessionCreate
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSessionCreate, 5849, 15,

    XREF_CXo_XOnlineMatchSessionCreate,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // push ecx
        // push ecx
        // push ebx
        // push esi
        // mov esi, ecx
        // xor ebx, ebx
        // cmp esi, ebx
        // jnz eip + $07h
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x51, 0x51, 0x53, 0x56, 0x8B, 0xF1, 0x33, 0xDB, 0x3B, 0xF3, 0x75, 0x07),
OOVPA_END;
