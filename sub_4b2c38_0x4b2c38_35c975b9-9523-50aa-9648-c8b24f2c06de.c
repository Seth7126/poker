// ============================================================
// 函数名称: sub_4b2c38
// 虚拟地址: 0x4b2c38
// WARP GUID: 35c975b9-9523-50aa-9648-c8b24f2c06de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b2abc
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b2c38(void** arg1, LPARAM arg2)
{
    // 第一条实际指令: LPARAM ecx = arg1[0x81]
    LPARAM ecx = arg1[0x81]
    
    if (arg2 s>= ecx)
        sub_4b2abc(arg1, arg1[0x84], ecx, arg2)
}
