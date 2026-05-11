// ============================================================
// 函数名称: sub_456250
// 虚拟地址: 0x456250
// WARP GUID: 26c92b80-11db-5ab3-84e7-20aeb4f01e1c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453ff8
// ============================================================

int32_t __convention("regparm")sub_456250(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1[4] != 0xcd)
    if (arg1[4] != 0xcd)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)(arg3)
    
    if (arg1[0x22] u< arg1[0x1c])
        void* eax_5 = arg1[2]
        
        if (eax_5 != 0)
            *(eax_5 + 4) = arg1[0x22]
            *(eax_5 + 8) = arg1[0x1c]
            (*arg1[2])(arg3)
        
        int32_t var_10 = 0
        (*(*(arg1 + 0x19a) + 4))(arg3)
        arg1[0x22] = arg1[0x22]
    else
        *(*arg1 + 0x14) = 0x77
        (*(*arg1 + 4))(arg3)
    
    return 0
}
