// ============================================================
// 函数名称: sub_49277c
// 虚拟地址: 0x49277c
// WARP GUID: 6a4df85d-7e50-5214-b927-b5b15787dc9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_491c5c, sub_493a70
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49277c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1[0xc1].b != 0 && sub_493a70(arg1).b == 1)
    if (arg1[0xc1].b != 0 && sub_493a70(arg1).b == 1)
        if (*(arg1 + 0x2cb) != 0)
            *(arg1 + 0x28e) |= 1
        
        if (*(arg1 + 0x2ce) != 0)
            *(arg1 + 0x28e) |= 0x80
        
        uint32_t eax_1
        eax_1.w = 6
        *(arg1 + 0x28e) &= (not.d(eax_1)).w
        sub_491c5c(arg1)
    
    int32_t eax_4 = *(arg2 + 4)
    
    if (eax_4 == 1)
        arg1[0xbc].b = 0
    else if (eax_4 == 2)
        arg1[0xbc].b = 1
    else if (eax_4 == 4)
        arg1[0xbc].b = 2
    else if (eax_4 == 8)
        arg1[0xbc].b = 3
    
    int32_t* ebx
    ebx.w = 0xffb3
    return sub_4032ac(arg1)
}
