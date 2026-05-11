// ============================================================
// 函数名称: sub_4727f8
// 虚拟地址: 0x4727f8
// WARP GUID: b25c7a3f-6266-5220-8c6a-ac68e0896a25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_4e649b, sub_478234
// ============================================================

void __convention("regparm")sub_4727f8(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 0x133a) != 0)
        *(ebx + 0x133c)
        arg1 = (*(ebx + 0x1338))()
    
    if (*(ebx + 0x133a) == 0 || arg1.b != 0)
        *(ebx + 0xa2c) = 3
}
