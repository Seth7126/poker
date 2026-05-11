// ============================================================
// 函数名称: sub_4163fc
// 虚拟地址: 0x4163fc
// WARP GUID: 06d09120-1f47-5554-bbca-2072c3773bd8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403380
// [被调用的父级函数]: sub_415ee0, sub_415f38, sub_41627c
// ============================================================

void __convention("regparm")sub_4163fc(void** arg1, char arg2)
{
    // 第一条实际指令: void** edi = arg1
    void** edi = arg1
    int32_t* esi = edi[1]
    
    if (esi == 0)
        return 
    
    char var_10c[0x100]
    sub_404054(&var_10c, edi[2], 0xff)
    arg1 = sub_403380(esi, &var_10c)
    
    if (arg1 == 0)
        return 
    
    if (arg2 == 0)
        *arg1 = nullptr
    else
        *arg1 = edi
}
