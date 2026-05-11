// ============================================================
// 函数名称: sub_4a80ac
// 虚拟地址: 0x4a80ac
// WARP GUID: cad78d3f-d706-56e4-85e7-f5f73765e200
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a80d4, sub_404078
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4a80ac(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* result = sub_404078(arg2)
    int32_t* result = sub_404078(arg2)
    
    if (result s<= 0)
        return result
    
    return sub_4a80d4(arg1, arg2, result, 0)
}
