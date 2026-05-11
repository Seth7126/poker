// ============================================================
// 函数名称: sub_412670
// 虚拟地址: 0x412670
// WARP GUID: 8c9cce74-9d90-5d45-a13c-f908ffe9fd23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_4125bc, sub_402980
// [被调用的父级函数]: sub_412348, sub_412628
// ============================================================

int32_t __convention("regparm")sub_412670(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: (*(*arg1 + 0x74))()
    (*(*arg1 + 0x74))()
    
    if (arg1[4] == arg1[5])
        sub_4125bc(arg1)
    
    int32_t eax_3 = arg1[4]
    
    if (arg2 s< eax_3)
        sub_402980(arg1[3] + (arg2 << 3), arg1[3] + (arg2 << 3) + 8, (eax_3 - arg2) << 3)
    
    int32_t* eax_8 = arg1[3] + (arg2 << 3)
    *eax_8 = 0
    eax_8[1] = 0
    sub_403e4c(eax_8, arg3)
    arg1[4] += 1
    return (*(*arg1 + 0x70))()
}
