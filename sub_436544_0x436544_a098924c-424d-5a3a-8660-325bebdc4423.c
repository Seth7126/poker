// ============================================================
// 函数名称: sub_436544
// 虚拟地址: 0x436544
// WARP GUID: a098924c-424d-5a3a-8660-325bebdc4423
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_44a4d8, sub_416678, sub_4289ac
// [被调用的父级函数]: sub_436dfc
// ============================================================

int32_t __convention("regparm")sub_436544(LPARAM arg1)
{
    // 第一条实际指令: int32_t* edi = *(arg1 + 0x4c)
    int32_t* edi = *(arg1 + 0x4c)
    char eax_1
    
    if (edi != 0)
        int32_t ebx
        ebx.w = 0xfff4
        eax_1 = sub_4032ac(edi, arg1)
    
    if ((edi == 0 || eax_1 == 0) && sub_44a4d8(*data_530660) == 0 && sub_416678(arg1) == 0
            && sub_4289ac(0xb040, 0, arg1) != 1)
        return 0
    
    return 1
}
