// ============================================================
// 函数名称: sub_405f88
// 虚拟地址: 0x405f88
// WARP GUID: 3bc33990-c3e8-5348-9d67-c24cc9c72da0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFilePointer, GetFileSize
// [内部子函数调用]: sub_402854, sub_402844
// [被调用的父级函数]: sub_4691b4, sub_4e6028, sub_4692db, sub_468d90, sub_468ec0, sub_46f5a0, sub_46f698, sub_4689cc, sub_4692e4, sub_47be18, sub_4ecd3c, sub_468eb7, sub_468af3, sub_468afc, sub_4683f7, sub_4ecdcc
// ============================================================

uint32_t __convention("regparm")sub_405f88(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t* esp = &var_4
    uint32_t result
    
    if (arg1[1] - 0xd7b1 u> 2)
        sub_402844(0x67)
        result.b = 0xff
    else
        uint32_t* lpFileSizeHigh = nullptr
        uint32_t lpFileSizeHigh_1 = GetFileSize(*arg1, lpFileSizeHigh)
        esp = &var_4
        
        if (lpFileSizeHigh_1 != 0xffffffff)
            lpFileSizeHigh = lpFileSizeHigh_1
            result = SetFilePointer(*arg1, 0, nullptr, FILE_CURRENT)
            esp = &lpFileSizeHigh
        
        if (lpFileSizeHigh_1 == 0xffffffff || result == 0xffffffff)
            sub_402854()
            result.b = 1
        else
            esp = &var_4
            result.b = result u>= lpFileSizeHigh
    
    *esp
    return result
}
