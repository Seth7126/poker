// ============================================================
// 函数名称: sub_5170a4
// 虚拟地址: 0x5170a4
// WARP GUID: 6be0bc50-26b8-547b-8a8a-7d894486fee4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517120, sub_5170f8
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD**sub_5170a4()
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = 1
    sub_5170f8()
    void* eax_3 = *data_5301f4 + 0x1d344
    
    if (*(eax_3 + 8) != 0)
        *(eax_3 + 0xc) = 0x12
    
    *(eax_3 + 8) = 0
    *(eax_3 + 0x14) = 0
    *(eax_3 + 0x15) = 0
    *(eax_3 + 0x16) = 0
    *(eax_3 + 0x18) = 0x18
    *(eax_3 + 0x1c) = 0
    *(eax_3 + 0x21) = 0
    *(eax_3 + 4) = 2
    return sub_517120()
}
