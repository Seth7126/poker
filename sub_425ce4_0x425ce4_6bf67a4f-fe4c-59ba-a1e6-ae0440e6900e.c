// ============================================================
// 函数名称: sub_425ce4
// 虚拟地址: 0x425ce4
// WARP GUID: 6bf67a4f-fe4c-59ba-a1e6-ae0440e6900e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PtInRect
// [内部子函数调用]: sub_42c754, sub_425c9c
// [被调用的父级函数]: sub_425fce
// ============================================================

LRESULT __convention("regparm")sub_425ce4(int32_t* arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: int32_t pt = *arg2
    int32_t pt = *arg2
    RECT* var_34 = arg2[1]
    RECT* var_3c = var_34
    (*(*arg1 + 0x40))(pt, var_3c, pt)
    RECT lprc_1
    
    if (PtInRect(&lprc_1) != 0)
        LRESULT i = sub_425c9c(arg1)
        
        for (int32_t eax_5 = (*(*arg1[0x7c] + 0x14))(); eax_5 s> i; i += 1)
            RECT lprc
            var_3c = &lprc
            sub_42c754(arg1, var_3c)
            var_3c = var_34
            
            if (PtInRect(&lprc, pt) != 0)
                return i
        
        if (arg3 == 0)
            return i
    
    return 0xffffffff
}
