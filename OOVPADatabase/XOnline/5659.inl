// ******************************************************************
// *
// *   OOVPADatabase->XOnline->5659.inl
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
// *  (c) 2017 jarupxx
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * XoUpdateLaunchNewImageInternal
// ******************************************************************
OOVPA_XREF(XoUpdateLaunchNewImageInternal, 5659, 11,

    XREF_XoUpdateLaunchNewImageInternal,
    XRefZero)

        { 0x00, 0x55 },
        { 0x03, 0x81 },

        { 0x6C, 0xEB },
        { 0x6D, 0x04 },
        { 0x6E, 0x83 },
        { 0x6F, 0x63 },
        { 0x70, 0x10 },
        { 0x71, 0x00 },
        { 0x72, 0xF6 },
        { 0x73, 0x45 },

        { 0x79, 0xE8 },
OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSearchGetResults
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSearchGetResults, 5659, 12,

    XREF_CXo_XOnlineMatchSearchGetResults,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // push ecx
        // push ebx
        // xor ebx, ebx
        // cmp ecx, ebx
        // jmp eip + $07h
        // mov eax, ...
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x51, 0x53, 0x33, 0xDB, 0x3B, 0xCB, 0x75, 0x07, 0xB8),

OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSessionUpdate
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSessionUpdate, 5659, 19,

    XREF_CXo_XOnlineMatchSessionUpdate,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // push esi
        // mov esi, ecx
        // test esi, esi
        // jnz eip + $07h
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x56, 0x8B, 0xF1, 0x85, 0xF6, 0x75),

        // push 0
        // push dword ptr [ebp + param_2]
        // mov ecx, esi
        // push dword ptr [ebp + param_1]
        OV_MATCH(0x11, 0x6a, 0x00, 0xFF, 0x75, 0x0C, 0x8B, 0xCE, 0xFF, 0x75, 0x08),
OOVPA_END;
