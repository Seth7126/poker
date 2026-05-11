// ============================================================
// 函数名称: sub_43ca9c
// 虚拟地址: 0x43ca9c
// WARP GUID: 007d67e2-6d18-5ba6-8f14-aae7efa61a15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43ca9c
// [被调用的父级函数]: sub_43c480, sub_43ca9c
// ============================================================

void* __convention("regparm")sub_43ca9c(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    arg1.b = *(ebx + 0x2f)
    
    if (arg1.b == 2 && *(ebx + 0x58) != 0)
        *(ebx + 0x58)
        arg1.b = *((sub_43ca9c() & 0x7f) + 0x52e898)
    
    void* result
    result.b = *((arg1 & 0x7f) + 0x52e89c)
    return result
}
