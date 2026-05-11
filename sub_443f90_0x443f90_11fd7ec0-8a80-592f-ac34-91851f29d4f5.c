// ============================================================
// 函数名称: sub_443f90
// 虚拟地址: 0x443f90
// WARP GUID: 11fd7ec0-8a80-592f-ac34-91851f29d4f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4190bc, sub_430ea8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_443f90(int32_t* arg1)
{
    // 第一条实际指令: sub_430ea8(arg1)
    sub_430ea8(arg1)
    void* result = arg1[0x88]
    
    if (result == 0)
        return result
    
    arg1[0x18]
    return sub_4190bc(*(result + 0x14))
}
