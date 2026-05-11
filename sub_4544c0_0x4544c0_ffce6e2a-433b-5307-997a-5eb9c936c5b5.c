// ============================================================
// 函数名称: sub_4544c0
// 虚拟地址: 0x4544c0
// WARP GUID: ffce6e2a-433b-5307-997a-5eb9c936c5b5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_453a38
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4544c0(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x24)
    int32_t* eax = *(arg1 + 0x24)
    
    if (eax != 0)
        return (*(*eax + 0x2c))()
    
    if (*(arg1 + 0x3b) != 0)
        return *(sub_453a38(arg1) + 0x28)
    
    return *(*(arg1 + 0x20) + 0x10)
}
