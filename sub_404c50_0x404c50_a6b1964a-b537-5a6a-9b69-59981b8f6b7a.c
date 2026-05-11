// ============================================================
// 函数名称: sub_404c50
// 虚拟地址: 0x404c50
// WARP GUID: a6b1964a-b537-5a6a-9b69-59981b8f6b7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysAllocStringLen, MultiByteToWideChar
// [内部子函数调用]: sub_40423c, sub_404078
// [被调用的父级函数]: sub_404f24, sub_4b5e24
// ============================================================

BSTR __convention("regparm")sub_404c50(uint8_t* arg1)
{
    // 第一条实际指令: int32_t cbMultiByte = sub_404078(arg1)
    int32_t cbMultiByte = sub_404078(arg1)
    
    if (sub_404078(arg1) s< 0x400)
        wchar16 var_810[0x400]
        return SysAllocStringLen(&var_810, 
            MultiByteToWideChar(0, 0, sub_40423c(arg1), cbMultiByte, &var_810, 0x400))
    
    uint32_t eax_7 = MultiByteToWideChar(0, 0, arg1, cbMultiByte, nullptr, 0)
    BSTR lpWideCharStr = SysAllocStringLen(nullptr, eax_7)
    MultiByteToWideChar(0, 0, arg1, cbMultiByte, lpWideCharStr, eax_7)
    return lpWideCharStr
}
