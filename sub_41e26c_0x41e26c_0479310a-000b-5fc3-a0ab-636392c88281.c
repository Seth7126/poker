// ============================================================
// 函数名称: sub_41e26c
// 虚拟地址: 0x41e26c
// WARP GUID: 0479310a-000b-5fc3-a0ab-636392c88281
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetObjectA
// [内部子函数调用]: sub_41d214, sub_41e440
// [被调用的父级函数]: sub_41dd64, sub_41e1b4, sub_41f1b0, sub_41ed0c
// ============================================================

void __convention("regparm")sub_41e26c(HPALETTE arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 8) == 0 || *(ebx + 0x14) != 0)
        return 
    
    sub_41e440(arg1)
    
    if (*(ebx + 0x30) == 0)
        GetObjectA(*(ebx + 8), 0x54, ebx + 0x18)
        *(ebx + 0x30) = 0x28
        *(ebx + 0x34) = *(ebx + 0x1c)
        *(ebx + 0x38) = *(ebx + 0x20)
        *(ebx + 0x3c) = 1
        int32_t ecx_2
        ecx_2.w = *(ebx + 0x28)
        ecx_2.w *= *(ebx + 0x2a)
        *(ebx + 0x3e) = ecx_2.w
    
    void* var_c_2 = ebx + 0x18
    *(ebx + 0x10)
    *(ebx + 0x14) = sub_41d214(*(ebx + 8), nullptr)
}
