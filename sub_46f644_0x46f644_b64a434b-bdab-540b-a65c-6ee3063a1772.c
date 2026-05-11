// ============================================================
// 函数名称: sub_46f644
// 虚拟地址: 0x46f644
// WARP GUID: b64a434b-bdab-540b-a65c-6ee3063a1772
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_46f698
// ============================================================

int32_t __convention("regparm")sub_46f644(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 8) != 0)
    if (*(arg2 + 8) != 0)
        *(arg2 - 0x154)
        bool o_1 = unimplemented  {imul edx, dword [edx-0x154], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (sx.d(*(*(*(arg2 - 0x150) + 0xab0) + *(arg2 - 0x154) * 0x81c0 + arg1 * 0x118 - 0xa0))
                != *(arg2 + 8))
            return 0
    
    arg1.b = 1
    return arg1
}
