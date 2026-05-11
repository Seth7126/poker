// ============================================================
// 函数名称: sub_43cac8
// 虚拟地址: 0x43cac8
// WARP GUID: 2edecbc5-5e46-55c7-b7aa-588ccf691a8e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cac8
// [被调用的父级函数]: sub_43c950, sub_43cac8
// ============================================================

void* __convention("regparm")sub_43cac8(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    arg1.b = *(ebx + 0x30)
    
    if (arg1.b == 2 && *(ebx + 0x58) != 0)
        *(ebx + 0x58)
        arg1.b = *((sub_43cac8() & 0x7f) + 0x52e898)
    
    void* result
    result.b = *((arg1 & 0x7f) + 0x52e89c)
    return result
}
