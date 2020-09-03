// ******************************************************************
// *
// *   OOVPADatabase->XOnline->4831.inl
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
// * CXo::XOnlineLogon
// ******************************************************************
OOVPA_XREF(CXo_XOnlineLogon, 4831, 15,

    XREF_CXo_XOnlineLogon,
    XRefZero)

        { 0x02, 0xEC },

        { 0x15, 0x00 },
        { 0x1C, 0xE8 },

        { 0x21, 0xA8 },
        { 0x22, 0x01 },
        { 0x23, 0x75 },
        { 0x24, 0x0C },
        { 0x25, 0xC7 },
        { 0x26, 0x45 },
        { 0x27, 0xF8 },
        { 0x28, 0x00 },
        { 0x29, 0x10 },
        { 0x2A, 0x15 },
        { 0x2B, 0x80 },
        { 0x2C, 0xE9 },
OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSearch
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSearch, 4831, 13,

    XREF_CXo_XOnlineMatchSearch,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // test ecx, ecx
        // jnz eip + $09h
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x85, 0xC9, 0x75, 0x09),

        // pop ebp
        // ret $1Ch
        // pop ebp
        // jmp ...
        OV_MATCH(0x0C, 0x5D, 0xC2, 0x1C, 0x00, 0x5D, 0xE9),
OOVPA_END;

// ******************************************************************
// * XOnlineMatchSearch
// ******************************************************************
OOVPA_XREF(XOnlineMatchSearch, 4831, 1+4,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY(0x0B, XREF_CXo_XOnlineMatchSearch),

        // push ebp
        // mov ebp, esp
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC),

        // jmp ...
        OV_MATCH(0x0A, 0xE9),
OOVPA_END;

// ******************************************************************
// * XOnlineMatchSearchResultsLen_Body
// ******************************************************************
OOVPA_XREF(XOnlineMatchSearchResultsLen_Body, 4831, 14,

    XREF_XOnlineMatchSearchResultsLen_Body,
    XRefZero)

        // test ecx, ecx
        // jnz ...
        OV_MATCH(0x00, 0x85, 0xC9, 0x75),

        // mov eax, ...
        OV_MATCH(0x04, 0xb8),
        // jmp ...
        OV_MATCH(0x09, 0xeb),
        // push esi
        // mov esi, dword ptr [esp + param_2]
        // test esi, esi
        // push 54h
        OV_MATCH(0x0B, 0x56, 0x8b, 0x74, 0x24, 0x0c, 0x85, 0xf6, 0x6a, 0x54),
OOVPA_END;

// ******************************************************************
// * XOnlineMatchSearchResultsLen
// ******************************************************************
OOVPA_XREF(XOnlineMatchSearchResultsLen, 4831, 1+3,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY(0x07, XREF_XOnlineMatchSearchResultsLen_Body),

        // mov ecx, ...
        OV_MATCH(0x00, 0x8B, 0x0D),

        // jmp ...
        OV_MATCH(0x06, 0xE9),
OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSearchGetResults
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSearchGetResults, 4831, 15,

    XREF_CXo_XOnlineMatchSearchGetResults,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // push ecx
        // xor ebx, ebx
        // cmp ecx, ebx
        // jmp eip + $07h
        // mov eax, ...
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x51, 0x33, 0xC0, 0x3B, 0xC8, 0x75, 0x07, 0xB8),

        // mov ecx, dword ptr [ebp + param_1]
        // push ebx
        OV_MATCH(0x11, 0x8B, 0x4D, 0x08, 0x53),
OOVPA_END;

// ******************************************************************
// * XOnlineMatchSearchGetResults
// ******************************************************************
OOVPA_XREF(XOnlineMatchSearchGetResults, 4831, 1+3,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY(0x07, XREF_CXo_XOnlineMatchSearchGetResults),

        // mov ecx, ...
        OV_MATCH(0x00, 0x8B, 0x0D),

        // jmp ...
        OV_MATCH(0x06, 0xE9),
OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSessionUpdate
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSessionUpdate, 4831, 22,

    XREF_CXo_XOnlineMatchSessionUpdate,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // test ecx, ecx
        // jnz eip + $07h
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x85, 0xC9, 0x75, 0x07),

        // push dword ptr [ebp + param_10]
        // push dword ptr [ebp + param_9]
        // push dword ptr [ebp + param_8]
        // push dword ptr [ebp + param_7]
        // push dword ptr [ebp + param_6]
        OV_MATCH(0x0E, 0xFF, 0x75, 0x2C, 0xFF, 0x75, 0x28, 0xFF, 0x75, 0x24, 0xFF, 0x75, 0x20, 0xFF, 0x75, 0x1C),
OOVPA_END;

// ******************************************************************
// * XOnlineMatchSessionUpdate
// ******************************************************************
OOVPA_XREF(XOnlineMatchSessionUpdate, 4831, 1+23,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY(0x28, XREF_CXo_XOnlineMatchSessionUpdate),

        // push ebp
        // mov ebp, esp
        // push dword ptr [ebp + param_10]
        // mov ecx, ...
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0xFF, 0x75, 0x2C, 0x8B, 0x0D),

        // push dword ptr [ebp + param_9]
        // push dword ptr [ebp + param_8]
        // push dword ptr [ebp + param_7]
        // push dword ptr [ebp + param_6]
        // push dword ptr [ebp + param_5]
        OV_MATCH(0x0C, 0xFF, 0x75, 0x28, 0xFF, 0x75, 0x24, 0xFF, 0x75, 0x20, 0xFF, 0x75, 0x1C, 0xFF, 0x75, 0x18),
OOVPA_END;

// ******************************************************************
// * CXo::XOnlineMatchSessionCreate
// ******************************************************************
OOVPA_XREF(CXo_XOnlineMatchSessionCreate, 4831, 18,

    XREF_CXo_XOnlineMatchSessionCreate,
    XRefZero)

        // push ebp
        // mov ebp, esp
        // push ecx
        // push ecx
        // xor eax, eax
        // cmp ecx, eax
        // jnz eip + $07h
        // mov eax, $80150005h
        // jmp eip + $55h
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC, 0x51, 0x51, 0x33, 0xC0, 0x3B, 0xC8, 0x75, 0x07, 0xB8, 0x05, 0x00, 0x15, 0x80, 0xEB, 0x55),
OOVPA_END;

// ******************************************************************
// * XOnlineMatchSessionCreate
// ******************************************************************
OOVPA_XREF(XOnlineMatchSessionCreate, 4831, 1+4,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY(0x0B, XREF_CXo_XOnlineMatchSessionCreate),

        // push ebp
        // mov ebp, esp
        OV_MATCH(0x00, 0x55, 0x8B, 0xEC),

        // jmp ...
        OV_MATCH(0x0A, 0xE9),
OOVPA_END;
