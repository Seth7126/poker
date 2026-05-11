// ============================================================
// 函数名称: sub_4a0b84
// 虚拟地址: 0x4a0b84
// WARP GUID: 3c8f4ca9-f709-5f4d-aa5f-743062872fb6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49f0a4
// [被调用的父级函数]: sub_4b0b67, sub_4b0914
// ============================================================

int32_t __convention("regparm")sub_4a0b84(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x10) == 0)
    if (*(arg1 + 0x10) == 0)
        int32_t edx
        edx.b = 1
        *(arg1 + 0x10) = sub_49f0a4(&data_49ed40, edx)
    
    return (*(**(arg1 + 0x10) + 8))()
}
