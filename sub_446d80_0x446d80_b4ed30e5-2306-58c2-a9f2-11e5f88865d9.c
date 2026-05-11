// ============================================================
// 函数名称: sub_446d80
// 虚拟地址: 0x446d80
// WARP GUID: b4ed30e5-2306-58c2-a9f2-11e5f88865d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431078, sub_42b180, sub_4032ac, sub_42c754
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_446d80(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_431078(arg1)
    int32_t result = sub_431078(arg1)
    
    if (*(arg2 + 8) == 0)
        result = sub_42c754(arg1, *(arg2 + 4))
        int32_t* edi_1 = *(arg2 + 4)
        
        if (arg1 == edi_1[0x24])
            void var_1c
            sub_42b180(edi_1, &var_1c)
            void* ebx
            ebx.w = 0xffd1
            return sub_4032ac(edi_1, 0xffffffff, &var_1c)
    
    return result
}
