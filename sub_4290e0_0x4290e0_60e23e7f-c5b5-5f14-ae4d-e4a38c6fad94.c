// ============================================================
// 函数名称: sub_4290e0
// 虚拟地址: 0x4290e0
// WARP GUID: 60e23e7f-c5b5-5f14-ae4d-e4a38c6fad94
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433178
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4290e0(void* arg1)
{
    // 第一条实际指令: int32_t result = (*(**(arg1 + 0x38) + 0x48))()
    int32_t result = (*(**(arg1 + 0x38) + 0x48))()
    
    if (result == 0)
        return result
    
    return sub_433178((*(**(arg1 + 0x38) + 0x48))())
}
