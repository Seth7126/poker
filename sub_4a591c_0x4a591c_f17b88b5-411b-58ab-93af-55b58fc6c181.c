// ============================================================
// 函数名称: sub_4a591c
// 虚拟地址: 0x4a591c
// WARP GUID: f17b88b5-411b-58ab-93af-55b58fc6c181
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a591c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result = (*(*arg1 + 0x38))()
    int32_t result = (*(*arg1 + 0x38))()
    
    if (*(arg1 + 0x42) == 0)
        return result
    
    arg1[0x11]
    arg1[0x10]()
    return sub_4128b4(arg2)
}
