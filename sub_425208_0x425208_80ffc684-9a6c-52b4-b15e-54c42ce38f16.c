// ============================================================
// 函数名称: sub_425208
// 虚拟地址: 0x425208
// WARP GUID: 80ffc684-9a6c-52b4-b15e-54c42ce38f16
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440de8, sub_430df0, sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_425208(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 4) == 0xd && *(arg1 + 0x1fa) != 0)
    if (*(arg2 + 4) == 0xd && *(arg1 + 0x1fa) != 0)
    label_425232:
        char eax_1
        int32_t edx
        eax_1, edx = sub_440de8(*(arg2 + 8))
        edx.b = 0
        
        if (0 == eax_1)
            int32_t ebx
            ebx.w = 0xffbc
            
            if (sub_4032ac(arg1, edx) != 0)
                ebx.w = 0xffec
                int32_t result = sub_4032ac(arg1)
                *(arg2 + 0xc) = 1
                return result
    else if (*(arg2 + 4) == 0x1b && *(arg1 + 0x1f9) != 0)
        goto label_425232
    
    return sub_430df0()
}
