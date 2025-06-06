// Copyright (c) Wojciech Figat. All rights reserved.

#pragma once

#if PLATFORM_WINDOWS

#include "Engine/Platform/Base/ClipboardBase.h"

/// <summary>
/// Windows platform implementation of the clipboard service.
/// </summary>
class FLAXENGINE_API WindowsClipboard : public ClipboardBase
{
public:

    // [ClipboardBase]
    static void Clear();
    static void SetText(const StringView& text);
    static void SetRawData(const Span<byte>& data);
    static void SetFiles(const Array<String>& files);
    static String GetText();
    static Array<byte> GetRawData();
    static Array<String> GetFiles();
};

#endif
