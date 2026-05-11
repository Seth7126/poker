// ============================================================
// 函数名称: sub_490b6c
// 虚拟地址: 0x490b6c
// WARP GUID: f3ebdb9a-1209-5326-8f93-035aa51aeb36
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_490ef8
// ============================================================

void __convention("regparm")sub_490b6c(void** arg1)
{
    // 第一条实际指令: if (arg1[0xf].b == 0)
    if (arg1[0xf].b == 0)
        return 
    
    int32_t* eax_4 = arg1[4]
    void* ebx_1
    arg1, ebx_1 = sub_490768(arg1, "Unlock", 
        (*(*eax_4 + 0x4c))(eax_4, arg1[0xb], arg1[0xd], arg1[0xc], arg1[0xe]))
    arg1.b = *(ebx_1 + 0x3c)
    arg1.b ^= 1
    *(ebx_1 + 0x3c) = arg1.b
}
