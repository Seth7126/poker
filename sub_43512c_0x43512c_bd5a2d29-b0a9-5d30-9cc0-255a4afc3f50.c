// ============================================================
// 函数名称: sub_43512c
// 虚拟地址: 0x43512c
// WARP GUID: bd5a2d29-b0a9-5d30-9cc0-255a4afc3f50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC
// [内部子函数调用]: sub_4351dc, sub_435a38, sub_433a98, sub_43506c
// [被调用的父级函数]: sub_43550c
// ============================================================

int32_t __convention("regparm")sub_43512c(HGDIOBJ arg1)
{
    // 第一条实际指令: data_531750
    data_531750
    int32_t ecx
    sub_435a38(ecx, nullptr)
    sub_4351dc(arg1)
    ReleaseDC(*(arg1 + 0x5c), *(arg1 + 0x58))
    void* eax_4 = *(arg1 + 0x60)
    
    if (*(*(eax_4 + 0x14) + 0x10) != 1)
        int32_t edx_4 = *(arg1 + 0xc)
        int32_t edx_5 = edx_4 s>> 1
        bool c_1 = unimplemented  {sar edx, 0x1}
        
        if (edx_4 s>> 1 s< 0)
            edx_5 = adc.d(edx_5, 0, c_1)
        
        *(eax_4 + 0x20) = edx_5 + *(arg1 + 0x50)
    else
        int32_t edx_1 = *(arg1 + 0xc)
        int32_t edx_2 = edx_1 s>> 1
        bool c = unimplemented  {sar edx, 0x1}
        
        if (edx_1 s>> 1 s< 0)
            edx_2 = adc.d(edx_2, 0, c)
        
        *(eax_4 + 0x20) = edx_2 + *(arg1 + 0x54)
    
    sub_43506c(arg1, *(*(arg1 + 0x60) + 0x14))
    HGDIOBJ var_8_1 = arg1
    void (__convention("regparm")* var_c_1)(void* arg1, void* arg2) = sub_4351cc
    sub_433a98(arg1, *(*(arg1 + 0x60) + 0x14))
    *(arg1 + 0x60) = 0
    return 0
}
