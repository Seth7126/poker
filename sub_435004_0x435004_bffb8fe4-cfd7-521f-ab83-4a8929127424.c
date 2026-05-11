// ============================================================
// 函数名称: sub_435004
// 虚拟地址: 0x435004
// WARP GUID: bffb8fe4-cfd7-521f-ab83-4a8929127424
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_435004
// [被调用的父级函数]: sub_435004, sub_43506c
// ============================================================

void __convention("regparm")sub_435004(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if (*(arg1 + 0xc) == 0 && arg1 != *(*(arg2 - 4) + 0x64))
        void* eax_2 = *(arg1 + 0x14)
        
        if (*(*(arg2 - 4) + 0x64) != eax_2)
            *(arg1 + 0x20) = *(*(eax_2 + 0x14) + 0x20)
        else
            *(arg1 + 0x20) = *(*(arg2 - 4) + 0x68)
    
    if (*(arg1 + 8) != 0)
        sub_435004(arg2)
    
    if (*(arg1 + 0xc) != 0)
        sub_435004(arg2)
}
