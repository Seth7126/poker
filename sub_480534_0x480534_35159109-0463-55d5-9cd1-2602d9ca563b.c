// ============================================================
// 函数名称: sub_480534
// 虚拟地址: 0x480534
// WARP GUID: 35159109-0463-55d5-9cd1-2602d9ca563b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_48b3d8, sub_472854, sub_48156c, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4807f4, sub_4e6659, sub_4d9a28, sub_4da10c, sub_4dc3b8, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_480534(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: *(arg1 + 0xac0) = arg2
    *(arg1 + 0xac0) = arg2
    
    if (arg2 s> 0x64)
        *(arg1 + 0xac0) = 0x64
    
    *(arg1 + 0xac0)
    bool o = unimplemented  {imul dword [ebx+0xac0]}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_402b4c(float.t(0x190 * *(arg1 + 0xac0)) / fconvert.t(100f))
    
    if (eax_2 s>> 0x1f != edx)
        sub_403008()
        noreturn
    
    (*data_53081c)(0, 0, 0, 0x3f800000)
    (*data_52ffd8)(0, 0x3ff00000)
    
    if (arg3 != 0)
        (*data_530838)(0x4500)
    
    int16_t eax_9
    
    if (arg3 != 0)
        eax_9 = *(arg1 + 0x932)
        
        if (eax_9 != 0)
            sub_48156c(0, sx.d(eax_9), arg1, 0x3f800000, 1f, 0, 0f, 0f, 0, 0, 0x260, 0x328, 0)
        
        eax_9 = *(arg1 + 0x930)
        
        if (eax_9 != 0)
            sub_48156c(0xc8, sx.d(eax_9), arg1, 0x3f800000, 1f, 0, 0f, 0f, 0, 0, 0xe, 0x190, 0x22e)
        
        eax_9 = *(arg1 + 0x92e)
        
        if (eax_9 != 0)
            sub_48156c(0xc8, sx.d(eax_9), arg1, fconvert.s(float.t(eax_2) / float.t(0x190)), 1f, 0, 0f, 
                0f, 0, 0, 0xe, eax_2, 0x22e)
        
        eax_9 = *(arg1 + 0x934)
        
        if (eax_9 != 0)
            sub_48156c(0xf0, sx.d(eax_9), arg1, 0x3f800000, 1f, 0, 0f, 0f, 0, 0, 0x78, 0x168, 0x1a4)
    else
        eax_9 = *(arg1 + 0x932)
        
        if (eax_9 != 0)
            sub_48156c(0, sx.d(eax_9), arg1, 0x3f800000, 1f, 0, 0f, 0f, 0, 0, 0x260, 0x328, 0)
        
        eax_9 = *(arg1 + 0x930)
        
        if (eax_9 != 0)
            sub_48156c(0xc8, sx.d(eax_9), arg1, 0x3f800000, 1f, 0, 0f, 0f, 0, 0, 0xe, 0x190, 0x22e)
        
        eax_9 = *(arg1 + 0x92e)
        
        if (eax_9 != 0)
            sub_48156c(0xc8, sx.d(eax_9), arg1, fconvert.s(float.t(eax_2) / float.t(0x190)), 1f, 0, 0f, 
                0f, 0, 0, 0xe, eax_2, 0x22e)
    (*data_53006c)(0xb71)
    
    if (*(arg1 + 0x92c) != 0 && *(arg1 + 0x89c) != 0)
        int32_t var_28_1 = 0x32d
        sub_48b3d8(0xffffffff, 0xfffffffe, arg1, 1f, 1, 0, 1, 0x261)
    
    (*data_530034)(0xb71)
    return sub_472854(arg1)
}
