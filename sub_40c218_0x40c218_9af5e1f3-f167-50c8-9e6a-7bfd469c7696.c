// ============================================================
// 函数名称: sub_40c218
// 虚拟地址: 0x40c218
// WARP GUID: 9af5e1f3-f167-50c8-9e6a-7bfd469c7696
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40bde8, sub_409524
// [被调用的父级函数]: sub_40c1f0, sub_447f54, sub_408bec, sub_447f44
// ============================================================

void* __convention("regparm")sub_40c218(char* arg1, char arg2)
{
    // 第一条实际指令: void* i
    void* i
    
    for (i = sub_409524(arg1, arg2); i != 0; i = sub_409524(i + 1, arg2))
        char temp0_1 = sub_40bde8()
        
        if (temp0_1 u< 1)
            break
        
        if (temp0_1 == 1)
            i += 1
    
    return i
}
