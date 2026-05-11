// ============================================================
// 函数名称: sub_4ee134
// 虚拟地址: 0x4ee134
// WARP GUID: 2eeeb2ac-16c5-5479-852f-af792229b34d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ed7a0, sub_4ed16c, sub_4eca00, sub_4ee074, sub_4eca48, sub_408e80
// [被调用的父级函数]: sub_527454
// ============================================================

int32_tsub_4ee134()
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    void* esi = (data_7a7644 << 3) + &data_7a6eb8
    int32_t eax
    eax.b = *esi
    
    if (eax.b != 1)
        if (eax.b == 6)
            sub_4eca00()
            return 0
        
        char edx_2 = eax.b
        char temp2_1
        
        if (edx_2 != 2)
            temp2_1 = edx_2 - 2
        
        if (edx_2 == 2 || temp2_1 == 2)
            entry_result = 0
            eax.b = 1
            sub_4ed16c(eax.b)
        else if (eax.b != 5)
            char temp3_1 = eax.b
            eax.b -= 3
            char temp4_1
            
            if (temp3_1 != 3)
                eax.b -= 4
                temp4_1 = eax.b
                eax.b -= 3
            
            if (temp3_1 == 3 || temp4_1 u< 3)
                sub_4ed7a0()
                sub_4ed16c(1)
                return 0
        else
            if (*(*data_5301f4 + 0x10024) == 0 && *(*data_5301f4 + 0x1014c) == 2)
                *(*data_5301f4 + 0x10024) = *(*data_5301f4 + 0x10020)
                *(*data_5301f4 + 0x10028) = *(*data_5301f4 + 0xfff0)
                sub_4ed7a0()
                sub_4eca48()
            
            entry_result.b = 1
            
            if (*(*data_5301f4 + 0x10024) != 0 && (
                    *(*data_5301f4 + 0x10020) != *(*data_5301f4 + 0x10024)
                    || *(*data_5301f4 + 0x10004) == 8))
                void* eax_22
                eax_22.b = 1
                sub_4ed16c(eax_22.b)
                return 0
    else
        int32_t eax_2 = sub_408e80(*(esi + 4))
        
        if (eax_2 != sub_4ee074(eax_2))
            entry_result.b = 1
            sub_4eca48()
        else
            entry_result = 0
            
            if (*(*data_5301f4 + 0x10164) != 0 || *(*data_5301f4 + 0x10250) != 0)
                sub_4eca48()
            else
                sub_4eca00()
    
    return entry_result
}
