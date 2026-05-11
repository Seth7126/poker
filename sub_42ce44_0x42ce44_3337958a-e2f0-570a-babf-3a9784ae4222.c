// ============================================================
// 函数名称: sub_42ce44
// 虚拟地址: 0x42ce44
// WARP GUID: 3337958a-e2f0-570a-babf-3a9784ae4222
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PtInRect
// [内部子函数调用]: sub_4032ac, sub_42b994, sub_42ce08, sub_407800
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42ce44(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    
    if ((arg1[0x10].b & 2) != 0)
        sub_42b994(arg1, 0)
    
    if ((arg1[0x11].b & 2) != 0)
        arg1[0x11].w &= 0xfffd
        int32_t var_24
        sub_407800(*(arg2 + 8), &var_24)
        int32_t var_20
        (*(*arg1 + 0x40))(var_24, var_20)
        RECT lprc
        
        if (PtInRect(&lprc) != 0)
            int32_t ebx
            ebx.w = 0xffec
            sub_4032ac(arg1)
    
    return sub_42ce08(arg1, arg2, 0)
}
