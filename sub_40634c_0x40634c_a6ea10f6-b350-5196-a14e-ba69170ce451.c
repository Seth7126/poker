// ============================================================
// 函数名称: sub_40634c
// 虚拟地址: 0x40634c
// WARP GUID: a6ea10f6-b350-5196-a14e-ba69170ce451
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, WriteFile
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: sub_46ef88, sub_52452c, sub_5205d0, sub_52a83c, sub_52070c, sub_47be18, sub_4b764c, sub_46f458
// ============================================================

HANDLE* __convention("regparm")sub_40634c(HANDLE* arg1, uint8_t* arg2)
{
    // 第一条实际指令: if (arg1[1] - 0xd7b2 u> 1)
    if (arg1[1] - 0xd7b2 u> 1)
        sub_402844(ERROR_ACCESS_DENIED)
    else
        uint32_t numberOfBytesWritten = 0
        
        if (WriteFile(*arg1, arg2, arg1[2], &numberOfBytesWritten, nullptr) != 1)
            sub_402844(GetLastError())
        else if (numberOfBytesWritten != arg1[2])
            sub_402844(ERROR_EXCL_SEM_ALREADY_OWNED)
    
    return arg1
}
