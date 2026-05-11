// ============================================================
// 函数名称: sub_4b2c1c
// 虚拟地址: 0x4b2c1c
// WARP GUID: b099f214-ee6a-5bed-8a70-9639875ce7db
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b2abc
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b2c1c(void** arg1, LPARAM arg2)
{
    // 第一条实际指令: LPARAM ecx_2 = arg1[0x82]
    LPARAM ecx_2 = arg1[0x82]
    
    if (arg2 s<= ecx_2)
        sub_4b2abc(arg1, arg1[0x84], arg2, ecx_2)
}
