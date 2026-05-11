// ============================================================
// 函数名称: sub_430f7c
// 虚拟地址: 0x430f7c
// WARP GUID: 3330be65-cd4c-584b-868b-45b6fa3119bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowVisible
// [内部子函数调用]: sub_42e898, sub_431bcc, sub_4317d8
// [被调用的父级函数]: sub_4246a4, sub_44bee4, sub_4423e8, sub_443fcc, sub_4264c4
// ============================================================

int32_t __convention("regparm")sub_430f7c(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    if ((*(arg1 + 0x40) & 0x10) != 0 && *(arg1 + 0x24) != 0 && sub_431bcc(arg1) != 0)
        BOOL eax_3
        eax_3, ecx = IsWindowVisible(*(arg1 + 0x14c))
        
        if (eax_3 != 0)
            ecx = sub_4317d8(arg1)
    
    return sub_42e898(ecx, 0xb011)
}
