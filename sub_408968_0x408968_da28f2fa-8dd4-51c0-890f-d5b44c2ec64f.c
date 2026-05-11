// ============================================================
// 函数名称: sub_408968
// 虚拟地址: 0x408968
// WARP GUID: da28f2fa-8dd4-51c0-890f-d5b44c2ec64f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_48fa8f, sub_4298b4, sub_434c80, sub_437c44, sub_48fa98, sub_41b1ac, sub_417d44, sub_49e610
// ============================================================

int32_t __convention("regparm")sub_408968(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    char* edi = arg2
    uint32_t i = arg3 u>> 2
    bool cond:1 = i != 0
    bool cond:3 = i != 0
    
    while (i != 0)
        int32_t temp0_1 = *esi
        int32_t temp1_1 = *edi
        cond:1 = temp0_1 != temp1_1
        cond:3 = temp0_1 != temp1_1
        esi = &esi[4]
        edi = &edi[4]
        i -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (not(cond:1))
        int32_t i_1 = arg3 & 3
        
        while (i_1 != 0)
            char temp2_1 = *esi
            char temp3_1 = *edi
            cond:3 = temp2_1 != temp3_1
            esi = &esi[1]
            edi = &edi[1]
            i_1 -= 1
            
            if (temp2_1 != temp3_1)
                break
        
        if (not(cond:3))
            return 1
    
    return 0
}
