// ============================================================
// 函数名称: sub_4a05ff
// 虚拟地址: 0x4a05ff
// WARP GUID: 4a05ef6b-09f4-559a-bb03-ba716e4da12d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_415d18, sub_403e4c, sub_403428, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_4a05ff(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += 1
    *arg1 += 1
    *arg1 += arg1.b
    bool p = unimplemented  {dec edi}
    bool z = arg6 == 0
    void* __return_addr_3 = arg1 - 1
    int32_t var_8 = arg3
    int32_t entry_result
    char* result_1 = entry_result
    int32_t* var_14 = &result_1
    int32_t var_18 = arg4
    int32_t var_1c = arg5
    int32_t var_20 = arg6
    int32_t* edi_2 = var_14
    char* result = result_1
    void* __return_addr_2 = __return_addr_3
    void* const __return_addr_1 = __return_addr
    int32_t* __return_addr_4
    int32_t* __return_addr_5 = __return_addr_4
    char* result_3
    char* result_2 = result_3
    void arg_c
    __bound_gprv_mema32(&arg_c, *(__return_addr_2 + 0x64))
    result_3:2.w = 0x6a69
    void* esp = &result_3:2
    *(arg2 * 3 + 0x6e)
    int32_t ebp_3 = *(arg2 * 3 + 0x6e) * 0x6f
    bool c = unimplemented  {imul ebp, dword [ebp+ebp*2+0x6e], 0x6f}
    bool o = unimplemented  {imul ebp, dword [ebp+ebp*2+0x6e], 0x6f}
    TEB* fsbase
    bool cond:0_1
    
    if (o)
        __return_addr_4 = *result_2
        esp = &__return_addr_4:2
        *(fsbase + result_2) = &__return_addr_4:2
        int32_t temp4_1 = data_532578
        data_532578 += 1
        cond:0_1 = temp4_1 != 0xffffffff
    label_4a06ab:
        
        if (not(cond:0_1))
            sub_403df8(&data_52fbf0)
    else
        if (c)
            __return_addr_2:1.b = __return_addr_2:1.b
            cond:0_1 = result_2 != 0xffacda88
            goto label_4a06ab
        
        if (z)
            sub_403df8(&data_52fbf0)
        else if (z || c)
            __return_addr_2:1.b |= *(result_2 + &data_52fbf0)
            sub_403df8(result_2)
        else
            if (arg6 s>= 0)
                if (not(p))
                    *__return_addr_1 ^= result
                    int32_t __return_addr_7 = result ^ *(result + 0x39383736)
                    int32_t __return_addr_6 = ebp_3 - *edi_2
                    *result_2 += result_2.b
                    *result_2 += result_2.b
                    __return_addr_4 = __return_addr_6
                    __return_addr = __return_addr_2
                    __return_addr_3 = __return_addr_7
                    esp = &__return_addr_3:2
                    
                    if (__return_addr_1.b != 0)
                        esp = &var_14:2
                        result_2 = sub_4033d0(__return_addr_5, __return_addr_1)
                    
                    __return_addr_2 = __return_addr_1
                    result = result_2
                    sub_415d18(result, 0, __return_addr_5)
                    result_2 = &result[0x24]
                
                sub_403e4c(result_2, data_52fbf0)
                result[0x28] = 0x3d
                
                if (__return_addr_2.b != 0)
                    sub_403428(result)
                    fsbase->NtTib.ExceptionList = *esp
                    esp += 0x10
                
                *esp
                *(esp + 4)
                *(esp + 8)
                return result
            
            __return_addr_4 = __return_addr_1
            esp = &__return_addr_4:2
            result_2.b += __return_addr_5:1.b
            int32_t eflags
            int32_t eflags_1
            char temp0_1
            char temp1_1
            temp0_1, temp1_1, eflags_1 = __aaa(result_2.b, result_2:1.b, eflags)
            result_2.b = temp0_1
            result_2:1.b = temp1_1
            char temp1_2 = mods.dp.b(result_2.w, __return_addr_2:1.b)
            result_2.b = divs.dp.b(result_2.w, __return_addr_2:1.b)
            result_2:1.b = temp1_2
    *(esp + 8)
    fsbase->NtTib.ExceptionList = *esp
    *(esp + 8) = 0x4a06cc
    return 0
}
