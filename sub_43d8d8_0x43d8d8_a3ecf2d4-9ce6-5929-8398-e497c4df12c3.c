// ============================================================
// 函数名称: sub_43d8d8
// 虚拟地址: 0x43d8d8
// WARP GUID: a3ecf2d4-9ce6-5929-8398-e497c4df12c3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cbe0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43d8d8(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x48)
    int32_t result = *(arg1 + 0x48)
    
    if (result == 0)
        return sub_43cbe0(arg1)
    
    return result
}
