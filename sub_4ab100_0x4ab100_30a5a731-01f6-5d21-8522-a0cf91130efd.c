// ============================================================
// 函数名称: sub_4ab100
// 虚拟地址: 0x4ab100
// WARP GUID: 30a5a731-01f6-5d21-8522-a0cf91130efd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a93b0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4ab100(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x2c].b == 0)
    if (arg1[0x2c].b == 0)
        return (*(*arg1 + 0x70))()
    
    int32_t ecx
    int32_t edx
    return sub_4a93b0(arg1, edx, ecx)
}
