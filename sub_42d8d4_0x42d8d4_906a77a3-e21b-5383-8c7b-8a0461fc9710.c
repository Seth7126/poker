// ============================================================
// 函数名称: sub_42d8d4
// 虚拟地址: 0x42d8d4
// WARP GUID: 906a77a3-e21b-5383-8c7b-8a0461fc9710
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42d8d4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = (*(*arg1 + 0x2c))()
    void* result = (*(*arg1 + 0x2c))()
    
    if (result.b != 0)
        result = arg1[8]
        *(result + 0x150) = arg2
    
    return result
}
