// ============================================================
// 函数名称: sub_4a8bc0
// 虚拟地址: 0x4a8bc0
// WARP GUID: ea71cd41-7dcd-57db-84f6-307c653c31b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4a79a0, sub_4a8b38, sub_4a7e8d, sub_4a7670
// ============================================================

int32_t __convention("regparm")sub_4a8bc0(void* arg1)
{
    // 第一条实际指令: int32_t edx_1 = *(arg1 + 4)
    int32_t edx_1 = *(arg1 + 4)
    
    if (not(add_overflow(edx_1, *(arg1 + 0x24))))
        return edx_1 + *(arg1 + 0x24)
    
    sub_403010()
    noreturn
}
