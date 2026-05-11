// ============================================================
// 函数名称: sub_43304c
// 虚拟地址: 0x43304c
// WARP GUID: 3b293bbe-5c06-5e38-b150-d230ed4256eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowCursor
// [内部子函数调用]: sub_437154, sub_432fec, sub_4330ac, sub_432f20
// [被调用的父级函数]: sub_429b88, sub_4298b4
// ============================================================

int32_t __convention("regparm")sub_43304c(int32_t* arg1, HWND arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = ecx
    int32_t result = 0
    
    if (sub_437154(arg1) != 0)
        if (*(arg1 + 0x62) == 0)
            sub_432fec(arg1[0x1a], arg1[0x1c], arg1, arg1[0x1b])
        
        int32_t __saved_ebp
        void* ebp_1 = sub_432f20(arg1, &__saved_ebp)
        result = sub_4330ac(*(ebp_1 - 4), arg2, arg1, *(ebp_1 + 8))
        
        if (result.b != 0)
            ShowCursor(0)
    
    return result
}
