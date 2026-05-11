// ============================================================
// 函数名称: sub_4b28bf
// 虚拟地址: 0x4b28bf
// WARP GUID: bab2f09b-fcd5-5af4-bab0-3219663d2c3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_42eac0, sub_431bcc, sub_4b2d78, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b28bf(void* arg1, int32_t arg2, int16_t arg3, void* arg4 @ ebp, uint16_t arg5 @ esi, uint16_t arg6, void* arg7, int32_t arg8, int32_t arg9, int32_t arg10, char* arg11, int32_t arg12, int32_t arg13)
{
    // 第一条实际指令: char temp2 = *(arg4 + 0x73)
    char temp2 = *(arg4 + 0x73)
    *(arg4 + 0x73) += arg3:1.b
    void arg_73
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(&arg_73 + (arg4 << 1)), arg5)
    *(&arg_73 + (arg4 << 1)) = temp0
    int32_t arg_4
    int32_t* esp_1 = &arg_4
    char result
    char** esp_3
    int32_t eax_14
    char* entry_ebx
    
    if (temp2 == neg.b(arg3:1.b))
        *(entry_ebx + 0x20483) -= 1
        *(arg1 + 0x6a) += arg2.b
        *(arg1 + 7) += arg3:1.b
        arg1.b = arg1.b
        entry_ebx[0xef7de8c3] += arg3.b
        eax_14 = divs.dp.d(arg2:arg1, __return_addr)
    label_4b2953:
        *(esp_1 - 4) = eax_14
        SendMessageA()
        esp_1[2] = *(entry_ebx + 0x208)
        esp_1[1] = 0
        *esp_1 = 0x408
        *(esp_1 - 4) = sub_4318d0(entry_ebx)
        SendMessageA()
        sub_4b2d78(entry_ebx)
        esp_1[2] = *(entry_ebx + 0x210)
        esp_1[1] = 1
        *esp_1 = 0x405
        *(esp_1 - 4) = sub_4318d0(entry_ebx)
        SendMessageA()
        esp_1[2] = 1
        esp_1[1] = *(entry_ebx + 0x20c)
        *esp_1 = 0x414
        *(esp_1 - 4) = sub_4318d0(entry_ebx)
        result = SendMessageA()
        esp_3 = &esp_1[3]
    else
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg7 + 0x62), arg6)
        *(arg7 + 0x62) = temp0_1
        entry_ebx = arg11
        char* arg_40
        char* eax = arg_40
        void arg_44
        void* esp_2 = &arg_44
        
        if (temp2 + arg3:1.b u< temp2)
            goto label_4b2903
        
        eax.b ^= *eax
        *eax += eax.b
        arg_40 = entry_ebx
        esp_3 = &arg_40
        entry_ebx = eax
        sub_42eac0(entry_ebx)
        result = sub_431bcc(entry_ebx)
        
        if (result != 0)
            arg13 = 0
            arg12 = *(entry_ebx + 0x1fc)
            arg11 = 0x41b
            int32_t arg_30 = sub_4318d0(entry_ebx)
            esp_2 = &arg_30
        label_4b2903:
            SendMessageA()
            *(esp_2 + 0xc) = *(entry_ebx + 0x1f4)
            *(esp_2 + 8) = 0
            *(esp_2 + 4) = 0x417
            *esp_2 = sub_4318d0(entry_ebx)
            SendMessageA()
            *(esp_2 + 0xc) = *(entry_ebx + 0x1f8)
            *(esp_2 + 8) = 0
            *(esp_2 + 4) = 0x415
            *esp_2 = sub_4318d0(entry_ebx)
            SendMessageA()
            *(esp_2 + 0xc) = *(entry_ebx + 0x204)
            *(esp_2 + 8) = 0
            *(esp_2 + 4) = 0x407
            esp_1 = esp_2 + 4
            eax_14 = sub_4318d0(entry_ebx)
            goto label_4b2953
    *esp_3
    return result
}
