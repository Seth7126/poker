// ============================================================
// 函数名称: sub_4243ec
// 虚拟地址: 0x4243ec
// WARP GUID: 2e59ed20-8977-5e52-96de-a538b2485959
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_42ec58
// [被调用的父级函数]: sub_424338
// ============================================================

HWND __convention("regparm")sub_4243ec(char* arg1, int32_t* arg2, int32_t arg3, int32_t arg4 @ ebp)
{
    // 第一条实际指令: void* var_3 = &__return_addr:1
    void* var_3 = &__return_addr:1
    *arg1 += arg1.b
    *arg1 += arg1.b
    
    if (*(data_530a80 + 8) == 0 || *data_530a60 == 2 || (*(arg2 + 5) & 8) == 0)
        return sub_42ec58(arg1, arg2)
    
    void var_9b
    __builtin_memcpy(&var_9b, arg2, 0x8c)
    int32_t var_97
    int32_t var_97_1 = var_97 & 0xfffff7ff
    sub_42ec58(arg1, &var_9b)
    HWND hWnd = *(arg1 + 0x14c)
    
    if (hWnd == 0)
        return hWnd
    
    return SendMessageA(hWnd, 0xcf, 1, 0)
}
