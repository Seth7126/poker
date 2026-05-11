// ============================================================
// 函数名称: sub_446cc0
// 虚拟地址: 0x446cc0
// WARP GUID: c5e99529-e327-5b0f-880c-dbc25bc20163
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430c10
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_446cc0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_430c10(arg1, arg2)
    int32_t result = sub_430c10(arg1, arg2)
    
    if ((arg1[8].b & 0x10) == 0 && *(arg2 + 0xc) == 1)
        *(arg2 + 0xc) = 2
    
    return result
}
