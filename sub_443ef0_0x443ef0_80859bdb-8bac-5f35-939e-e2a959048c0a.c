// ============================================================
// 函数名称: sub_443ef0
// 虚拟地址: 0x443ef0
// WARP GUID: 80859bdb-8bac-5f35-939e-e2a959048c0a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_443f04, sub_442db4
// ============================================================

int32_t __convention("regparm")sub_443ef0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x244)
    int32_t result = *(arg1 + 0x244)
    
    if (result != 0)
        return result
    
    return *(data_5317dc + 0x34)
}
