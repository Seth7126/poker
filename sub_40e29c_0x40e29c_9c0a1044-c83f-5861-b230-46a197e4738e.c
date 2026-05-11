// ============================================================
// 函数名称: sub_40e29c
// 虚拟地址: 0x40e29c
// WARP GUID: 9c0a1044-c83f-5861-b230-46a197e4738e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e288
// [被调用的父级函数]: sub_40e2dc
// ============================================================

int32_t __convention("regparm")sub_40e29c(void* arg1, void* arg2, PWSTR arg3)
{
    // 第一条实际指令: *(arg2 + 0x10)
    *(arg2 + 0x10)
    int32_t edi = *(arg2 + 8)
    char temp0 = *(arg2 + 0xb)
    
    if (temp0 u> 0xfe)
        return sub_40e288(arg1 + (edi & 0xffffff), arg3)
    
    if (temp0 u< 0xfe)
        return edi()
    
    return (*(sx.d(edi.w) + *arg1))()
}
