// ============================================================
// 函数名称: sub_405fdc
// 虚拟地址: 0x405fdc
// WARP GUID: bab0d483-aae2-5e8e-9df1-38b4236aa419
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40605c
// [被调用的父级函数]: sub_5197fb, sub_51d840, sub_519804
// ============================================================

void* __convention("regparm")sub_405fdc(void* arg1)
{
    // 第一条实际指令: int32_t edx_1
    int32_t edx_1
    
    if (*(arg1 + 4) == 0xd7b1)
        edx_1 = *(arg1 + 0xc)
    
    if (*(arg1 + 4) != 0xd7b1 || edx_1 u>= *(arg1 + 0x10))
        void* var_4_1 = arg1
        
        if (sub_40605c(arg1).b != 0x1a)
            *(var_4_1 + 0xc) -= 1
            arg1.b = 0
            return arg1
    else
        char* edx_2 = edx_1 + *(arg1 + 0x14)
        arg1.b = 0
        
        if (*edx_2 != 0x1a)
            return arg1
    
    arg1.b = 1
    return arg1
}
