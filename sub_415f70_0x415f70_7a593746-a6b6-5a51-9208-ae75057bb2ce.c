// ============================================================
// 函数名称: sub_415f70
// 虚拟地址: 0x415f70
// WARP GUID: 7a593746-a6b6-5a51-9208-ae75057bb2ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41060c, sub_415eb8, sub_415f38
// [被调用的父级函数]: sub_4408d0, sub_415d64
// ============================================================

void __convention("regparm")sub_415f70(int32_t* arg1)
{
    // 第一条实际指令: while (true)
    while (true)
        int32_t* ebx_1 = arg1[4]
        
        if (ebx_1 == 0)
            break
        
        int32_t* edi_1 = sub_41060c(ebx_1)
        int32_t* eax_1
        
        if ((*(edi_1 + 0x21) & 1) == 0)
            eax_1.w = 0x210
            eax_1.w = 0x210 & arg1[8].w
        
        if ((*(edi_1 + 0x21) & 1) == 0 && 0x210 != eax_1.w)
            sub_415eb8(arg1, edi_1)
        else
            sub_415f38(arg1, edi_1)
        
        int32_t edx_2
        edx_2.b = 1
        (*(*edi_1 - 4))()
}
