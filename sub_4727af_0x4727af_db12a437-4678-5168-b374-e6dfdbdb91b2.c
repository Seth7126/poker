// ============================================================
// 函数名称: sub_4727af
// 虚拟地址: 0x4727af
// WARP GUID: db12a437-4678-5168-b374-e6dfdbdb91b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SwapBuffers
// [内部子函数调用]: sub_48e980, sub_48e950
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_4727af(int32_t* arg1, void* arg2, char* arg3 @ eax, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi, void* arg7, char* arg8, void* arg9, HDC arg10)
{
    // 第一条实际指令: *arg1 += 1
    *arg1 += 1
    *arg3 += arg3.b
    int32_t var_4
    __builtin_strncpy(&var_4, "ler:", 4)
    int32_t* esp_1 = &var_4
    char temp2 = *(arg2 + 0x69) & arg3.b
    *(arg2 + 0x69) = temp2
    char* entry_ebx
    
    if (temp2 == 0)
        char temp3_1 = *arg3
        *arg3 += arg3.b
        
        if (temp3_1 != neg.b(arg3.b))
            *(arg4 - 4)
            *(entry_ebx + 0xa3c)
            (*(entry_ebx + 0xa38))()
    else
        uint16_t* gsbase
        *(gsbase + arg4 + 0x73) &= arg3.b
        *(arg6 + (arg4 << 1) + 0x70)
        bool c_1 = unimplemented  {imul esi, dword [edi+ebp*2+0x70], 0x20}
        int32_t edi = var_4
        entry_ebx = arg8
        char* arg_18
        char* eax = arg_18
        int32_t arg_1c
        esp_1 = &arg_1c
        
        if (c_1)
            entry_ebx = 0xa3a
            *(edi + arg10 - 0x75) += arg9:1.b
        else if (*(arg6 + (arg4 << 1) + 0x70) * 0x20 != 0xffffffff)
            *(gsbase + arg10 + 0x75) &= eax:1.b
            *(arg7 + 0x69)
            *(arg7 + 0x69) &= arg10:1.b
            int32_t eflags
            __outsb(arg9.w, *__return_addr, __return_addr, eflags)
            *(arg7 - 0x75) = rlc.b(*(arg7 - 0x75), 0xec, false)
            arg_18 = entry_ebx
            int32_t eax_4
            int32_t edx_1
            
            if (eax[0xcf9] != 0)
                edx_1:eax_4 = sx.q(*(eax + 0x2fc))
            
            if (eax[0xcf9] == 0 || mods.dp.d(edx_1:eax_4, 0xc8) == 0)
                sub_48e950(eax, 8)
                sub_48e980(eax, 8, SwapBuffers(*(eax + 0xa18)))
            
            return 
        
        *(entry_ebx + 0xa3c)
        (*(entry_ebx + 0xa38))()
    
    entry_ebx[0xa2c] = 3
    *esp_1
    esp_1[1]
    esp_1[2]
}
