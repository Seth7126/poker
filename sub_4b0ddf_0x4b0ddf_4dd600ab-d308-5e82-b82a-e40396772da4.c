// ============================================================
// 函数名称: sub_4b0ddf
// 虚拟地址: 0x4b0ddf
// WARP GUID: 4dd600ab-d308-5e82-b82a-e40396772da4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4b0e20, sub_4b0e14, sub_4ae88c, sub_403e4c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __thiscallsub_4b0ddf(char arg1, char* arg2 @ eax, void* arg3, char** arg4, char** arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t temp0_1 = *0x41000000
    int32_t temp0_1 = *0x41000000
    *0x41000000 -= 1
    char** entry_ebx
    char*** esp
    bool c
    
    if (temp0_1 == 1)
        int32_t var_4
        __builtin_strncpy(&var_4, "oriz", 4)
        arg1 = arg6.b
        char** arg_18
        arg2 = arg_18
        
        if (temp0_1 != 1)
            int32_t eflags
            uint16_t* esi_2 = __outsd(arg5.w, *__return_addr, __return_addr, eflags)
            int32_t esi_3 = __outsb(arg5.w, *esi_2, esi_2, eflags)
            *arg2 += arg2.b
            *(arg3 - 0x75) += arg5.b
            arg2.b = __in_al_dx(arg5.w, eflags)
            arg_18 = arg4
            arg6 = esi_3
            return sub_403e4c(arg5, *(sub_4b0e14(arg2) + 0x70))
        
        char temp2_1 = arg4:1.b
        char temp3_1 = arg4:1.b
        entry_ebx:1.b = adc.b(temp2_1, temp3_1, c)
        c = adc.b(temp2_1, temp3_1, c) u< temp2_1 || (c && adc.b(temp2_1, temp3_1, c) == temp2_1)
        arg_18 = arg5
        esp = &arg_18
    
    entry_ebx[-0x5cf1d04].b = adc.b(entry_ebx[-0x5cf1d04].b, arg1, c)
    char temp1 = *(arg2 * 2 + 0x703b0000)
    *(arg2 * 2 + 0x703b0000) += 8
    
    if (temp1 == 0xf8)
        void* esi_6 = *0x8c0000ef
        
        if (esi_6 != 0)
            sub_4ae88c(esi_6, *(sub_4b0e20(0x8bffffff) + 0x84), *0x8c000103)
        
        sub_4030d0(*(sub_4b0e20(0x8bffffff) + 0x84))
        *(sub_4b0e20(0x8bffffff) + 0x84) = 0
    
    void* result = *0x8c00010b
    int32_t* esi_7 = *(result + 4)
    
    if (esi_7 != 0)
        result = (*(*esi_7 + 0x10))()
        
        if (result == esi_7[2])
            sub_403df8(*0x8c00010b + 0x14)
            sub_403df8(*0x8c00010b + 8)
            result = (*(**(*0x8c00010b + 4) + 0x20))()
    
    *esp
    esp[1]
    esp[2]
    return result
}
