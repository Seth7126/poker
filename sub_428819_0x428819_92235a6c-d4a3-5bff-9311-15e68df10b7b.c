// ============================================================
// 函数名称: sub_428819
// 虚拟地址: 0x428819
// WARP GUID: 92235a6c-d4a3-5bff-9311-15e68df10b7b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, SetPropA, GetWindowLongA
// [内部子函数调用]: sub_4288c4
// [被调用的父级函数]: 无
// ============================================================

char* __fastcallsub_428819(char* arg1, int32_t arg2, char* arg3 @ eax, char* arg4 @ esi, int32_t arg5 @ edi, int80_t arg6 @ st0, int32_t arg7)
{
    // 第一条实际指令: arg3.b ^= *arg3
    arg3.b ^= *arg3
    arg3.b = *arg4
    void* esi = &arg4[1]
    void* const __return_addr_1 = __return_addr
    arg3[0x800405c] += __return_addr_1:1.b
    char* result = &arg3[1] ^ *(arg3 + 1)
    result.b ^= *result
    void* __return_addr_2
    __return_addr = __return_addr_2
    void* const* ebp = &__return_addr
    int32_t eflags
    
    if (result.b s>= 0)
        result[0x3a] += (&result[1]):1.b
        arg1[arg5 + 0x3b240043] += arg1:1.b
        *(__return_addr_1 + 2 + arg5) += arg2:1.b
        *(arg2 + (&result[1] << 1) + 0x45940043) += arg1:1.b
        result:1.b = (&result[1]):1.b + arg2.b
        result.b += result:1.b
        arg1 -= 1
        *(esi + (arg1 << 1) + 0x4c800043) += (__return_addr_1 + 6):1.b
        result.b += (__return_addr_1 + 7):1.b
        char temp0_1
        char temp1_1
        temp0_1, temp1_1, eflags = __aaa(result.b, result:1.b, eflags)
        result.b = temp0_1
        result:1.b = temp1_1
        __return_addr_1 += 8
        result[0x46] += arg2:1.b
    
    char temp1_2 = *arg1
    *arg1 += arg1.b
    void var_405b
    void* var_405f = &var_405b
    char* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    int32_t eflags_1
    int16_t temp0_2
    temp0_2, eflags_1 = __arpl_memw_gpr16(*(__return_addr_1 + 0x55), &__return_addr)
    *(__return_addr_1 + 0x55) = temp0_2
    
    if (temp1_2 + arg1.b u< temp1_2)
        return result
    
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    *result += result.b
    result[(arg1 << 2) + 0x280042] += (__return_addr_1 + 1):1.b
    *result += result.b
    arg6 f- fconvert.t(*result)
    void* eax_2
    eax_2:1.b = (&result[1]):1.b + arg2:1.b
    eax_2.b ^= *eax_2
    *(__return_addr_1 + 1) += arg2:1.b
    *(__return_addr_1 + 1 + esi_1) += (eax_2 + 1).b
    *(eax_2 + 2) += arg1.b
    char* eax_5 = (eax_2 + 2) ^ *(eax_2 + 2)
    eax_5.b ^= *eax_5
    TEB* fsbase
    char temp2 = *(fsbase + eax_5) ^ eax_5.b
    *(fsbase + eax_5) = temp2
    
    if (temp2 s< 0)
        *0x4284 = &__return_addr
        arg1[0x14c90] |= arg1.b
        *(arg1 + &data_52e740) += eax_5:1.b
        *0x4280 = *(eax_5 + 0x15c)
        *0x427c = 0xfffffffc
        *0x4278 = arg7
        SetWindowLongA()
        *0x4280 = 0xfffffff0
        *0x427c = arg7
        
        if ((GetWindowLongA() & 0x40000000) != 0)
            *0x4280 = 0xfffffff4
            *0x427c = arg7
            
            if (GetWindowLongA() == 0)
                *0x4280 = arg7
                *0x427c = 0xfffffff4
                *0x4278 = arg7
                SetWindowLongA()
    else
        arg1[((__return_addr_1 + 1) << 1) + 0x43] += (__return_addr_1 + 1):1.b
        *esi_1 += (&eax_5[1]).b
        *0x4284 = 0x4288
        void var_1
        ebp = &var_1
        __outsd(arg2.w, *esi_1, esi_1, eflags_1)
        
        if (&__return_addr == 1)
            return sub_4288c4(&eax_5[1]) __tailcall
    
    *0x4280 = data_52e740
    *0x427c = zx.d(data_53175e)
    *0x4278 = ebp[2]
    SetPropA()
    *0x4280 = data_52e740
    *0x427c = zx.d(data_53175c)
    *0x4278 = ebp[2]
    SetPropA()
    *0x4280 = ebp[5]
    *0x427c = ebp[4]
    *0x4278 = ebp[3]
    *0x4274 = ebp[2]
    int32_t eax_21 = data_52e740
    data_52e740 = 0
    ebp[-1] = (*(eax_21 + 0x15c))()
    *0x4274
    *0x4278
    *0x427c
    return *(__return_addr_1 + 1)
}
