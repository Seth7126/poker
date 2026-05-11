// ============================================================
// 函数名称: sub_404548
// 虚拟地址: 0x404548
// WARP GUID: d6a29ab4-602f-58ec-b2aa-bb0713d78b10
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MultiByteToWideChar
// [内部子函数调用]: sub_4044e8, sub_4045cc
// [被调用的父级函数]: sub_4045f0
// ============================================================

int32_t* __convention("regparm")sub_404548(OLECHAR** arg1, uint8_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 s<= 0)
    if (arg3 s<= 0)
        int32_t* result = arg1
        sub_4044e8(result)
        return result
    
    if (arg3 s< 0x400)
        wchar16 wideCharStr[0x400]
        uint32_t eax = MultiByteToWideChar(0, 0, arg2, arg3, &wideCharStr, 0x400)
        
        if (eax s> 0)
            return sub_4045cc(arg1, &wideCharStr, eax)
    
    int32_t cchWideChar = MultiByteToWideChar(0, 0, arg2, arg3, nullptr, 0)
    sub_4045cc(arg1, nullptr, cchWideChar)
    return MultiByteToWideChar(0, 0, arg2, arg3, *arg1, cchWideChar)
}
