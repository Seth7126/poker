// ============================================================
// 函数名称: sub_4a73a4
// 虚拟地址: 0x4a73a4
// WARP GUID: dd182de3-6a17-5131-aae6-a48f3f2830b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

bool __convention("regparm")sub_4a73a4(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 + 0x48))()
    (*(*arg1 + 0x48))()
    int32_t* edx_1 = arg1[0x1d]
    bool result = edx_1 != 0
    
    if (result == 0)
        return result
    
    return (*(*edx_1 + 0x48))()
}
