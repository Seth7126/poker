// ============================================================
// 函数名称: sub_406318
// 虚拟地址: 0x406318
// WARP GUID: c85d2a19-8971-586a-9b02-799e3fa2fb3a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFilePointer
// [内部子函数调用]: sub_402854, sub_402844
// [被调用的父级函数]: sub_52c7c8
// ============================================================

int32_t __convention("regparm")sub_406318(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[1] - 0xd7b1 u> 2)
    if (arg1[1] - 0xd7b1 u> 2)
        return sub_402844(0x67) __tailcall
    
    uint32_t eax_4 = SetFilePointer(*arg1, arg1[2] * arg2, nullptr, FILE_BEGIN)
    
    if (eax_4 == 0xffffffff)
        return sub_402854() __tailcall
    
    return eax_4 + 1
}
