// ============================================================
// 函数名称: sub_49555c
// 虚拟地址: 0x49555c
// WARP GUID: a398668c-7776-5617-9378-1e81304d23bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ioctlsocket, WSAAsyncSelect
// [内部子函数调用]: sub_4956a4
// [被调用的父级函数]: sub_4960d8, sub_496499, sub_49649c, sub_4955b8, sub_495638
// ============================================================

int32_t __convention("regparm")sub_49555c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_10 = arg3
    int32_t var_10 = arg3
    int32_t esi = 0
    int32_t edi = 0
    
    if (0 != *(arg1 + 0x28))
        esi = 0x401
        edi = sub_4956a4(arg1)
    
    int32_t eax_2
    eax_2.b = *(arg1 + 0x28)
    WSAAsyncSelect(*(arg1 + 4), edi, esi, eax_2)
    int32_t result
    result.b = 0
    
    if (0 != *(arg1 + 0x28))
        return result
    
    var_10 = 0
    return ioctlsocket(*(arg1 + 4), 0x8004667e, &var_10)
}
