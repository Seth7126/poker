// ============================================================
// 函数名称: sub_42c5b4
// 虚拟地址: 0x42c5b4
// WARP GUID: cc1d680f-651e-56ac-b533-ff32910795af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42cc28
// ============================================================

int32_t* __convention("regparm")sub_42c5b4(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (*(esi + 0x4b) == 5)
        arg1.b = 1
    else
        int32_t eax_1 = *arg2
        int32_t eax_3 = *arg3
        arg1 = (*(*esi + 0x34))(arg2, arg3, eax_1, eax_3)
        char edx = *(esi + 0x4b)
        
        if (edx == 0 || edx - 3 u< 2)
            *arg2 = eax_1
        
        if (edx u< 3)
            *arg3 = eax_3
    
    return arg1
}
