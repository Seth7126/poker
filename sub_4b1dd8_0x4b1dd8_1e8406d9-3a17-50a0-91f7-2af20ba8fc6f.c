// ============================================================
// 函数名称: sub_4b1dd8
// 虚拟地址: 0x4b1dd8
// WARP GUID: 1e8406d9-3a17-50a0-91f7-2af20ba8fc6f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b19b0
// ============================================================

int32_t __convention("regparm")sub_4b1dd8(void* arg1)
{
    // 第一条实际指令: void* edx = *(*(arg1 + 0x10c) + 4)
    void* edx = *(*(arg1 + 0x10c) + 4)
    
    if (edx == 0)
        return 0
    
    return *(edx + 4)
}
