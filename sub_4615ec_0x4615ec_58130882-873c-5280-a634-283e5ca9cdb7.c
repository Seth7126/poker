// ============================================================
// 函数名称: sub_4615ec
// 虚拟地址: 0x4615ec
// WARP GUID: 58130882-873c-5280-a634-283e5ca9cdb7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461334, sub_4612e4
// [被调用的父级函数]: sub_46195c
// ============================================================

int32_t* __convention("regparm")sub_4615ec(int32_t* arg1)
{
    // 第一条实际指令: sub_461314(arg1, 0xda)
    sub_461314(arg1, 0xda)
    sub_461334(arg1, *(arg1 + 0xe9) * 2 + 6)
    sub_4612e4(arg1, (*(arg1 + 0xe9)).b)
    int32_t i = 0
    void* edi = arg1 + 0xed
    
    while (i s< *(arg1 + 0xe9))
        int32_t* esi_1 = *edi
        sub_4612e4(arg1, (*esi_1).b)
        int32_t eax_4 = esi_1[5]
        char edx_5 = (esi_1[6]).b
        
        if (*(arg1 + 0xd9) != 0)
            if (*(arg1 + 0x131) != 0)
                eax_4 = 0
            else
                edx_5 = 0
                
                if (*(arg1 + 0x139) != 0 && arg1[0x2b] == 0)
                    eax_4 = 0
        
        sub_4612e4(arg1, edx_5 + (eax_4 << 4).b)
        i += 1
        edi += 4
    
    sub_4612e4(arg1, (*(arg1 + 0x131)).b)
    sub_4612e4(arg1, (*(arg1 + 0x135)).b)
    return sub_4612e4(arg1, (*(arg1 + 0x139) << 4).b + (*(arg1 + 0x13d)).b)
}
